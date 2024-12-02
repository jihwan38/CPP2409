#include <iostream>
using namespace std;

class User{
private:
    int hp;
    int itemCnt;
    friend class Magician;
    friend class Warrior;
public:
    User();
    friend std::ostream& operator << (std::ostream& os, const User* user);
    
    
    virtual void DecreaseHp(int dec_hp) = 0;
    virtual void IncreaseHp(int inc_hp) = 0;
    virtual int GetHp() = 0;
    virtual int GetItem() = 0;
    virtual void IncreaseItem() = 0;
    virtual void ChangeHp(int hp) = 0;
    virtual void ChangeItem(int itemCnt) = 0;
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