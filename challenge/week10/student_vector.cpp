#include <iostream>
#include <vector>
using namespace std;

int main(){
    int num;
    double average = 0;
    int sum = 0;
    int counter = 0;
    vector<int> record;
    
    while(1){
        
        
        cout << "성적을 입력하시오(종료는 -1) : ";
        cin >> num;

        if (num == -1) break;
        record.push_back(num);
        counter++;
        
    }
    for(auto&e : record){
        sum += e;
    }
    average = sum / counter;
    cout << "성적 평균 = " << average << endl;
    cout << "계속하려면 아무 키나 누르십시오 . . . " << endl;
    
}
