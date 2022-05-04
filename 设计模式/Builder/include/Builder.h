/*
 * @Descripttion:  Builder 设计模式 builder 
 * @version: 
 * @Author: 秦武胜
 * @Date: 2021-11-26 17:03:31
 * @LastEditors: 秦武胜
 * @LastEditTime: 2021-12-01 13:32:54
 */

#ifndef _BUILDER_H_
#define _BUILDER_H_

#include "Product.h"

class Builder
{
protected:
    Builder();

private:
public:
    virtual ~Builder();

    virtual void BuilderPartA(string builder) = 0;
    virtual void BuilderPartB(string builder) = 0;
    virtual void BuilderPartC(string builder) = 0;
    virtual Product *GetProduct() = 0;
};

#endif
