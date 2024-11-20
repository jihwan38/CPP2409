#include <iostream>
class User{
private:
    int hp;
    int itemCnt;
public:
    void DecreaseHP(int dec_hp);
    void IncreaseHP(int inc_hp);
    int GetHP();
    int GetItem();
    void IncreaseItem(int inc_item);
    void ChangeHP(int change_hp);
    void ChangeItem(int change_item);
    User();
    friend std::ostream& operator << (std::ostream& os, const User& user);
    void DoAttack();
};

class Magician:public User{
public:
    void DoAttack();
};

class Warrior:public User{
public:
    void DoAttack();
};



