#pragma once
#include <iostream>
#include <vector>
#include <stack>

// �O���錾
template <typename T>
class ObjectPool;

template <typename T>
class PoolHandle {
	// friend class �w�肵���N���X�ɑ΂��āA�v���C�x�[�g�����o�[��v���e�N�e�b�h�����o�[�ւ̃A�N�Z�X����^����
	friend class ObjectPool<T>;
	explicit PoolHandle(T* obj, ObjectPool<T>* pool)
		: obj_(obj), pool_(pool) {
	}
public:
	// �R�s�[�֎~
	PoolHandle(const PoolHandle&) = delete;
	// ���[�u�\
	PoolHandle(PoolHandle&& other) noexcept
		: obj_(other.obj_), pool_(other.pool_) {
		other.obj_ = nullptr;
		other.pool_ = nullptr;
	}
	// �f�X�g���N�^�Ŏ����ԋp
	~PoolHandle() {
		//if (obj_ && pool_) {
		//	pool_->Release(obj_);
		//}
		pool_->Release(obj_);
	}
	// �A�N�Z�X���Z�q
	T* operator->() { return obj_; }
	T& operator*() { return *obj_; }
private:
	T* obj_;
	ObjectPool<T>* pool_;
};

template <typename T>
class ObjectPool {
	friend class PoolHandle<T>;
public:
	explicit ObjectPool(size_t capacity) {
		objects_.reserve(capacity);
		for (size_t i = 0; i < capacity; ++i) {
			objects_.emplace_back(std::make_unique<T>());
			free_.push(objects_.back().get());
		}
	}
	// �擾
	PoolHandle<T> Acquire() {
		if (free_.empty()) throw std::runtime_error("empty");	// ��̏ꍇ
		T* obj = free_.top();
		free_.pop();
		return PoolHandle<T>(obj, this);
	}
private:
	void Release(T* obj) { free_.push(obj); }
	std::vector<std::unique_ptr<T>> objects_;
	std::stack<T*> free_;
};