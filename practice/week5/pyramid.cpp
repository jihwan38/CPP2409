#include <iostream>
using namespace std;

int main(){
    int floor;
    cout << "몇 층을 쌓겠습니까? (5~100):";
    cin >> floor;
    for(int i = 0; i < floor ;i++){
        for(int j = 0; j < floor - 1 - i; ){
            cout << "S";
            j++;
        }
        for(int k = 0; k < 2*i + 1; ){
            cout << "*";
            k++;
        }
        cout << endl;
    }
    return 0;
}