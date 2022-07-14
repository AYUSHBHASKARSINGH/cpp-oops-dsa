#include<iostream>
#include<string>
using namespace std;

class binary{
    string s;
    public:
    void read(void);
    void check_binary(void);
    void ones(void);              //for finding ones compliment
    void display();
};

void binary :: read(){
    cout<<"enter the number"<<endl;
    cin>>s;
}

void binary :: check_binary(){
 for(int i=0;i<s.length();i++){
     if(s.at(i)!='0' && s.at(i)!='1'){
         cout<<"incorrect binary format"<<endl;
         break;
     }
 }
}

void binary :: ones(){
    for(int i=0;i<s.length();i++){
        if(s.at(i)=='0'){
            s.at(i)='1';
        }
        else{
            s.at(i)='0';
        }
    }
}

void binary :: display(){
    cout<<"displaying your binary number"<<endl;
    for(int i=0;i<s.length();i++){
        cout<<s.at(i);
        }
        cout<<endl;
    }

int main(){

binary b;
b.read();
b.check_binary();
b.display();
b.ones();
b.display();

 return 0;
}