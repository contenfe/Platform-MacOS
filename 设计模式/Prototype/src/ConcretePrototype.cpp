/*
 * @Description: 
 * @version: 
 * @Author: 秦武胜
 * @Date: 2021-12-01 20:36:27
 * @LastEditors: 秦武胜
 * @LastEditTime: 2021-12-01 20:57:02
 * @FilePath: /Learn/设计模式/Prototype/src/ConcretePrototype.cpp
 */
#include "ConcretePrototype.h"
#include <iostream>
ConcretePrototype::ConcretePrototype()
{
    std::cout << "ConcretePrototype 构造函数1被调用" << std::endl;
}

ConcretePrototype::ConcretePrototype(const ConcretePrototype &cp)
{
    std::cout << "ConcretePrototype 构造函数2被调用" << std::endl;
}

ConcretePrototype::~ConcretePrototype()
{
    std::cout << "ConcretePrototype 析构函数被调用" << std::endl;
}

Prototype *ConcretePrototype::Clone() const
{
    std::cout << "ConcretePrototype Clone函数被调用" << std::endl;
    return (Prototype *)this;
}