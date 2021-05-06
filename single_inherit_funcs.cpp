/*************************************************************************
	> File Name: single_inherit_funcs.cpp
	> Author: Aiiii
	> Mail: 2646967818@qq.com
	> Created Time: Wed 25 Nov 2020 07:06:19 PM CST
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;

class Person {
    string name;
    public :
    Person(string n) {
        name = n;
    }
    Person() = default;
    void showMessage() {
        cout << name << endl;
    }
};


/* 
    name 在基类当中的私有域中
    //可以在派生类当中重新写，但是这也失去了继承的意义
    继承的类，对于父类当中的成员进行初始化
    系统会隐式调用其默认的构造函数
    如果没有，必须使用显示调用---->初始化列表
*/

class Man : public Person {
    string workName;
    //string name;
    public:
        Man(string n, string wn):Person(n) {
            workName = wn;
        }
    Man(const Man &m):Person(m) {
            this->workName = m.workName;
            //this->name = m.name;
        }
        void showPersonMessage() {
            this->showMessage();
        }
        void showManMessage() {
            cout << workName << endl;
        }
};

int main() {
    Man m = Man("张三", "厨师");
    m.showMessage();
    m.showManMessage();
    m.showPersonMessage();

    Man newm = m;
    newm.showMessage();
    newm.showManMessage();
    newm.showPersonMessage();

    Man nm;
    nm = m;
    nm.showMessage();
    nm.showManMessage();
    nm.showPersonMessage();

    return 0;
}
