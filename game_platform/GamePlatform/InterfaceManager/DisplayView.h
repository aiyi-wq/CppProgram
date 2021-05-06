/*************************************************************************
	> File Name: InterfaceManager.h
	> Author: Aiiii
	> Mail: 2646967818@qq.com
	> Created Time: Fri 27 Nov 2020 08:21:49 PM CST
 ************************************************************************/

#ifndef _DISPLAYVIEW_H
#define _DISPLAYVIEW_H

#include<ncurses.h>
#include<>
//BaseView
////LogView
//GameMenuView
//GameView
//SnakeView
//BoxView
//ErrorModeView

//这应该是一个接口类

class BaseView {
    protected:
        WINDOW *currentWindow;
        virtual void backUP() = 0;

    public:
        virtual void show() = 0;
        virtual void hide() = 0;

        virtual void helpMeShow(std::function<void (WINDOW *)> helpfunc) = 0;
        virtual ~ncBaseView() = default;
        static void GlobalConfig();

};

class LoginView {
       
};

#endif
