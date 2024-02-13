#include<iostream>
#include<string>
#include<vector>

using namespace std;
void mapping(string &Str,string &msg ,string &ans){
 char mapping[300]={0};
 char start='a';

  for(auto ch:Str){
    if(ch !=' ' && mapping[ch]==0){
    mapping[ch]=start;
    start++;
  }
}
for(auto ch:msg){
 if(ch==' '){
  ans.push_back('_');
 }else{
  char decodechar=mapping[ch];
  ans.push_back(decodechar);
 }
}

}

int main(){
  string Str="atul";
  string msg="msg";
  string Ans;
  mapping(Str,msg,Ans);
  return 0;
}