/*************************************************************************
	> File Name: view.h
	> Author: Aiiii
	> Mail: 2646967818@qq.com
	> Created Time: Fri 13 Nov 2020 08:28:29 PM CST
 ************************************************************************/

#ifndef _VIEW_H
#define _VIEW_H


#pragma once
#include<ncurses.h>

class BasicView {
    private:
        /*data*/
    public:
        virtual void BasicConfig() = 0; //纯虚函数
        virtual WINDOW *getCurrentWindow();
};

class MainView : public BasicView {
    private:
        
    protected:
        WINDOW *currentWindow;
    public:
        MainView(/*args*/);
        ~MainView();
        virtual WINDOW *getCurrentWindow();
};

class SnakeView : public BasicView {
    
};

#endif
