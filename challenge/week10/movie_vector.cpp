#include <vector>
#include <string>
#include <iostream>
using namespace std;

class movie{
public:
    string name;
    double num;
    movie(){name = " "; num = 0;}
    movie(string name, double num){
        this -> name = name;
        this -> num = num;
    }
    void Print(){
        cout << name <<": " << num << endl;
    }
};

int main(){
    vector<movie> v;
    v.push_back(movie("titanic", 9.9));
    v.push_back(movie("gone with the wind", 9.6));
    v.push_back(movie("terminator", 9.7));

    for(auto &e : v){
        e.Print();
    }
    cout << "계속하려면 아무 키나 누릅시시오 . . ." << endl;

}