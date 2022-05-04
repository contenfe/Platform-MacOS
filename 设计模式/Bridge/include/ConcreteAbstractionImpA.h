/*
 * @Description: 
 * @version: 
 * @Author: 秦武胜
 * @Date: 2021-12-03 16:18:24
 * @LastEditors: 秦武胜
 * @LastEditTime: 2021-12-03 16:42:55
 * @FilePath: /Learn/设计模式/Bridge/include/ConcreteAbstractionImpA.h
 */

#ifndef _CONCRETEABSTRACTIONIMPA_H_
#define _CONCRETEABSTRACTIONIMPA_H_

#include "AbstractionImp.h"
class ConcreteAbstractionImpA : public AbstractionImp
{
private:
public:
    ConcreteAbstractionImpA();
    ~ConcreteAbstractionImpA();
    void Operation();
};

#endif // _CONCRETEABSTRACTIONIMPA_H_