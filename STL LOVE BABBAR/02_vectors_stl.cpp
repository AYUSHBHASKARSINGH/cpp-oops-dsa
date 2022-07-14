#include<iostream>
#include<vector>

using namespace std;

int main(){

vector<int> v ;      // a vector v of type int    //vector can double its memory if more elements are to be added
//initial capacity/memory of vector is 0

vector<int> a(5,1);              //size 5 aur pancho element 1 se initialize ho jayenge

vector<int> last(a);       // last k andr a k elements aa jayenge.


// __check
cout<<v.capacity()<<endl;

//NOW

    v.push_back(1);
    cout<<"capacity -->"<<v.capacity()<<endl;
    //    ^
    //    |  doubles
    v.push_back(2);
    cout<<"capacity -->"<<v.capacity()<<endl;
     //    ^
     //    |  doubles      
    v.push_back(3);
    cout<<"capacity -->"<<v.capacity()<<endl;  
    cout<<"size -->"<<v.size()<<endl;  


    cout<<"FIRST ELEMENT "<<v.front()<<endl;
    cout<<"LAST ELEMENT "<<v.back()<<endl;
    


//--------------- POP BACK-----------------
    cout<<"before pop_back "<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    

    v.pop_back();
    cout<<endl;

    cout<<"AFTER POP BACK"<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

//---------------CLEAR-----------
// size becomes 0 but capacity remains as it is

   cout<<"size before clear - "<<v.size()<<endl;
   cout<<"capacity before clear - "<<v.capacity()<<endl;

    v.clear();

   cout<<"size after clear - "<<v.size()<<endl;
   cout<<"capacity after clear - "<<v.capacity()<<endl;


//-------.begin-------

    // // *v.begin()=99;

    // cout<<"before pop_back "<<endl;
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<endl;
    // }


    return 0;
}