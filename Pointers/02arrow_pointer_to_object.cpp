#include<iostream>
using namespace std;

class complex{
    int real,imaginary;
    public:
        void getdata(){
            cout<<"the real part is "<<real<<endl;
            cout<<"the imaginary part is "<<imaginary<<endl;
        }
        void setdata(int a,int b){
            real = a;
            imaginary = b;
        }
};

int main(){
    complex c;
    c.setdata(23,55);
    c.getdata();

    complex* ptr = &c;

    // (*ptr).setdata(22,69);
    // (*ptr).getdata();

    // or by new operator

    // complex *ptr = new complex;


    // (*ptr).setdata(22,69);  ------is exactly same as
    ptr->setdata(22,324);

    // (*ptr).getdata();   ----------is same as
    ptr->getdata();

    return 0;
}