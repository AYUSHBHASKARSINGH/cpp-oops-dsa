#include<iostream>
#include<array>
using namespace std;

int main(){

    int arr[3] = {1,2,3};            //normal array jo bnate hai

    array<int,4> a= {1,2,3,4};     //ye STL wala array 

    int length = a.size();
            //FOR REFERENCE ONLY
            // int ayush  = arr.size();   //wrong
            //int ayush = sizeof(arr)/ sizeof(arr[0]);        //without STL
    cout<<length<<endl;

    //  ----->basic functions or some sort<---------
    cout<<"element at 2nd index "<<a.at(2)<<endl;
    cout<<"empty or not -->"<<a.empty()<<endl;   //will give boolean
    cout<<"FIRST ELEMENT "<<a.front()<<endl;
    cout<<"FIRST ELEMENT "<<a.back()<<endl;
    return 0;
}
