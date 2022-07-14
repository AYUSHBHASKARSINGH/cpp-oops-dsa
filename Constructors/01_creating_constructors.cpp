#include<iostream>
using namespace std;

class complex{
    int a,b;
        public:
        // creating constructors
        //   constructor is a special member function with the same name as of class
        //it is automatically invoked/ called whenever object is created.
        // it is used to initialise objects of its class

        complex(void);          //constructor declaration      basically function with class name

        void printnumber(){
            cout<<"number is "<<a<<" + "<<b<<"i"<<endl;
        }
};

complex :: complex(void){            //this is a default constructor as it takes no parameter
    a=10;
    b=0;
    cout<<"hello world";
}

int main(){
     
     complex c;
     c.printnumber();

    return 0;
}


// CHRACTERISTICS OF CONSTRUCTORS

// 1) it should be declared in public section of class
// 2) they are automatically invoked whenever the object is created.