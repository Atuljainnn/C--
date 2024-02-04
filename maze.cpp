#include<iostream>
#include<vector>
using namespace std;

bool is_safe(int maze [4][4] ,int row ,int col,int newx, int newy,vector<vector<bool>>&visited ){
  if((newx>=0 && newx<row)&&(newy>=0&&newy<col)&&
    visited[newx][newy]==false &&
     maze[newx][newy]==1
   ){
      return true;
     }
  else{
  return false;
}

}
int rat_maze(int maze[4][4],int row,int col,int srcx,int srcy, string &output,vector<vector<bool>>&visited){
  

  //Up
  int newx=srcx+1;
  int newy=srcy;
  if(is_safe(maze,row,col,newx ,newy,visited)){
    visited[newx][newy]=true;
    output.push_back('U');
    rat_maze(maze,row,col,newx,newy,output,visited);
    output.pop_back();
    visited[newx][newy]==false;

  }
  //Right
   int newx=srcx;
   int newy=srcy+1;
    if(is_safe(maze,row,col,newx ,newy,visited)){
    visited[newx][newy]=true;
    output.push_back('R');
    rat_maze(maze,row,col,newx,newy,output,visited);
    output.pop_back();
    visited[newx][newy]==false;

  }
  //Down
   int newx=srcx-1;
   int newy=srcy;
    if(is_safe(maze,row,col,newx ,newy,visited)){
    visited[newx][newy]=true;
    output.push_back('D');
    rat_maze(maze,row,col,newx,newy,output,visited);
    output.pop_back();
    visited[newx][newy]==false;

  }
  //Left
  int newx=srcx;
  int newy=srcy-1;
   if(is_safe(maze,row,col,newx ,newy,visited)){
    visited[newx][newy]=true;
    output.push_back('L');
    rat_maze(maze,row,col,newx,newy,output,visited);
    output.pop_back();
    visited[newx][newy]==false;

  }
}
int main(){
  int maze[4][4]={
    {1,0,0,0},
    {1,1,0,0},
    {1,1,1,0},
    {1,1,1,1}};

    int row=4;
    int col=4;
    int srcx=0;
    int srcy=0;
    string output=" ";
    vector<vector<bool>>visited(row,vector<bool>(col,false));
  
   rat_maze(maze,row,col,srcx,srcy,output,visited);
  return 0;
}
