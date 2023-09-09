
#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter n=";
    cin>>n;

    //half pyramid
    
    for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
            cout<< "*";
            }
            cout<<endl;
        }
        cout<<endl;
     //inverted half pyramid

        for(int i=0;i<n;i++){
            for(int j=0;j<n-i-1;j++){
            cout<< "*";
            }
            cout<<endl;
        }
        cout<<endl;
        
     //numeric half pyramid
        
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
            cout<<j+1;
            }
            cout<<endl;
        }
        cout<<endl;
        
         //numeric inverted half pyramid
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n-i-1;j++){
            cout<<j+1;
            }
            cout<<endl;
        }
         //numeric hollow half pyramid
        
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                if(i==0||i==n-1||j==0||j==i-1)
                {
            cout<<j+1;}
            else{cout<<" ";}
            }
            cout<<endl;
        }
        cout<<endl;
        
         //numeric hollow inverted half pyramid

        for(int i=0;i<n;i++){
            for(int j=0;j<n-i-1;j++){
                if(i==0||i==n-1||j==0||j==n-i-2){
            cout<<j+1;}
            else{cout<<" ";}
            }
            
            cout<<endl;
        }
        

    return 0;
}

