// question --> peak index in mountain array
// matlb when elements of array are placed in a quadrant it will form
// a mountain kind of shape
//means phle incrasing m sorted h fir decreasing me

#include<iostream>
#include<vector>
using namespace std;

int peakindex(vector<int> arr){
    int s =0;
    int e = arr.size()-1;

    while(s<e){    // here <= will not come write in copy and think
        int mid = s + (e-s)/2;

        if(arr[mid]<arr[mid+1]){
            s = mid+1;
        }
        else{
            e = mid;
        }
    }
    return s;
}

int main(){

    vector<int> arr{0,1,3,4,6,10,12,5,2};
    cout<<"peakindex is "<<peakindex(arr);


return 0;
}