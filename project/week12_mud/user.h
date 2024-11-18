#include <iostream>
class User{
private:
    int hp;
    int itemCnt;
public:
    void DecreaseHP(int dec_hp);
    void IncreaseHP(int inc_hp);
    int GetHP();
    void IncreaseItem(int inc_item);
    User();
    friend std::ostream& operator << (std::ostream& os, const User& user);
};

