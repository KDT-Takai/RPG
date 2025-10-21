#include "ScreenManager.h"
#include "Game.h"

ScreenManager::ScreenManager()
{
    screen = std::make_unique<Game>();
}

void ScreenManager::Update()
{
    screen->Update();
    if (changeFlag) {
        screen = std::move(next);
        next.reset();
        changeFlag = false;
    }

}

void ScreenManager::Render()
{
    screen->Render();
}