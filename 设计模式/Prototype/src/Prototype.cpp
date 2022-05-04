/*
 * @Description: 
 * @version: 
 * @Author: 秦武胜
 * @Date: 2021-12-01 20:36:14
 * @LastEditors: 秦武胜
 * @LastEditTime: 2021-12-01 20:38:28
 * @FilePath: /Learn/设计模式/Prototype/src/Prototype.cpp
 */
#include "Prototype.h"
#include <iostream>
Prototype::Prototype()
{
    std::cout << "Prototype 构造函数被调用" << std::endl;
}

Prototype::~Prototype()
{
    std::cout << "Prototype 析构函数被调用" << std::endl;
}