#include<iostream>
using namespace std;

void print(int* p){
    cout<<*p<<endl;
}

void update(int*p){
    *p = *p+1;           //important
    //p =p+1;             //will not update
}

int main(){
    int value =5;
    int*p = &value;
    cout<<"before"<<endl;
    print(p);

    update(p);
    cout<<"after"<<endl;
    print(p);

return 0;   
}