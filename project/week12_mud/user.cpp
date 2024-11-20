#include "user.h"
#include <iostream>
using namespace std;

User::User(){
    hp = 20;
}
void User::DecreaseHP(int dec_hp){
    hp -= dec_hp;
}
void User::IncreaseHP(int inc_hp){
    hp += inc_hp;
}
int User::GetHP(){
    return hp;
}

int User::GetItem(){
    return itemCnt;
}

void User::IncreaseItem(int inc_item){
    itemCnt += inc_item;
}
std::ostream& operator << (std::ostream& os, const User& user)
{
    os << "현재 HP는 " << user.hp << "이고, 먹은 아이템은 총" << user.itemCnt << "개 입니다";
    return os;
    }
void User::DoAttack(){
    cout << "공격합니다" << endl;
}

void Magician::DoAttack(){
    cout << "마법 사용" << endl;
}

void Warrior::DoAttack(){
    cout << "베기 사용" << endl;
}

void User::ChangeHP(int change_hp){
    hp = change_hp;
}
void User::ChangeItem(int change_item){
    itemCnt = change_item;
}


