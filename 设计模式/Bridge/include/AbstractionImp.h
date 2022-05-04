/*
 * @Description: 这个类是为了适配系统
 * @version: 
 * @Author: 秦武胜
 * @Date: 2021-12-03 15:51:14
 * @LastEditors: 秦武胜
 * @LastEditTime: 2021-12-03 16:58:33
 * @FilePath: /Learn/设计模式/Bridge/include/AbstractionImp.h
 */
#ifndef _ABSTRACTIONIMP_H_
#define _ABSTRACTIONIMP_H_

class AbstractionImp
{
private:
public:
    virtual ~AbstractionImp();
    virtual void Operation() = 0;
    // virtual operator=();
protected:
    AbstractionImp();
};

#endif // _ABSTRACTIONIMP_H_