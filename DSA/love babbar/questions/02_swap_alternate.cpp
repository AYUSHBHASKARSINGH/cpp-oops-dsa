#include<iostream>
using namespace std;

void swapAlternate(int arr[], int n){

   for (int i = 0; i < n; i+=2)
   {
       if(i+1 < n){
           swap(arr[i],arr[i+1]);
       }
   }

}

void display(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }  
}


int main(){
    int arr[6]= {1,2,3,4,5,6};
    int brr[5]= {1,2,3,4,5};
    display(arr,6);
    cout<<endl;
    swapAlternate(arr,6);
    display(arr,6);
    cout<<endl;
    swapAlternate(brr,5);
    display(brr,5);

return 0;
}