#include<iostream>
#include<vector>
using namespace std;

//search for vector methods

void display(vector<int> &v){
        // vector<int> v;
        for(int j=0;j<v.size();j++){
            // cout<<v[j]<<" ";
            //or
            cout<<v.at(j)<<" ";

        }
        cout<<endl;
    };

int main(){
    vector<int> v;
    int element;
    for (int i = 0; i < 4; i++)
    {
        cout<<"enter the number ";
        cin>>element;
        v.push_back(element);
    }
    
    // v.pop_back();
    display(v);


//method  a.insert


//----->ratt lo how to make iterator.......;(
    vector<int> :: iterator iter;        //iterator mtlb us index pr point kr rha h *iter kr k value le skte hai
    iter= v.begin()+1;

    v.insert(iter,5,566);               //5 baar 556
    
    display(v);

    return 0;
}