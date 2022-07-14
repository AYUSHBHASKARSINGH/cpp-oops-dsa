#include<iostream>
#include<algorithm>
using namespace std;


int main(){
    int arr[5] = {44,2,1,4,32};
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    sort(arr,arr+5);

    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}

