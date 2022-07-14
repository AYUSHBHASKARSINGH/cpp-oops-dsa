#include<iostream>
using namespace std;
int main(){

    int arr[5];
    char ch[6] = "abcde";              //end m null character /0 bhi rhta h uski space bhi consider h

    cout<<arr<<endl;            //yha pr arr first position ka address bta rha h
    
    cout<<ch<<endl;             // yha pr ch pura abcde de ga 
      //matlab cout takes char and int array differently

    char *c =&ch[0];           //ye bhi pura abcde de rha h ;(
    cout<<c<<endl;                         
    cout<<ch[0]<<endl;                    



return 0;
}