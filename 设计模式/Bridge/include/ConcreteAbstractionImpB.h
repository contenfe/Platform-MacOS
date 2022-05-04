/*
 * @Description: 
 * @version: 
 * @Author: 秦武胜
 * @Date: 2021-12-03 16:18:24
 * @LastEditors: 秦武胜
 * @LastEditTime: 2021-12-03 16:29:37
 * @FilePath: /Learn/设计模式/Bridge/include/ConcreteAbstractionImpB.h
 */

#ifndef _CONCRETEABSTRACTIONIMPB_H_
#define _CONCRETEABSTRACTIONIMPB_H_

#include "AbstractionImp.h"
class ConcreteAbstractionImpB : public AbstractionImp
{
private:
public:
    ConcreteAbstractionImpB();
    ~ConcreteAbstractionImpB();
    void Operation();
};

#endif // _CONCRETEABSTRACTIONIMPA_H_