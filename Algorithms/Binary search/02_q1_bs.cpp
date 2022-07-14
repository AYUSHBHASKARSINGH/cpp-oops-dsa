//YOU ARE GIVEN A SORTED ARRAY YOU HAVE TO FIND THE FIRST AND LAST INDEX OF 
// OCCURENCE OF A SPECIFIC ELEMENT

#include<iostream>
#include<vector>
using namespace std;

int firstocc(int arr[],int size,int key){
    int s = 0; //start
    int e = size-1; //end
    int ans= -1;

    while(s<=e){
        int mid= (s+e)/2;
        if(key == arr[mid]){
            ans = mid;
            e = mid-1;
        }
        else if(key > arr[mid]){
            s = mid+1;
        }
        else if(key < arr[mid]){
            e = mid-1;
        }
    }
    return ans;
}

int lastocc(int arr[],int size,int key){
    int s = 0; //start
    int e = size-1; //end
    int ans=-1;

    while(s<=e){
        int mid= (s+e)/2;
        if(key == arr[mid]){
            ans = mid;
            s = mid+1;
        }
        else if(key > arr[mid]){
            s = mid+1;
        }
        else if(key < arr[mid]){
            e = mid-1;
        }
    }
    return ans;
}

int main(){
    int arr[6] = {2,3,4,4,4,5};
    vector<int> final;
    final.push_back(firstocc(arr,6,4));
    final.push_back(lastocc(arr,6,4));
    // cout<<"first index is "<<firstocc(arr,6,3);
    // cout<<endl;
    // cout<<"last index is "<<lastocc(arr,6,3);
    cout<<final[0]<<" "<<final[1];
    return 0;
}