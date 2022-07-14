//-------->SET<----------
//cant modify 
//either insert or delete
//stores unique data example if given 10 times 5 it will store only 5 one time
//implementation uses BST(binary search tree);


#include<iostream>
#include<set>

using namespace std;

int main(){

    set<int> s;
    s.insert(1);
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(13);
    s.insert(9);

    //sort automatically
    //and repeated element is ignored
    for(auto i: s){
        cout<<i<<" ";
    }
    cout<<endl;

    //or print by using iterator
     set<int> :: iterator iter; 
     for(iter = s.begin();iter != s.end();iter++){
            cout<<*iter<<" ";
     }
    iter = s.begin();
     s.erase(iter);

     for(iter = s.begin();iter != s.end();iter++){
            cout<<*iter<<" ";
     }


    iter = s.find(5);
    cout<<"value present at iter "<<*iter<<" ";


return 0;
}