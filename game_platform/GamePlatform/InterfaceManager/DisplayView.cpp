/*************************************************************************
	> File Name: InterfaceManager.cpp
	> Author: Aiiii
	> Mail: 2646967818@qq.com
	> Created Time: Fri 27 Nov 2020 08:21:45 PM CST
 ************************************************************************/

#include<iostream>
#include<locale.h>
#include"DisplayView.h"
using namespace std;

void BaseView::GlobalConfig() {
    setlocale(LC_ALL, "");
    initsrc();

};

void LoginView::backUp() {
    if (currentWindow == nullptr) {
        currentWindow = newwin(20, 60, 0, 0);
    }
    box(currentWindow, 0, 0);
    noecho();
    nodelay(currentWindow, TRUE);
    cbreak();
    curs_set(FALSE);
    keypad(currentWindow, TRUE);
    mvprintw(currentWindow, 5, 5, "请输入用户名");
}

void LoginView::show() {
    backUp();
    wrefresh();
}

void LoginView::hide() {
    delwin(currentWindow);
    currentWindow = nullptr;
}

void LoginView::helpMe() {
    
    
}
