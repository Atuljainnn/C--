#include <iostream>
using namespace std;
void searchElement(int arr[3][3],int row,int col,int target){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]==target){
                cout<<"Target found";
                return;
            }
        }
    }
   cout<<"Target not found";
}
int main() {
    int arr[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int row=3;
    int col=3;
    int target=8;
    int result;
    searchElement(arr, row, col,target);
    
    
     return 0;
}