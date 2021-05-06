/*************************************************************************
	> File Name: player.cpp
	> Author: Aiiii
	> Mail: 2646967818@qq.com
	> Created Time: Wed 11 Nov 2020 07:42:36 PM CST
 ************************************************************************/
#include "player.h"

Player::Player(/*args*/)...
 
Player::Player() {
    
}

void Player::login() {
    cout << "请输入登录账号:" << endl;
    unsigned int inputAccount;
    cin >> loginAccount;

    //校验账号 从数据或者其他地方 检测该账号是否已登录
    bool result = this->verfileAccount(inputAccount);
    if (result == false) {
        ErrorMessage message;
        message.code = NONEXISTANCE;
        message.errorDiscription = "账号不存在";
        return ErrorMessage;
    }
}

bool
