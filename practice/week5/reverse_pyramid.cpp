#include <iostream>
using namespace std;

int main(){
    int floor;
    cout << "몇 층을 쌓겠습니까? (5~100):";
    cin >> floor;
    for(int i = floor; i > 0 ; i--){
        for(int j = 0; j < floor - i ;){
            cout << "S";
            j++;
        }
        for(int k = 0; k < 2*i - 1; ){
            cout << "*";
            k++;
        }
        cout << endl;
    }
    return 0;
}