#include<iostream>
using namespace std;

class employee{
       private: 
         int a,b,c;  //can only be used by functions in class
       public: 
        int d,e;     //can be used by functions outside of class too.

        void enterdata(int a1, int b1, int c1);    //declaration

        void getdata(){
            cout<<"the value of a is "<<a<<endl;
            cout<<"the value of b is "<<b<<endl;
            cout<<"the value of c is "<<c<<endl;
            cout<<"the value of d is "<<d<<endl;
            cout<<"the value of e is "<<e<<endl;
            }
};
void employee :: enterdata(int a1,int b1,int c1){          //define
    a=a1;
    b=b1;
    c=c1;
}
 
int main(){
 employee harry;
 harry.d=34;
 harry.e=69;
 harry.enterdata(55,55,55);
 harry.getdata();

    return 0;
}