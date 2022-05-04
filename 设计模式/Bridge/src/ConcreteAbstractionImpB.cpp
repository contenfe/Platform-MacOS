/*
 * @Description: 
 * @version: 
 * @Author: 秦武胜
 * @Date: 2021-12-03 16:20:46
 * @LastEditors: 秦武胜
 * @LastEditTime: 2021-12-03 16:52:20
 * @FilePath: /Learn/设计模式/Bridge/src/ConcreteAbstractionImpB.cpp
 */

#include "ConcreteAbstractionImpB.h"
#include <iostream>
using namespace std;

ConcreteAbstractionImpB::ConcreteAbstractionImpB()
{
    cout << "ConcreteAbstractionImpA::ConcreteAbstractionImpB()" << endl;
}

ConcreteAbstractionImpB::~ConcreteAbstractionImpB()
{
    cout << "ConcreteAbstractionImpB::~ConcreteAbstractionImpB()" << endl;
}

void ConcreteAbstractionImpB::Operation()
{
    cout << "ConcreteAbstractionImpB::Operation()" << endl;
}