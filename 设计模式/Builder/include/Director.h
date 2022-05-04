/*
 * @Descripttion: 导演类
 * @version: 
 * @Author: 秦武胜
 * @Date: 2021-11-30 20:09:05
 * @LastEditors: 秦武胜
 * @LastEditTime: 2021-11-30 21:20:43
 */

#ifndef _DIRECTOR_H_
#define _DIRECTOR_H_
#include "Builder.h"
class Director
{
private:
public:
    // 导演类
    Director(Builder *bld);

    ~Director();

public:
    void Construct();

private:
    Builder *m_bld;
};

#endif // _DIRECTOR_H_