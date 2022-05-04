/*
 * @Descripttion: 
 * @version: 
 * @Author: 秦武胜
 * @Date: 2021-11-30 20:05:15
 * @LastEditors: 秦武胜
 * @LastEditTime: 2021-11-30 20:13:54
 */
#include "Builder.h"

Builder::~Builder()
{
    cout << "Builder 析构函数" << endl;
}

Builder::Builder()
{
    cout << "Builder 构造函数" << endl;
}