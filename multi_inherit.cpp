/*************************************************************************
	> File Name: multi_inherit.cpp
	> Author: Aiiii
	> Mail: 2646967818@qq.com
	> Created Time: Wed 25 Nov 2020 07:44:12 PM CST
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;

struct Person {
    string lastName = "姓";
    Person() = default;
    Person(string n):lastName(n){};
};

struct F:Person {
    F():Person("艾"){};
};

struct M:Person {
    M():Person("母性"){};
};

struct S1:public F, public M {
    string mylastName;
};


struct S2:S1 {

};
/*
    解决歧义性问题
    （1）指定访问的域
    针对菱形继承，可以使用虚继承

    （1）此时无法再访问到直接基类（父类）对应的值
    （2）产生的对象的空间因此发生改变

    32 = 24 + 8

    未用：
    1 + 1 + 1 = 3

    所谓的虚继承，产生的是一种地址拷贝，而不是空间拷贝
    来源于父母的空间，其实只有一份，这份是从祖先基类继承而来的，自然没有父母空间，也就无法访问父母原先的值特点
    1 + 1 = 2
    所有上层的特性到了底层当中，都要从内存的角度思考
*/

int main() {
    S1 s;
    cout << s.M::lastName << endl;
    cout << sizeof(Person) << endl;
    cout << sizeof(F) << " " << sizeof(M) << " " << sizeof(S1) << endl;
    cout << sizeof(S2) << endl;
    return 0;
}
