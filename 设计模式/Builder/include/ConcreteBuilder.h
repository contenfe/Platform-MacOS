/*
 * @Descripttion: 
 * @version: 
 * @Author: 秦武胜
 * @Date: 2021-11-26 17:24:30
 * @LastEditors: 秦武胜
 * @LastEditTime: 2021-11-30 21:34:02
 */
#ifndef _CONCRETEBUILDER_H_
#define _CONCRETEBUILDER_H_

#include "Builder.h"

class ConcreteBuilder : public Builder
{
private:
public:
    ConcreteBuilder();
    ~ConcreteBuilder();

    void BuilderPartB(string builder);
    void BuilderPartC(string builder);
    void BuilderPartA(string builder);

    Product *GetProduct();
};

#endif // _CONCRETEBUILDER_H_
