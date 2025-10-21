#pragma once
#include <iostream>

//==============================
// ��ʊ��N���X 
//==============================
class ScreenBase
{
protected:

    std::string screenName;

public:

    ScreenBase() = default;
    virtual ~ScreenBase() = default;

    virtual void Update() = 0;
    virtual void Render() = 0;

};