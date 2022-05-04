/*
 * @Description: 
 * @version: 
 * @Author: 秦武胜
 * @Date: 2021-12-03 16:20:46
 * @LastEditors: 秦武胜
 * @LastEditTime: 2021-12-03 16:41:09
 * @FilePath: /Learn/设计模式/Bridge/src/ConcreteAbstractionImpA.cpp
 */

#include "ConcreteAbstractionImpA.h"
#include <iostream>
#include <string>
using namespace std;

ConcreteAbstractionImpA::ConcreteAbstractionImpA()
{
    cout << "适配系统A" << endl;
    cout << "ConcreteAbstractionImpA::ConcreteAbstractionImpA()" << endl;
}

ConcreteAbstractionImpA::~ConcreteAbstractionImpA()
{
    cout << "ConcreteAbstractionImpA::~ConcreteAbstractionImpA()" << endl;
}

void ConcreteAbstractionImpA::Operation()
{
    cout << "对应系统A的操作" << endl;
    cout << "ConcreteAbstractionImpA::Operation()" << endl;
}