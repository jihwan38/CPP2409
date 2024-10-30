#include <iostream>
#include <string>
using namespace std;

class Car{
public:
    //멤버 변수 선언    
    int speed;//속도
    int gear;//기어
    string color;//색상

    //멤버 함수 선언
    void SpeedUp(){
        speed+=10;
    }
    void SpeedDown(){
        speed-=10;
    }
};

int main(){
    Car myCar;

    myCar.speed = 100;
    myCar.gear = 3;
    myCar.color = "red";


    cout << "1st speed: " << myCar.speed << endl;

    myCar.SpeedUp();
    cout << "2nd spped: " << myCar.speed << endl;

    myCar.SpeedDown();
    cout << "3rd spped: " << myCar.speed << endl;

    return 0;
}