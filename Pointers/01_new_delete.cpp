#include<iostream>
using namespace std;

int main(){
int a=4;
int* ptr = &a;

cout<<"the value at address ptr is "<<*(ptr)<<endl;

// -------->New Keyword<----------------//

int* p= new int(40);
float* q= new float(40.34);
cout<<"the value at address p is "<<*(p)<<endl;
cout<<"the value at address q is "<<*(q)<<endl;


//FOR ARRAY

int* arr = new int[3];       // compiler will allocate momory to store 3 integers and will allocate first to arr then we can access other by +1 krke 
arr[0]=10;
// arr[1]=20; or
*(arr+1) = 20;
arr[2]=30;


// ----->Delete Keyword<------//

// delete[] arr;

    cout<<"the value at arr[0] is "<<arr[0]<<endl;
    cout<<"the value at arr[1] is "<<arr[1]<<endl;
    cout<<"the value at arr[2] is "<<arr[2]<<endl;
    return 0;
}