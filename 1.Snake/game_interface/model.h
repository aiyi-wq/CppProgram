/*************************************************************************
	> File Name: model.h
	> Author: Aiiii
	> Mail: 2646967818@qq.com
	> Created Time: Fri 13 Nov 2020 08:27:50 PM CST
 ************************************************************************/

#ifndef _MODEL_H
#define _MODEL_H

#pragma once
#include<string>
#include<vector>
using namespace std;
//外部数据，或者一些设置数据
struct Platform_model {
    string welcomeStence = "欢迎进入艾艾游戏";
    string usagePrompt = "使用方向键选择游戏，使用回车键确认";
    vector<string> gameNames{"贪吃蛇", "推箱子", "俄罗斯方块", "中国象棋"};
};
#endif
