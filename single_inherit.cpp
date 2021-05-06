/*************************************************************************
	> File Name: single_inherit.cpp
	> Author: Aiiii
	> Mail: 2646967818@qq.com
	> Created Time: Wed 25 Nov 2020 06:46:58 PM CST
 ************************************************************************/
/*
   单继承的继承基础
    1.
    2.
*/

#include<iostream>
using namespace std;

class Base {

}

class Drived : protected Base {


    private:

    public: 
    void showMessage() {
        cout << m << endl;
        cout << j << endl;
    }
};

class Third : public Drived {
    public:
    void showMessageTT() {
        cout << m << endl;
        cout << j << endl;
    }
};

/*
    成员变量基类当中封装 private protected public
    继承封装
    private       本类当中可以访问，派生类不可以访问
    protected     public 降为 protected
    public        不更改任何权限
    
    继承的限制是影响下一代的

    如果没有后继类 可以设置为私有联系
    如果不希望更改任何原先的成员权限
*/


int main() {
    Drived d;
    d.showMessage();
    return 0;
}
