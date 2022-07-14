#include<iostream>
#include<algorithm>
#include<vector>           //or we can use #incude<bits/stdc++.h> for whole
using namespace std;
int main(){

// vector sorted hona chahiye
vector<int> v;
v.push_back(1);
v.push_back(4);
v.push_back(12);
v.push_back(41);
//--------BINARY SEARCH---------------
//v.begin se lekr v.end tk m 12 dhundna hai...
cout<<"finding 12-->"<<binary_search(v.begin(),v.end(),12)<<endl;       

//----------BOUNDS-----------
//learn more about lower/upper bound kya hotey hai
cout<<"lower bound-->"<<lower_bound(v.begin(),v.end(),41)-v.begin()<<endl;


//------------->MAXIMUM and MINIMUM<--------------
int a=3,b=69;
cout<<"maximum of a and b is -->"<<max(a,b)<<endl;
cout<<"minimum of a and b is -->"<<min(a,b)<<endl;

//-------SWAP-----------
swap(a,b);
cout<<"a is--> "<<a<<" b is -->"<<b;
cout<<endl;


//-------->STRING REVERSE----------

string s = "something";
reverse(s.begin(),s.end());

cout<<"reversed string is "<<s;

// reverse(v.begin(),v.end());              //same for vectors
// for(int i=0;i<v.size();i++){
//     cout<<v[i]<<" ";
// }

//-----------------ROTATE VECTOR---------------------

rotate(v.begin(),v.begin()+2,v.end());         //change and observe
cout<<"after rotate "<<endl;

for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}


return 0;
}