#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:
        void setnumber(int n1, int n2){
            a=n1;
            b=n2;
        }
        void printnumber(){
            cout<<"your number is "<<a<< "+" <<b<<"i"<<endl;
        }
        
        void setdatabysum(complex o1,complex o2){            //using class object complex as a function
            a = o1.a + o2.a;
            b = o1.b + o2.b;
        }

};

int main(){
    complex c1,c2;
    c1.setnumber(1,4);
    c1.setnumber(3,5);
    c1.printnumber();
    c1.setdatabysum(c1,c2);

    return 0;
}