#include<iostream>
using namespace std;


int main(){
    int i=5;
    int*ptr1 = &i;
    int* *ptr2 = &ptr1;             //double pointer which stores address of a pointer
return 0;
}