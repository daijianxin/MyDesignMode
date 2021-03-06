/*
* 文件名称：Prototype.h
* 摘    要：原型模式头文件
*
* 当前版本：1.0.0
* 作    者：Chunel
* 日    期：2018-08-27
* 备    注：新建
*/

#ifndef _PROTOTYPE_PATTERN_H_
#define _PROTOTYPE_PATTERN_H_

#include <iostream>

using namespace std;

/*Prototype原型基类，定义Clone接口函数*/
class Prototype
{
public:
    virtual Prototype* Clone() const = 0;    // 定义Clone接口，根据不同的派生类来实例化对象
    virtual ~Prototype();

protected:
    Prototype();    // 不需要被外部显示构造
};

//派生自Prototype，实现其接口函数
class ConcretePrototype1 : public Prototype
{
public:
    ConcretePrototype1();    //构造函数
    ~ConcretePrototype1();    //析构函数

    /* ConcretePrototype1构造函数的第二种形式
       外部调用的时候，用这种方法生成clone对象 */
    ConcretePrototype1(const ConcretePrototype1&);    //拷贝构造函数
    virtual Prototype* Clone() const;    //实现基类定义的Clone接口，内部调用拷贝构造函数实现复制功能
};

//派生自Prototype，实现其接口函数
class ConcretePrototype2 : public Prototype
{
public:
    ConcretePrototype2();//构造函数
    ~ConcretePrototype2();//析构函数
    ConcretePrototype2(const ConcretePrototype2&);//拷贝构造函数
    virtual Prototype* Clone() const;//实现基类定义的Clone接口，内部调用拷贝构造函数实现复制功能
};


#endif