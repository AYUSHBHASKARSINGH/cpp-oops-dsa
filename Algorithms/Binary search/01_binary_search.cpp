#include<bits/stdc++.h>
using namespace std;

//------------>LINEAR SEARCH<-------------------------
int linearsearch(int arr[],int size, int element){
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==element){
            return i;
        }
    }
    return -1;
}


// ----------------->BINARY SEARCH<---------------------

int binarysearch(int arr[],int size,int element){
        int low,mid,high;
        low = 0;
        high = size-1;
        // START SEARCHING

//keep searching jab tk low<=high;
    while(low<=high){

        mid = (high+low)/2;
        if(arr[mid]==element){
            return mid;
        }
        else if(arr[mid]<element){
            low = mid+1;              //kyuki mid wala to h hi nhi to uske agle se search krenge
        }
        else{
            high = mid-1;
        }    
        // ENDS SEARCHING
    }
        return -1;
}



int main(){
        // UNSORTED ARRAY FOR LINEAR SEARCH
        // int arr[]= {1,3,5,564,3,23,5,4,54643,56,34};
        // int size = sizeof(arr)/sizeof(arr[0]);          //arr[0]  or arr[int]  both will work

        //SORTED ARRAY FOR BINARY SEARCH
        int arr[]= {1,3,5,56,64,74,88,91,535,994};
        int size = sizeof(arr)/sizeof(arr[0]);          //arr[0]  or arr[int]  both will work
        cout<<size<<endl;
        int element = 56;
        // int searchindex = linearsearch(arr,size,4);
        int searchindex = binarysearch(arr, size,element);
        // cout<<"the element "<<element<<" is found at index "<<searchindex<<endl;
        cout<<binarysearch(arr,size,element);



    return 0;
}