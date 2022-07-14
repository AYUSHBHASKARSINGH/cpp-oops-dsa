//FIRST IN FIRST OUT
//like a line or queue basically
#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<string> q;

    q.push("ayush");
    q.push("bhaskar");
    q.push("singh");

    cout<<"frist element ->"<<q.front();
    cout<<endl;
    cout<<"last element ->"<<q.back();
    return 0;
}