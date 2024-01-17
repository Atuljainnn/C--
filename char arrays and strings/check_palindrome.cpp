#include<iostream>
#include<cstring>
using namespace std;
bool check_palindrome(char ch[],int n ){
  int left=0;
  int right=n-1;

  while(left<right){
    if(ch[left]==ch[right]){
      left++;
      right--;
    }else{
      return false;
    }
  }
  return true;
}

int main(){
char ch[10];
cin>>ch;
int len =strlen(ch);
bool ans=check_palindrome(ch,len);

if(ans){
  cout<<"valid palidrome";
}else{
  cout<<"invalid palindrome";
}
return 0;
}
