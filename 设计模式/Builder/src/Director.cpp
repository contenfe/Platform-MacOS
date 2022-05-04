/*
 * @Author: 秦武胜
 * @Date: 2021-11-30 20:12:57
 * @LastEditors: 秦武胜
 * @LastEditTime: 2021-11-30 21:29:51
 * @Description: file content
 * @FilePath: /Learn/设计模式/Builder/src/Director.cpp
 */
/*
 * @Descripttion: 
 * @version: 
 * @Author: 秦武胜
 * @Date: 2021-11-30 20:12:57
 * @LastEditors: 秦武胜
 * @LastEditTime: 2021-11-30 20:12:58
 */

#include "Director.h"

Director::Director(Builder *bld)
{
    m_bld = bld;
}

Director::~Director()
{
    cout << "Director 析构函数" << endl;
}

/**
 * @description: 
 * @param {*}
 * @return {*}
 */
void Director::Construct()
{
    string name = "1";
    m_bld->BuilderPartA(name);
    name = "2";
    m_bld->BuilderPartB(name);
    name = "3";
    m_bld->BuilderPartC(name);
}