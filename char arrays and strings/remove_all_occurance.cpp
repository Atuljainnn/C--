#include <iostream>
using namespace std;

string removeOccurance(string s,string part){
  while(s.find(part)!=string::npos){
      s.erase(s.find(part),part.length());
  }
    return s;
}
int main() {
   string str="abcbacbabbaac";
   string part="cba";
   
   cout<<removeOccurance(str,part);
    return 0;
}