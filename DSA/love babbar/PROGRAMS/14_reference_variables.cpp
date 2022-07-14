#include<iostream>
using namespace std;

void update(int& i){          //Pass by reference
    i++;                      // Pass by value me copy create hoti h
    // // i--;
    // i+=2;
 
}


int main(){

    
    int i=5;         // matlab isko i bhi bol skta hu aur j bhi
    int &j =i;          //reference variable
    j++;
    cout<<i<<endl;
    // int i =5;
    update(i);  
    cout<<i;

return 0;
}