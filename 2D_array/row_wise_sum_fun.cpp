#include<iostream>
using namespace std;
void printRowSum(int arr[3][3],int row,int col)
{   
    for(int i=0;i<row;i++)
    {  int sum=0;
       for(int j=0;j<col;j++)
        {
            sum=sum+arr[i][j];
       }
       cout<<"Sum of "<<i<<"th row :"<<sum<<endl;
    }
    
}
int main() {
    int arr[3][3]={
        {17,5,13},
        {9,11,6},
        {7,12,9}
    };
    int row=3;
    int col=3;
    
    
 printRowSum(arr, row, col);
     return 0;
}