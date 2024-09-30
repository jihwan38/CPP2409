#include <iostream>
#include <string>
using namespace std;

int main(){
    const int maxPeople = 5;
    string names[maxPeople];
    int ages[maxPeople];

    cout << maxPeople << "명의 회원 정보를 입력해주세요." << endl;

    for(int i = 0; i < maxPeople; i++){
        cout << "사람 " << i + 1 << "의 이름: ";
        cin >> names[i];
        cout << "사람 " << i + 1 << "의 나이: ";
        cin >> ages[i];
    }

    int max = ages[0];
    int min = ages[0];
    string maxname = names[0];
    string minname = names[0];
    string maxnames[maxPeople];
    string minnames[maxPeople];
    int maxcount = 0;
    int mincount = 0;

    for(int i = 0; i < maxPeople; i++){
        if(ages[i] >= max){
            max = ages[i];
            maxname = names[i];
        }
    }
    
    for(int i = 0; i < maxPeople; i++){
        if(ages[i] == max){
            
            maxnames[maxcount] = names[i];
            maxcount++;
        }
        
    }

    for(int i = 0; i < maxPeople; i++){
        if(ages[i] <= min){
            min = ages[i];
            minname = names[i];
        }
    }    

    for(int i = 0; i < maxPeople; i++){
        if(ages[i] == min){
            
            minnames[mincount] = names[i];
            mincount++;
        }
        
    }

    int user;

    while(1){
        cout << "메뉴" << endl;
        cout << "1. 가장 나이가 많은 사람 출력" << endl;
        cout << "2. 가장 나이가 적은 사람 출력" << endl;
        cout << "3. 종료" << endl;

        cin >> user;

        switch(user){
            case 1: 
                if(maxcount == 0){
                    cout << "가장 나이가 많은 사람은 " << maxname << "입니다." << endl;
                    break;
                }
                else {
                    cout << "가장 나이가 많은 사람은 ";
                    for(int i = 0; i < maxcount; i++){
                        cout << maxnames[i] << " ";
                    }
                    cout << "입니다." << endl;
                    break;
                }
            case 2:
                if(mincount == 0){
                    cout << "가장 나이가 적은 사람은 " << minname << "입니다." << endl;
                     break;
                }
                else{
                    cout << "가장 나이가 적은 사람은 ";
                    for(int i = 0; i < mincount; i++){
                        cout << minnames[i] << " ";
                    }
                    cout << "입니다." << endl;
                    break;
                }
            case 3:
                cout << "프로그램을 종료하겠습니다." << endl;
                return 0;
            default:
                cout << "잘못된 입력이므로 프로그램을 종료하겠습니다." << endl;
                return 0;
        }

        
    }
    return 0;
    

}