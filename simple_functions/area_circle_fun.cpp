
#include <iostream>
using namespace std;
void circlearea(int rad){
    float area;
    area=3.14*rad*rad;
    cout<<"Area of circle:"<<area;
}


int main() {
    float rad;
    cout<<"Enter value of radius=";
    cin>>rad;
    circlearea(rad);

    return 0;
}