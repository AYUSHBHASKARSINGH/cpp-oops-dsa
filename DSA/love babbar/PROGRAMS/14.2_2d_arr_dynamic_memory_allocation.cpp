#include<iostream>
using namespace std;
int main(){

    int m,n;
    cin>>m>>n;          //taking input which will affect size of upcoming variable is called input in runtime.

    // int arr[m][n];          //BAD PRACTICE
    // cout<<sizeof(arr);                  because hame size ka idea hi nhi hai


// ---------------SO WE WILL USE DYNAMIC MEMORY ALLOCATION------------


    int** arr = new int*[m];             //2d array ka process
    for(int i=0;i<n;i++){
        arr[i] =new int[n];
    }



return 0;
}