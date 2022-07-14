#include<iostream>
using namespace std;

class employee{
  int id;
//   int count;
  static int count;

  public:
       void setdata(void){
           cout<<"enter the id"<<endl;
           cin>>id;
           count++;
       }

       void getdata(void){
           cout<<"the id is "<<id<<" and the employee id is "<<count<<endl;
       }
};



// count is the static data member of class employee
int employee :: count;           //default value is zero can change here by count=10000 or anything

int main(){
   employee ayush,harry,rohan;
   ayush.setdata();
   ayush.getdata();

   harry.setdata();
   harry.getdata();

   
   rohan.setdata();
   rohan.getdata();
return 0;
}