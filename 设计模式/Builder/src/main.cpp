/*
 * @Descripttion: 
 * @version: 
 * @Author: 秦武胜
 * @Date: 2021-11-21 17:33:56
 * @LastEditors: 秦武胜
 * @LastEditTime: 2021-11-30 21:25:55
 */
#include <iostream>
#include "Product.h"
#include "Builder.h"
#include "ConcreteBuilder.h"
#include "Director.h"
int main()
{

    // Product p;
    // std::cout<<"hello world"<<std::endl;
    Director *bld = new Director(new ConcreteBuilder());
    bld->Construct();

    return 0;
}