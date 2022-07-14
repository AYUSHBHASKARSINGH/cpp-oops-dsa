#include<iostream>
using namespace std;

int binarysearch(int n){
    int s = 0;
    int e = n;
    int mid;
    int ans =-1;

    while(s<=e){
        mid = s+(e-s)/2;
        int square = mid*mid;

        if(square==n){
            return mid;
        }
        if(square<n){
            ans = mid;
            s =mid+1;
        }
        else{
            e = mid-1; 
        }
    }
    return ans;
    }

int main(){
    int n=9;
    cout<< binarysearch(n);

    return 0;

}