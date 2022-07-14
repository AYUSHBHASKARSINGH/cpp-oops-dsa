#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "AYUSH";
    cout<<str.length()<<endl;

    str.push_back('b');
    cout<<str<<endl;
    cout<<str.length()<<endl;

    str.pop_back();
    cout<<str<<endl;

    str.at(2) ='k';  //
    cout<<str.at(2);
return 0;
}