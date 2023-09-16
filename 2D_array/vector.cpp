#include<iostream>
#include<vector>
using namespace std;
void print(vector<int>v){
     for(int i=0;i<v.size();i++){
         cout<<v[i]<<" ";
     }
     cout<<endl;
}
void print2d(vector<vector<int> >arr){
    for(int i=0;i<arr.size();i++){
         for(int j=0;j<arr[i].size();j++){
             cout<<arr[i][j]<<"  ";
         }
         cout<<endl;
     }
}
int main() {
    vector<int>v;
     v.push_back(1);
     v.push_back(1);
     v.push_back(4);
     v.push_back(1);
     
     print(v);
     
     v.pop_back();
     
     print(v);
     cout<<v.front()<<" ";
     cout<<v[0]<<" ";
     cout<<v[v.size()-1]<<" ";
     cout<<v.back()<<endl;
      v.clear();
      print(v);
      
     vector<vector<int> >arr(5,vector<int>(10,1));
     cout<<"printing 2d vector"<<endl;
     print2d(arr);
    
     vector<vector<int> >brr;
    
     vector<int>brr1(5,1);
     vector<int>brr2(4,3);
     vector<int>brr3(3,2);
     vector<int>brr4(5,4);
     vector<int>brr5(6,3);
     
     brr.push_back(brr1);
     brr.push_back(brr2);
     brr.push_back(brr3);
     brr.push_back(brr4);
     brr.push_back(brr5);
     cout<<"printing jagged array"<<endl;
     print2d(brr);

     return 0;
}