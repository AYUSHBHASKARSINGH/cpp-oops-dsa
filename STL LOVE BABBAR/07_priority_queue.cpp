#include<iostream>
#include<queue>
using namespace std;

int main(){
    //MAX HEAP
    priority_queue<int> max;

    //MIN HEAP          //learn
    priority_queue<int,vector<int>,greater<int>> mini;

    max.push(1);
    max.push(3);
    max.push(2);
    max.push(0);

    int n=max.size();
    for(int i=0;i<n;i++){
        cout<<max.top()<<" ";
        max.pop();
    }
  
    cout<<endl;

    mini.push(43);
    mini.push(3);
    mini.push(13);
    mini.push(433);


    int m=mini.size();

    cout<<m<<endl;

    for(int i=0;i<m;i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }

    cout<<max.size();
    return 0;
}