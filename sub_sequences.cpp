#include<iostream>
using namespace std;
void sub_sequences(string str,string output, int index){
  if(index>=str.length()){
    cout<<"-->"<<output<<endl;
    return;
  }
  
  char ch=str[index];
  sub_sequences(str,output,index+1);
  output.push_back(ch);
  sub_sequences(str,output,index+1);
  }
int main(){
  string str=" ";
  cout<<"Enter the output string: ";
  cin>>str;
  string output=" ";
  int index=0;
  sub_sequences(str,output,index);
}