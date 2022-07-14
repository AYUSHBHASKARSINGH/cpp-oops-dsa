#include<iostream>
#include<deque>     //DOUBLY ENDED QUEUE
using namespace std;

int main(){
    deque<int> d;
    
    d.push_back(3);
    d.push_front(4);

    for(int i: d){
        cout<<i<<" ";               //new way learn
    }
     
    cout<<endl;
    
    // d.pop_back();              //similarly pop_front
    // for(int i: d){
    //     cout<<i<<" ";               
    // }

    cout<<"number at first index ->"<<d.at(1)<<endl;




//--------------ERASE--------------

    cout<<"before erase "<<d.size()<<endl;
    d.erase(d.begin(), d.begin()+1);                    //  d.begin se lekr d.begin+1 tk erase kr de 
                                                         //to second element hta dega
    cout<<"after erase "<<d.size()<<endl;

    
    return 0;
}