//--------->SELECTION SORT<----------
//USE-CASE
// WHEN WE HAVE TO SORT SMALL SIZED ARRAY/VECTOR OR LIST,





#include<bits/stdc++.h>
using namespace std;

int selectionsort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int minindex = i;
        for(int j=i+1;j<n;j++){
            if(arr[j] < arr[minindex]){
                minindex =j;
            }
        }
        swap(arr[minindex],arr[i]);
    }
    return 0;
}

int main(){

    int arr[9] = {29,72,98,13,87,66,52,51,36};
    selectionsort(arr,9);
    for(int a=0;a<9;a++){
        cout<<arr[a]<<" ";
    }
    return 0;
}