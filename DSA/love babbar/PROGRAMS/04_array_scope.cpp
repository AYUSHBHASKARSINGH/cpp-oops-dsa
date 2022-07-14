#include<iostream>
using namespace std;


void updatearray(int arr[],int size){

    arr[0] = 69;         //unlike in functions it will change a[0] to 69 as here address of a is passed not value in case of array
    cout<<"printing through function "<<endl;

    for(int i=0;i<3;i++){
            cout<<arr[i]<<" "<<endl;
        }


};



int main(){
    int arr[3]={2,1,3};
    
    updatearray(arr,3);
    cout<<"printing through main "<<endl;

    for(int i=0;i<3;i++){
        cout<<arr[i]<<" "<<endl;
    }
    
return 0;
}