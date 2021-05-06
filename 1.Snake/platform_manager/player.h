/*************************************************************************
	> File Name: player.h
	> Author: Aiiii
	> Mail: 2646967818@qq.com
	> Created Time: Wed 11 Nov 2020 07:37:20 PM CST
 ************************************************************************/

#ifndef _PLAYER_H
#define _PLAYER_H


#define NONEXISTANCE 1000
#define ERRORPWD 1001
#define SERVERERR 1002

struct ErrorMessage {
    unsigned int code;
    string ErrorDiscription;
}


//一个玩家有哪些属性
#include<string>
using namespace std;
class Player {
private:
    string userName;
    string nickName;
    unsigned int loginAccount;
    bool isMale;
    string loginPassword = "123456";
public:
    Player(/*args*/) = default;
    -Player(string un, string nn, unsigned int la, bool im, string);
    -Player();

    ErrorMessage login();
    bool verfileAccount();
};

#endif
