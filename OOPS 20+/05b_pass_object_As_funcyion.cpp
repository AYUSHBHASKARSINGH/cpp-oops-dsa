#include<iostream>
using namespace std;

class complex{
    int a;
    int b;

    public:
        void setdata(int v1,int v2){
            a=v1;
            b=v2;
        }
        
        void setdatabysum(complex o1,complex o2){            //using class object complex as a function
            a = o1.a + o2.a;
            b = o1.b + o2.b;
        }
};


int main(){
    
    return 0;
}