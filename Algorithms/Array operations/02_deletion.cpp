#include<iostream>
using namespace std;

void display(int arr[],int n){
    for (int i = 0; i < n; i++)        //traversal of array
    {
        cout<<arr[i]<<" ";
    }   
    cout<<endl;
}

int inddeletion(int arr[],int size,int index){
    
    for(int i=index; i<size-1;i++){
            arr[i]=arr[i+1];
    }
    
    return 1;
}




int main(){
        int arr[100]={7,8,12,27,88};
        int element=45;
        int size=5;
        int index=3;
        display(arr,size);
        inddeletion(arr,5,index);
        size-=1;
        display(arr,size);

    return 0;
}