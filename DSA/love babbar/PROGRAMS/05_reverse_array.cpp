#include<iostream>
using namespace std;


void reverse(int arr[], int n){
    int start = 0;
    int end = n-1;

    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";    
     }
}


int main(){
     int array[6]={2,1,4,3,2,3};

    reverse(array,6);
    printarray(array,6);

return 0;
}




//----------------SWAP--------------

// #include<iostream>
// using namespace std;
// int main(){

//     int arr[2]= {1,2};
//     cout<<arr[0]<<" "<<arr[1]<<endl;
//     swap(arr[0],arr[1]);
//     cout<<arr[0]<<" "<<arr[1]<<endl;
// return 0;
// }