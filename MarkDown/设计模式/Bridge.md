

Bridge 模式要解决的问题是

![bridge](/Users/qinwusheng/MyDocument/MarkDown/设计模式/图库/bridge.png)

从桥模式的uml 图可以看出，系统被分为两个相对独立的部分，左边是抽象部分，右边是实现部分。



功能类：

```c++
/*
 * @Description: 这个类是为了实现软件的功能
 * @version: 
 * @Author: aaron
 * @Date: 2021-12-03 15:45:35
 * @LastEditors: aaron
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

/*
 * @Description: 
 * @version: 
 * @Author: aaron
 * @Date: 2021-12-03 15:56:59
 * @LastEditors: aaron
 * @LastEditTime: 2021-12-03 17:15:26
 * @FilePath: /Learn/设计模式/Bridge/src/Abstraction.cpp
 */

#include "Abstraction.h"
#include <iostream>
#include <string>
using namespace std;

Abstraction::~Abstraction()
{
    cout << "\n\n\n\nfather" << endl;
    cout << "~ ABSTRACTION() " << endl;
}

// void Abstraction::Operation()
// {
//     cout << "逻辑封装" << endl;
//     cout << "Abstraction::Operation() " << endl;
// }

Abstraction::Abstraction()
{
    cout << "\n\n\n\nfather" << endl;
    cout << "软件逻辑/用户需求" << endl;
    cout << "Abstraction::Abstraction() " << endl;
}




```

```c++
/*
 * @Description: 
 * @version: 
 * @Author: aaron
 * @Date: 2021-12-03 15:49:34
 * @LastEditors: aaron
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


/*
 * @Description: 
 * @version: 
 * @Author: aaron
 * @Date: 2021-12-03 16:08:48
 * @LastEditors: aaron
 * @LastEditTime: 2021-12-03 16:48:24
 * @FilePath: /Learn/设计模式/Bridge/src/RefinedAbstraction.cpp
 */

#include "RefinedAbstraction.h"
#include <iostream>
#include <string>
using namespace std;

RefinedAbstraction::RefinedAbstraction(AbstractionImp *imp)
{
    m_imp = imp;
}

RefinedAbstraction::~RefinedAbstraction()
{
    cout << "RefinedAbstraction::~RefinedAbstraction()" << endl;
}

void RefinedAbstraction::Operation()
{
    cout << "RefinedAbstraction::Operation()" << endl;

    cout << "逻辑封装" << endl;
    cout << "响应系统A的操作" << endl;
    m_imp->Operation();
}
```



适配类：

```c++
/*
 * @Description: 这个类是为了适配系统
 * @version: 
 * @Author: aaron
 * @Date: 2021-12-03 15:51:14
 * @LastEditors: aaron
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


/*
 * @Description: 
 * @version: 
 * @Author: aaron/*
 * @Description: 
 * @version: 
 * @Author: aaron
 * @Date: 2021-12-03 16:18:24
 * @LastEditors: aaron
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
 * @Date: 2021-12-03 16:18:24
 * @LastEditors: aaron
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
```

