#include <iostream>

using namespace std;

int main()
{
    int currentMoney;
    int candyMoney;
    cout << "현재 가지고 있는 돈: ";
    cin >> currentMoney;
    cout << "캔디의 가격: ";
    cin >> candyMoney;
    cout << "최대로 살 수 있는 캔디 = " << currentMoney / candyMoney << endl;
    cout << "캔디 구입 후 남은 돈 = " << currentMoney % candyMoney << endl;
    
    return 0;
}