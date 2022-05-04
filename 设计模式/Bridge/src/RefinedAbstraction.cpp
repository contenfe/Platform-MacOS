/*
 * @Description: 
 * @version: 
 * @Author: 秦武胜
 * @Date: 2021-12-03 16:08:48
 * @LastEditors: 秦武胜
 * @LastEditTime: 2021-12-03 16:48:24
 * @FilePath: /Learn/设计模式/Bridge/src/RefinedAbstraction.cpp
 */

#include "RefinedAbstraction.h"
#include <iostream>
#include <string>
using namespace std;

RefinedAbstraction::RefinedAbstraction(AbstractionImp *imp)
{
    m_imp = imp;
}

RefinedAbstraction::~RefinedAbstraction()
{
    cout << "RefinedAbstraction::~RefinedAbstraction()" << endl;
}

void RefinedAbstraction::Operation()
{
    cout << "RefinedAbstraction::Operation()" << endl;

    cout << "逻辑封装" << endl;
    cout << "响应系统A的操作" << endl;
    m_imp->Operation();
}