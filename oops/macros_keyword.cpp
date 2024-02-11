#include<iostream>
using namespace std;
#define PI 3.14
#define MAXX(x,y) (x>y? x:y)
void fun(){
  int x=6;
  int y=7;
  int c=MAXX(x,y);
  cout<<c<<endl;
}
int main(){
 
 int r=2;
 cout<<"area of circle"<<PI*r*r<<endl;
 cout<<"cicircumference of circle"<<2*PI*r<<endl;

 fun();
 return 0;

}