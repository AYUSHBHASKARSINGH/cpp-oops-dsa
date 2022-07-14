//FINDING PIVOT OF AN ARRAY.
//PIVOT IS BASICALLY LOWEST TERM BEFORE WHICH SERIES IS INCREASING AFTER WHICH SERIES IN INC
//DO BY BINARY SEARCH

#include<iostream>
using namespace std;

int getpivot(int arr[],int size){
    int s=0,e=size-1,mid;

    while(s<e){
        mid = s+ (e-s)/2;
        if(arr[mid]>= arr[0]){
            s= mid+1;
        }
        else{
            e=mid;
        }
    }
    return s;
}

int main(){
    int arr[5] = {10,17,1,3,20};
    cout<<"pivot is "<<getpivot(arr,5);
return 0;
}