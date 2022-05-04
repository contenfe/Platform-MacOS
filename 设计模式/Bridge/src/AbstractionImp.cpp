/*
 * @Description: 
 * @version: 
 * @Author: 秦武胜
 * @Date: 2021-12-03 16:53:44
 * @LastEditors: 秦武胜
 * @LastEditTime: 2021-12-03 17:15:32
 * @FilePath: /Learn/设计模式/Bridge/src/AbstractionImp.cpp
 */
#include "AbstractionImp.h"
#include <iostream>
using namespace std;

AbstractionImp::AbstractionImp()
{
    cout << "\n\n\n\nfather" << endl;
    cout << "AbstractionImp::AbstractionImp()" << endl;
}

AbstractionImp::~AbstractionImp()
{
    cout << "\n\n\n\nfather" << endl;
    cout << "AbstractionImp::~AbstractionImp()\n\n"
         << endl;
}