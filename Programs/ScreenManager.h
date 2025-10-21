#pragma once
#include <iostream>
#include "ScreenBase.h"
#include "Singleton.h"

class ScreenManager : public Singleton<ScreenManager> {
    friend class Singleton<ScreenManager>;
protected:

    ScreenManager();

    std::unique_ptr<ScreenBase> screen;
    std::unique_ptr<ScreenBase> next;
    bool changeFlag = false;

public:

    void Update();
    void Render();

    template <typename T>
    void ChangeScreen()
    {
        // screen = std::make_unique<T>();
        next = std::make_unique<T>();
        changeFlag = true;
    }

};