#include<iostream>
using namespace std;
int main(){
    // int arr[10] = {8,99,2,3,4,5,6,7,8,9};         //initialize all elements with 0

    // cout<<"address of first element is -->"<<arr<<endl;       //arr jo naam h wo first element ka address hoga
    // cout<<"first element is-->"<<arr[0]<<endl;
    // cout<<"address of first element is -->"<<&arr[0]<<endl;
    // cout<<"first element is -->"<<*arr<<endl;

    // // now by playing with positions

    // cout<<"second element is-->"<<*(arr+1)<<endl;
    // cout<<"second element is-->"<< *arr+1<<endl;    // first elemet +1
    // cout<<"third element is-->"<<*(arr+2)<<endl;



    int temp[10]={1,2};
    cout<<sizeof(temp)<<endl;          // ye 4*10 ayega pure array ka size.
    cout<<sizeof(temp[0])<<endl;          


    // int *ptr = &temp[0];
    // cout<<sizeof(ptr)<<endl;           //aur pointer/ address k liye to 8 hota hi hai.



    int arr[10]={4,3,24,5};

  //ERROR
              // arr = arr+1;

    int *ptr = &arr[0];        //first element pr point kr rha h 
    cout<<*ptr<<endl;
    cout<<ptr<<endl;
    ptr = ptr+1;               //ab next wali pr point kr rha h

    cout<<*ptr<<endl;
    cout<<ptr<<endl;


return 0;
}