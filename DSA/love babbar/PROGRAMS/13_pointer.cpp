#include<iostream>
using namespace std;
int main(){
        int num =10;
        // cout<<num<<endl;

        // int*ptr = &num;
        // cout<<ptr<<endl;
        // cout<<*ptr<<endl;


        // //another way of initiallization

        // int*p =0;
        // p=&num;
        // cout<<p<<endl;
        // cout<<*p;


 //------------------>COPYING A POINTER------------------

        int*p =&num;       
        int*q = p;
        
        cout<<p<<"-"<<q<<endl;
        cout<<*p<<"-"<<*q<<endl;

//--------------POINTER AND ARRAYS------------

    int arr[]={1,2,3,4,5};
    cout<<*arr<<" "<<*(arr+1)<<endl;
    cout<<arr<<endl;

//--------experiment-----------
    int a[]={1,2,3,4};
    int*ap = a;
    cout<<*ap<<" ";

return 0;
}