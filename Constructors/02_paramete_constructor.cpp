#include<iostream>
using namespace std;

class complex{
    int a,b;
       public:
        complex(int ,int);         

        void printnumber(){
            cout<<"number is "<<a<<" + "<<b<<"i"<<endl;
        }
};

complex :: complex(int x, int y){        //this is parameterised constructor
    a=x;
    b=y;  
}

int main(){
    // implicit call
    complex com(4,6);
    com.printnumber();

    // EXPICIT CALL

    complex some = complex(5,7);
    some.printnumber();
    return 0;
}