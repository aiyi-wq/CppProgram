/*************************************************************************
	> File Name: dynamic_condi.cpp
	> Author: Aiiii
	> Mail: 2646967818@qq.com
	> Created Time: Wed 25 Nov 2020 08:46:10 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

struct Animal {
    void eat() {
        cout << "动物吃东西" << endl;
    }
};

struct Dog:Animal {
    void eat() {
        cout << "狗东西" << endl;
    }
};

struct Cat:Animal {
    void eat() {
        cout << "猫吃鱼" << endl;
    }
};


/*动态多态发生的条件
   （1） 必须有继承
   （2） 必须有方法的重写
    (3)  基类的指针或引用绑定子类的对象
    (4)  发生多态的函数必须为虚函数
*/


/*
    当一个类中没有设置一个函数为虚函数时，
        程序在编译期间会生成该函数的静态地址，
        通过对象指针，可以访问到该地址，也就没有错误
    设置一个函数为虚函数后
        对象空间当中就有一个虚函数表
        如果一个对象搜索不到该虚函数表，产生segamentation error
*/

/*void lookSick(SomePerson) {

}*/

int main() {

    Dog wangcai;
    Cat kitty;
    Animal *anyAnimal = nullptr;
    //anyAnimal = &wangcai;


    anyAnimal->eat();
    cout << sizeof(*anyAnimal) << endl;

    anyAnimal = &wangcai;
    anyAnimal->eat();

    anyAnimal = &kitty;
    anyAnimal->eat();

    return 0;
}
