#include<iostream>
#include<stack>
using namespace std;


//FIRST IN LAST OUT

int main(){
    stack<string> s;
    s.push("ayush");                //like stacks
    s.push("bhaskar");              //  singh
    s.push("singh");                //  bhaskar
                                    //  ayush     //pehle rkha to neeche aya
    
    cout<<"TOP ELEMENT "<<s.top();
    cout<<endl;
    s.pop();
    // for(int i: s.begin()){
    //     cout<<i<<" ";
    // }
    cout<<"TOP ELEMENT "<<s.top();
    cout<<"bottom ELEMENT "<<s.top();


    return 0;
}