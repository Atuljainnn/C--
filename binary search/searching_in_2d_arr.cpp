#include<iostream>
using namespace std;
bool searchMatrix(int matrix[][3],int row,int col,int target) {
  int n = row*col;
  int s = 0;
  int e = n-1;
  int mid = s + (e-s)/2;

  while(s <= e) {
      int rowIndex = mid/col;
      int colIndex = mid % col;
      int currNumber = matrix[rowIndex][colIndex];

      if(currNumber == target)
          return true;
      else if(target > currNumber ) {
          s = mid + 1;
      } 
      else {
          e = mid-1;
      }
      mid = s + (e-s)/2;
  }
  return false;
}
int main() {
    int matrix[3][3]={
    {2,4,6},
    {8,10,12},
    {14,16,18}  };
  int row=3;
  int col=3;
  int target=6;
  int ans=searchMatrix(matrix,row,col,target);
  if(ans){
      cout<<"Element found";
  }
  else{
      cout<<"Element not found";
  }
return 0;
}