/*************************************************************************
	> File Name: abstract_class.cpp
	> Author: Aiiii
	> Mail: 2646967818@qq.com
	> Created Time: Wed 25 Nov 2020 09:08:48 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;


/*
    拥有纯虚函数的类，称为抽象类
    抽象类不可以构造对象

    派生类如果没有对纯虚函数进行实现，那么派生类也是抽象类
    和泛化关系的区别在于，泛化的类可以生产对象
    WorkBuilding 与 Building 之间就是实现关系
    C++ 当中面向接口的编程，就是通过抽象类实现的
    比如娃哈哈
        矿泉水->矿泉水工厂
        AD钙奶->饮料工厂
    工厂设计模式
        实际由该工厂生产对象 
    抽象工厂设计模式
        只提供生产技术支持，平台授权等
*/
class Building {
    virtual void build() = 0;
};

class WorkBuilding : public Building {
    void build() {
        cout << "现在正在建造写字楼" << endl;
    }
};

int main() {

    Building *someBuilding = new WorkBuilding;

    someBuilding->build();
    return 0;
}
