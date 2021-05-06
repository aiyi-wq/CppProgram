/*************************************************************************
	> File Name: muti_condi.cpp
	> Author: Aiiii
	> Mail: 2646967818@qq.com
	> Created Time: Wed 25 Nov 2020 08:33:59 PM CST
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;

void swap(int a, int b) {

};

void swap(string a, string b) {
    
};
void string(double a, double b) {

};
void swap(char a, char b) {

};


/* 
    静态多态
    必须在编译器给定类型 -> 对应的

    指针包含多层含义
    （1） 空间地址
    （2） 空间长度
    （3） 从空间读取出的值得类型
    
    编译器已经确定其寻址方式
*/

//下面的这种形式和泛型编译器很像
#define Type int

int main() {

    Type *i, *j;
    i = static_cast<Type>malloc(10);
    j = (int *)malloc(10);
    cin >> *i >> *j;
    swap(*i, *j);
    return 0;
}
