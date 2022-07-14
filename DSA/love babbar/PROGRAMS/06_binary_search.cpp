#include<iostream>
using namespace std;

int binarysearch(int arr[], int size, int key){

    int low = 0;
    int high = size-1;
    

    while(low<=high){
        int mid= (low+high)/2;
        if(key == arr[mid]){
            return mid;
        }
        else if(key < arr[mid]){
            high = mid-1;
        }
        else {
            low = mid+1;
        }
    }
    return -1;
}


int main(){
    int even[6]={2,4,6,8,12,18};
    int odd[5]={3,8,11,14,16};
    cout<<"index is "<<binarysearch(even,6,12);
    cout<<"index is "<<binarysearch(odd,5,12);

return 0;
}