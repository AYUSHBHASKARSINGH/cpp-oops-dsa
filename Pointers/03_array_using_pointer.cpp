#include<iostream>
using namespace std;

class shop{
    int id;
    float price;
    public:
     void setdata(int a,int b){
         id = a;
         price = b;
     }
     void getdata(void){
         cout<<"id is "<<id<<endl;
         cout<<"price is "<<price<<endl;

     }

};

int main(){
    int size=3 ;
    // IN SHOP WE HAVE
    // generalstore items
    // hardware items
    // veggies

    int p;
    float q;
    

    // shop* ptr = &size  is same as ---
    shop* ptr = new shop[size];
    shop* ptroriginal = ptr;
    for (int i = 0; i < size; i++)
    {
        cout<<"enter id and price of item "<<i+1<<endl;
        cin>>p>>q;
        // (*ptr).setdata(p,q);     or
        ptr->setdata(p,q);
        ptr++;
    }

    for (int i = 0; i < size; i++)
    {
        cout<<"item number "<<i+1<<endl;
        ptroriginal->getdata();
        ptroriginal++;
    }
    
    
    return 0;

}