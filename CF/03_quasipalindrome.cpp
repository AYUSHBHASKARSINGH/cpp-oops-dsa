#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[10000];

    int digit =0;
    int test = n;
    int index;
    while(test>0){
        test = test/10;
        digit = digit+1;
    }

    for(int i = (digit-1);i>=0;i--){
        arr[i] = n%10;
        n = n/10;
    }
    // cout<<digit<<endl;
    // for(int j=0;j<digit;j++){
    //     if(arr[j] != 0){
    //         index = j;
    //         break;
    //     }
    // }
    // cout<<index;
    

return 0;
}