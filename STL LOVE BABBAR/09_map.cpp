#include<iostream>
#include<map>

//sorted in case of map
using namespace std;
int main(){

    map<int,string> m;

    m[11] = "ayush";
    m[1] = "bhaskar";
    m[21] = "singh";

    //inserting method 2

    m.insert({5,"babbar"});

    for(auto i: m){
        cout<<i.first<<" "<<i.second<<endl;       //sorted ayega
    }

    cout<<"finding 13 -->"<<m.count(13)<<endl;  //will give bool
return 0;
}