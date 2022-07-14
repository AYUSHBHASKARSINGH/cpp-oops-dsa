#include<bits/stdc++.h>
using namespace std;
//XOR OPERATOR   a^a = 0.
//XOR OF         0^a = a
// 0 0 = 0
// 1 0 = 1
// 1 1 = 0
// 0 1 = 1


int main(){
    int arr[7]={1,2,1,2,3,3,4};
    
    int ans =0;
    for(int i=0;i<7;i++){
        ans = ans^arr[i];
    }
    cout<<ans;
  
return 0;
}