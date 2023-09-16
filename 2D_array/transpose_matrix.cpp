#include<iostream>
using namespace std;
void transposeMatix(int arr[3][3],int row,int col)
{   
    for(int i=0;i<row;i++)
    {  
       for(int j=i;j<col;j++)
        {
            swap(arr[i][j],arr[j][i]);
       }
    }
}
int main() {
    int arr[3][3]={
        {2,8,7},
        {4,3,9},
        {6,5,9}
    };
    int row=3;
    int col=3;
    
    
 transposeMatix(arr, row, col);
  for(int i=0;i<row;i++)
    {  
       for(int j=0;j<col;j++)
        {
         cout<<arr[i][j]<<" ";
       }
       cout<<endl;
    }
     return 0;
}