#include<iostream>
using namespace std;

void display(int arr[],int n){
    for (int i = 0; i < n; i++)        //traversal of array
    {
        cout<<arr[i]<<" ";
    }   
    cout<<endl;
}

int indinsertion(int arr[],int size, int element,int capacity,int index){
    if(size>=capacity){
        return -1;
    }
    for(int i=size-1; i>=index;i--){
            arr[i+1]=arr[i];
    }
    arr[index]=element;
    return 1;
}




int main(){
        int arr[100]={7,8,12,27,88};
        int element=45;
        int size=5;
        int index=3;
        display(arr,size);
        indinsertion(arr,5,element,100,index);
        size+=1;
        display(arr,size);

    return 0;
}