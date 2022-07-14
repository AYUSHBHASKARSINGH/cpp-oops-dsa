#include<iostream>
#include<list>

using namespace std;

int main(){
    list<int> l;
    list<int> b(5,100);
    list<int> n(b);            //list isme copy ho jayegi
    
    for(int i:n){               // i belongs to n
        cout<<i<<" ";
    }
    cout<<endl;

    l.push_back(1);
    l.push_front(2);
     
    for(int i:l){               // i belongs to l
        cout<<i<<" ";
    }
    cout<<l.front();
    return 0;
}