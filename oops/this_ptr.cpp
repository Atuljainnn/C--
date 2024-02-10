#include<iostream>
using namespace std;
class Student{
private:
  string gf;
public:
 int id;
 int age;
 string name;
 int marks;
 bool present;

//default ctor
 Student(){
  cout<<"Default ctor called"<<endl;
}
//parameterized ctor

Student(int id,int age,string name,int marks,bool present,string  gf){
 this->id=id;
 this->age=age;
 this->name=name;
 this->marks=marks;
 this->present=present;
 this->gf=gf;

  cout<<"parameterized ctor called"<<endl;
}

Student(int id,int age,string name,int marks,bool present){
 this->id=id;
 this->age=age;
 this->name=name;
 this->marks=marks;
 this->present=present;
 this->gf=gf;
 
  cout<<"parameterized_2 ctor called"<<endl;
}
 void study(){
  cout<<"studying"<<endl;
 }

 void cheating(){
  cout<<"cheating"<<endl;
 }

 void bunk(){
 cout<<"bunking"<<endl;
 }


};
int main(){

  Student s1;
  Student s2(7,19,"Atul",100,1,"no");
  Student *s3=new Student(7,19,"Ashish",100,1);
 
  cout<<s2.name<<endl;
  cout<<s2.id<<endl;
  
  cout<<s3->age<<endl;
  cout<<(*s3).name<<endl;
  delete s3;

    return 0;
}