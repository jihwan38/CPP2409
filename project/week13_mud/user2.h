#include <iostream>
using namespace std;

class User{
protected:
    int hp;
    int itemCnt;
public:
    User();
    friend std::ostream& operator << (std::ostream& os, const User& user);
    
    
    virtual void DecreaseHp() = 0;
    virtual void IncreaseHp() = 0;
    virtual int GetHp() = 0;
    virtual int GetItem() = 0;
    virtual void IncreaseItem() = 0;
    virtual void ChangeHp() = 0;
    virtual void ChangeItem() = 0;
    virtual void DoAttack() = 0;
};

class Magician:public User{
public:
    void DecreaseHp(int dec_hp);
    void IncreaseHp(int inc_hp);
    int GetHp();
    int GetItem();
    void IncreaseItem();
    void ChangeHp(int hp);
    void ChangeItem(int itemCnt);
    void DoAttack();
};

class Warrior:public User{
public:
    void DecreaseHp(int dec_hp);
    void IncreaseHp(int inc_hp);
    int GetHp();
    int GetItem();
    void IncreaseItem();
    void ChangeHp(int hp);
    void ChangeItem(int itemCnt);
    void DoAttack();
};