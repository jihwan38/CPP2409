#include <iostream>
using namespace std;

int main(){
    int a, b, c, largest;

    cout << "3개의 정수를 입력하시오: ";
    cin >> a >> b >> c;
/* 두 수가 같은 경우 원하는 값이 나오지 않을 수 있기 때문에 > 대신 >= 사용 */
    if (a >= b && a >= c) 
        largest = a;
    else if (b >= a && b >= c)
        largest = b;
    else
        largest = c;

    cout << "가장 큰 정수는" << largest << endl;
    return 0;
}