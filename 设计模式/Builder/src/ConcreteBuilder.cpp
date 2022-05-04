/*
 * @Descripttion: 
 * @version: 
 * @Author: 秦武胜
 * @Date: 2021-11-26 17:34:46
 * @LastEditors: 秦武胜
 * @LastEditTime: 2021-11-30 21:31:29
 */

#include "ConcreteBuilder.h"

void ConcreteBuilder::BuilderPartB(string builder)
{
    cout << "ConcreteBuilder::BuilderPartB" << endl;
}
void ConcreteBuilder::BuilderPartC(string builder)
{
    cout << "ConcreteBuilder::BuilderPartC" << endl;
}
void ConcreteBuilder::BuilderPartA(string builder)
{
    cout << "ConcreteBuilder::BuilderPartA" << endl;
}

/**
 * @name: 产品 
 * @test: 
 * @msg: 
 * @param {*}
 * @return {*}
 */
Product *ConcreteBuilder::GetProduct()
{

    string name = "1";
    BuilderPartB(name);
    BuilderPartA(name);
    BuilderPartC(name);

    Product *p = new Product();
    return p;
}

ConcreteBuilder::~ConcreteBuilder()
{
    cout << "ConcreteBuilder 析构函数" << endl;
}

/**
 * @name: 构造函数
 * @test: 
 * @msg: 
 * @param {*}
 * @return {*}
 */
ConcreteBuilder::ConcreteBuilder()
{
    cout << "ConcreteBuilder 构造函数" << endl;
}
