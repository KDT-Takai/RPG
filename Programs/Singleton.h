#pragma once

//	�V���O���g�����N���X
template <typename T>
class Singleton
{
protected:
	virtual ~Singleton() = default;
	Singleton() = default;
public:
	Singleton(const Singleton&) = delete;
	Singleton& operator=(const Singleton&) = delete;

	static T& Instance() {
		static T instance;
		return instance;
	}
};