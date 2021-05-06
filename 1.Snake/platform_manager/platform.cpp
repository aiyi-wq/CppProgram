/*************************************************************************
	> File Name: platform.cpp
	> Author: Aiiii
	> Mail: 2646967818@qq.com
	> Created Time: Wed 11 Nov 2020 06:42:46 PM CST
 ************************************************************************/

#include<iostream>
#include "platform.h"
#include "player.h"

Platform::Platform() {
    Player *defaultPlayer = new"张三, 1001"; 
}

Platform::Platform() {
    
}

void Platform::startUp() {
    //C++11 支持表遍历元素的方式
    for (auto player : players) {
        ErrorMessage emes = player->login();
        if (emes.code == 200) {
            cout << "调用了没" << endl;
            user
        }
    }

    while (1);
}
