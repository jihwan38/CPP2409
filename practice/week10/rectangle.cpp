#include <iostream>
using namespace std;

class Rectangle{
    int width, height;
public:
    Rectangle(int w = 0, int h = 0);
    int CalcArea();
};

Rectangle::Rectangle(int w, int h)
{
    width = w;
    height = h;

}

int Rectangle::CalcArea(){
    return width * height;
}

int main(){
    Rectangle r1{3,4};
    Rectangle r2;

    cout << "사각형1의 넓이: " << r1.CalcArea() << '\n';
    cout << "사각형2의 넓이: " << r2.CalcArea() << '\n';
}