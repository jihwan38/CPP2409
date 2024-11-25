#include <iostream>
using namespace std;

class RemoteControl{
public:
    virtual void TurnOn() = 0;
    virtual void TurnOff() = 0;
};

class Television:public RemoteControl {
public:
    void TurnOn(){
        cout << "TV를 켭니다." << endl;
    }
    void TurnOff(){
        cout << "TV를 끕니다." << endl;
    }
};
class Refrigerator:public RemoteControl{
public:
    void TurnOn(){
        cout << "냉장고를 켭니다." << endl;
    }
    void TurnOff(){
        cout << "냉장고를 끕니다." << endl;
    }
};

int main(){
    RemoteControl* remoteTV = new Television();
    remoteTV -> TurnOn();
    remoteTV -> TurnOff();

    RemoteControl* remoteRefrigerator = new Refrigerator();
    remoteRefrigerator -> TurnOn();
    remoteRefrigerator -> TurnOff();
}
