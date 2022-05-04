/*
 * @Description: 
 * @version: 
 * @Author: 秦武胜
 * @Date: 2021-12-03 15:56:59
 * @LastEditors: 秦武胜
 * @LastEditTime: 2021-12-03 17:15:26
 * @FilePath: /Learn/设计模式/Bridge/src/Abstraction.cpp
 */

#include "Abstraction.h"
#include <iostream>
#include <string>
using namespace std;

Abstraction::~Abstraction()
{
    cout << "\n\n\n\nfather" << endl;
    cout << "~ ABSTRACTION() " << endl;
}

// void Abstraction::Operation()
// {
//     cout << "逻辑封装" << endl;
//     cout << "Abstraction::Operation() " << endl;
// }

Abstraction::Abstraction()
{
    cout << "\n\n\n\nfather" << endl;
    cout << "软件逻辑/用户需求" << endl;
    cout << "Abstraction::Abstraction() " << endl;
}