/*
 * @Description: test bridge
 * @version: 
 * @Author: 秦武胜
 * @Date: 2021-12-03 16:26:19
 * @LastEditors: 秦武胜
 * @LastEditTime: 2021-12-03 16:37:19
 * @FilePath: /Learn/设计模式/Bridge/src/main.cpp
 */
#include "Abstraction.h"
#include "RefinedAbstraction.h"
#include "AbstractionImp.h"
#include "ConcreteAbstractionImpA.h"
#include "ConcreteAbstractionImpB.h"
#include <iostream>
using namespace std;

int main()
{
    AbstractionImp *imp = new ConcreteAbstractionImpA();
    imp->Operation();

    Abstraction *abs = new RefinedAbstraction(imp);
    abs->Operation();

    return 0;
}