#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int size = n+1;
    int arr[105];
    arr[0] = 0;
    // int ans;

    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }

    // arr[n+1] =91;

    for(int k=1;k<size;k++){
        if((arr[k] - arr[k-1]) > 15){
            cout<<(arr[k-1] + 15);
            break;
        }
        if(k==n && n!=1){
            // if(arr[n]%15 ==0){
            //     if((arr[n] - arr[n-1]) < 15){
            //         cout<<arr[n];
            //     }
            // }
            int temp = 90-arr[n];
            int t1 = temp/15;
            if(arr[n]%15==0){
                cout<<arr[n] + (15*t1);
            }
            else if(arr[n]>=75){
                cout<< 90;
            }
            else{
                cout<<arr[n] + 15*t1;
            }
        }
        if(n==1){
            cout<<arr[1] + 15;
        }

    }


return 0;
}