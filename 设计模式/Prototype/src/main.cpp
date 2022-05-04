/*
 * @Description: main方法
 * @version: 
 * @Author: 秦武胜
 * @Date: 2021-12-01 20:43:17
 * @LastEditors: 秦武胜
 * @LastEditTime: 2021-12-01 20:52:05
 * @FilePath: /Learn/设计模式/Prototype/src/main.cpp
 */

#include <iostream>
#include "Prototype.h"
#include "ConcretePrototype.h"

int main(int argc, char **argv)
{
    Prototype *p = new ConcretePrototype();

    Prototype *p1 = p->Clone();

    return 0;
}