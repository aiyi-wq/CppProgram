/*************************************************************************
	> File Name: interface.cpp
	> Author: Aiiii
	> Mail: 2646967818@qq.com
	> Created Time: Fri 13 Nov 2020 06:19:07 PM CST
 ************************************************************************/
#include"interface.h"
#include<locale.h>
using namespace std;

/* 
    1.界面中文无法显示  √
    2.程序无法有效退出  √
    3.显示内容的位置未设置  
    4.键盘按键响应的问题  
    Tips: ncurses没有图层化的概念，所有内容，
    其实都是在同一张画布上的
*/

Interface::Interface(/*args*/) {

}

Interface::~Interface() {
    
}

/*
    1.平台提示语
    2.游戏列表
    3.退出按钮 （是否退出的选择）
*/

void configMainWindow(*W)

void Interface::displayMainWindow(&gameNames) {
    //配置ncurses的基本内容
    setlocale(LC_ALL, ""); //支持显示中文
    Initsrc();
    /* 有关于显示部分的设置 按键设置 */
    noecho();
    nodelay(currentWindow, TRUE);
    cbreak();
    curs_set(FALSE);

    //非标准键（功能键）的有效使用
    keypad(currentWindow, TRUE);

    //如果不使用&,对于局部变量，采取的是复制的方式
    //用&来捕获参数列表
    auto configMainWindow = [&](){
    mvwprintw(currentWindow, 5, 5, "欢迎来到艾艾游戏"); //在指定位置的窗口输出
    mvwprintw(currentWindow, 8, 5, "使用方向键选择，使用回车键进入游戏");
    //窗口系统
    //currentWindow = newwin(20, 40, 0, 0);
    //box(currentWindow, 0, 0);
    //提示语
    for (unsigned int i = 0; i < gameNames.size(); ++i) {
        mvwprintw(currentWindow, 10, 5, gameNames[i]);
    }

    mvwprintw(currentWindow, 10 + gameNames.size(), 5, "退出平台");
    mvwchgat(currentWindow, 10, 3, 15, A_REVERSE, 1, NULL);
    wrefresh(currentWindow);
    };

    configMainWindow();

    int keyInput;
    int currentChoice = 0;
    while (1) {
        keyInput = wgetch(currentWindow);
        if (keyInput == KEY_UP) {
            currentChoice--;
        }
        if (keyInput == KEY_DOWN) {
            currentChoice++;
        }
        if (currenChoice < 0) {

        }
        if (currenChoice > )
        //选择互斥 原先的选择是一种界面留存方式---->去掉留存即可
        for (int i = 0; i <= gameNames.size(); ++i) {
            mvwchgat(currentWindow, 10 + i, 3, 15, A_NOREVERSE);
        }
        mvwchgat(currentWindow, 10, 3, 15, A_REVERSE, 1, NULL);
        wrefresh(currentWindow);

        if (keyInput == '\r' || keyInput == '\n') {
            if (currenChoice == gameNames.size()) {
                exit(0);
            }
        }
    }
}
