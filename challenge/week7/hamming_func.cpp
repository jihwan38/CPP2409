#include <iostream>
#include <string>
using namespace std;

string toLowerStr(string str){
    string lower;
    for(char &c : str){
        c = tolower(c);
        lower = lower + c;
    }
    return lower;
    
}

string toUpperStr(string str){
    string upper;
    for(char &c : str){
        c = toupper(c);
        upper = upper + c;
    }
    return upper;
}

int calcHammingDist(string s1, string s2){
    string uppers1 = toUpperStr(s1);
    string uppers2 = toUpperStr(s2);
    int count = 0;
    if(uppers1.length() != uppers2.length()){
        return -1;
    }
    else{
        for(int i = 0; i < s1.length(); i++){
            if(uppers1[i] != uppers2[i])
                count += 1;
        }
    }
    return count;
}


int main(){
    string a;
    string b;
    string uppera;
    string upperb;
    int count;

    while(true){
        cout << "문자열을 입력하세요: ";
        cin >> a;
        cout << "문자열을 입력하세요: ";
        cin >> b;
        if(a.length() == b.length())
            break;
        cout << "다시 입력을 시작합니다." << endl;
    }
    uppera = toUpperStr(a);
    upperb = toUpperStr(b);

    count = calcHammingDist(uppera, upperb);

    cout << "해밍 거리는 " << count << endl;
    

}