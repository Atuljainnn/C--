#include<iostream>
#include<limits.h>
using namespace std;
int minNo(int arr[3][3],int row,int col)
{   int ans=INT_MAX;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(ans>arr[i][j]){
                ans=arr[i][j];
            }
       }
    }
    return ans;
}
int main() {
    int arr[3][3]={
        {17,5,13},
        {9,11,6},
        {7,12,9}
    };
    int row=3;
    int col=3;
    
    int result;
    cout<<minNo(arr, row, col);
     return 0;
}