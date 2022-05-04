/*
 * @Description: 
 * @version: 
 * @Author: 秦武胜
 * @Date: 2021-12-03 15:49:34
 * @LastEditors: 秦武胜
 * @LastEditTime: 2021-12-03 15:56:22
 * @FilePath: /Learn/设计模式/Bridge/include/RefinedAbstraction.h
 */

#ifndef _REFINEDABSTRACTION_H_
#define _REFINEDABSTRACTION_H_

#include "AbstractionImp.h"
#include "Abstraction.h"

class RefinedAbstraction : public Abstraction
{
private:
    AbstractionImp *m_imp;

public:
    RefinedAbstraction(AbstractionImp *imp);
    ~RefinedAbstraction();

    void Operation();
};

#endif // _REFINEDABSTRACTION_H_