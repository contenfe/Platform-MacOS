/*
 * @Description: 
 * @version: 
 * @Author: 秦武胜
 * @Date: 2021-12-01 20:29:52
 * @LastEditors: 秦武胜
 * @LastEditTime: 2021-12-01 20:35:07
 * @FilePath: /Learn/设计模式/Prototype/include/ConcretePrototype.h
 */

#ifndef _CONCRETEPROTOTYPE_H_
#define _CONCRETEPROTOTYPE_H_
#include "Prototype.h"

class ConcretePrototype : public Prototype
{
private:
public:
    ConcretePrototype();
    ConcretePrototype(const ConcretePrototype &cp);
    ~ConcretePrototype();

public:
    Prototype *Clone() const;
};

#endif // _CONCRETEPROTOTYPE_H_