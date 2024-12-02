#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

class Data{
public:
    int hour;
    double temperature;
    Data(int hour, double temperature){
        this -> hour = hour;
        this -> temperature = temperature;
    }
};

int main(){
    ifstream is{"temp.txt"};
    if(!is){
        cerr << "파일 오픈에 실패하였습니다" << endl;
        exit(1);
    }
    vector<Data> datas;
    int hour;
    double temperature;
    while(is >> hour >> temperature){
        datas.push_back(Data(hour, temperature));
    }
    for (auto t : datas){
        cout << t.hour << "시: 온도 " << t.temperature << endl;
    }

    return 0;
}