/*
 * @Description: 这个类是为了实现软件的功能
 * @version: 
 * @Author: 秦武胜
 * @Date: 2021-12-03 15:45:35
 * @LastEditors: 秦武胜
 * @LastEditTime: 2021-12-03 16:34:26
 * @FilePath: /Learn/设计模式/Bridge/include/Abstraction.h
 */

#ifndef _ABSTRACTION_H_
#define _ABSTRACTION_H_

class Abstraction
{
private:
public:
    virtual ~Abstraction();
    virtual void Operation() = 0;

protected:
    Abstraction();
};

#endif // _ABSTRACTION_H_