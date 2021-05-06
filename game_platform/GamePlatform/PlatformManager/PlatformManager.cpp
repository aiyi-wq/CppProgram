#include "PlatformManager.h"
#include "./InterfaceManager/DisplayView.h"
#include <iostream>
using namespace std;

void PlatformManager::start() {
    /*
        界面显示   管理这些界面之间的关系
        （1）界面显示
        （2）界面隐藏
    */

    BaseView::GlobalConfig();
    BaseView *login = new LoginView();
    login->show();

    login->helpMeShow([&](WINDOW *currentWindow){
        mvwprintw(currentWindow, 5, 5, "请输入用户名");
        mvwprintw(currentWindow, 10, 5, "请输入密码");
        wrefresh(currentWindow);
    });

    while (1) {
        
    };

}
