#include "user2.h"
#include <iostream>
using namespace std;

std::ostream& operator << (std::ostream& os, const User& user)
{
    os << "현재 HP는 " << user.hp << "이고, 먹은 아이템은 총" << user.itemCnt << "개 입니다";
    return os;
    }

User::User(){
    hp = 20;
}

void Magician::DecreaseHp(int dec_hp){
    hp -= dec_hp;
}

void Magician::IncreaseHp(int inc_hp){
    hp += inc_hp;
}

int Magician::GetHp(){
    return hp;
}

int Magician::GetItem(){
    return itemCnt;
}

void Magician::IncreaseItem(){
    itemCnt++;
}

void Magician::ChangeHp(int hp){
    this->hp = hp;
}

void Magician::ChangeItem(int itemCnt){
    this->itemCnt = itemCnt;
}

void Magician::DoAttack(){
    cout << "마법 사용" << endl;
}

void Warrior::DecreaseHp(int dec_hp){
    hp -= dec_hp;
}

void Warrior::IncreaseHp(int inc_hp){
    hp += inc_hp;
}

int Warrior::GetHp(){
    return hp;
}

int Warrior::GetItem(){
    return itemCnt;
}

void Warrior::IncreaseItem(){
    itemCnt++;
}

void Warrior::ChangeHp(int hp){
    this->hp = hp;
}

void Warrior::ChangeItem(int itemCnt){
    this->itemCnt = itemCnt;
}

void Warrior::DoAttack(){
    cout << "마법 사용" << endl;
}




