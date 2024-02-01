#include<iostream>
using namespace std;
void subpermutation(string &s,int i)
{  
  int j=i;
  if(i>=s.length()){
      cout<<s<<endl;
      return;
  }
  
  while(j<s.length()){
    swap(s[i],s[j]);
    subpermutation(s,i+1);
    swap(s[i],s[j]);
    j++;
    }     
  }

int main(){
  string s= "abcd";
  int i=0;
  subpermutation(s,i);
  return 0;
}