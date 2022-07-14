#include<iostream>
using namespace std;

class employee{
       int id;
       int salary;

    public:
       void setid(){
           salary =122;
           cout<<"enter id "<<endl;
           cin>>id;
       }

       void getid(){
           cout<<"the id is "<<id<<endl;
       }
};

int main(){
     
     employee fb[5];

     for(int i=0;i<5;i++){
         fb[i].setid();
         fb[i].getid();
     }

    return 0;
}