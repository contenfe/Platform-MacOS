/*
 * @Description: 原形设计模式
 * @version: 
 * @Author: 秦武胜
 * @Date: 2021-12-01 20:25:16
 * @LastEditors: 秦武胜
 * @LastEditTime: 2021-12-01 20:35:04
 * @FilePath: /Learn/设计模式/Prototype/include/Prototype.h
 */

#ifndef _PROTOTYPE_H_
#define _PROTOTYPE_H_

class Prototype
{
private:
protected:
    Prototype();

public:
    virtual ~Prototype();

public:
    virtual Prototype *Clone() const = 0;
};

#endif // !_PROTOTYPE_H_