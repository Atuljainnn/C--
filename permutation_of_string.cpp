#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void subpermutation(string &s,int i,vector<string>&ans)
{
    int j=i;
    if(i>=s.length()){
        ans.push_back(s);
        return;
    }
    
    while(j<s.length()){
      swap(s[i],s[j]);
      subpermutation(s,i+1,ans);
      swap(s[i],s[j]);
      j++;
      }
         
    }


    int main(){
      string s= "abc";
      vector<string>ans;
      int i=0;
      subpermutation(s,i,ans);
      sort(ans.begin(),ans.end());

      for(int i=0;i<s.length(); i++){
        cout<<ans[i]<<" ";
      }
       return 0;
      }