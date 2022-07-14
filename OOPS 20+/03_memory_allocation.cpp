#include<iostream>
using namespace std;


class shop{
       int item_id[100];
       int item_price[100];

       public:
       int counter=0;
    //    void initcounter(void){
    //        counter =0;
    //    }
       void setprice(void);
       void displayprice(void);

};

void shop :: setprice(void){
     cout<<"enter id of item number "<<counter+1<<endl;
     cin>>item_id[counter];
     cout<<"enter price of item"<<endl;
     cin>>item_price[counter];
     counter++; 
}

void shop:: displayprice(void){
  for(int i=0;i<counter;i++){
      cout<<"the price for item of itemid "<<item_id[i]<<" is "<<item_price[i]<<endl;
  }
}


int main(){
 
 shop dukaan;
//  dukaan.initcounter();
 dukaan.setprice();
 cout<<endl;
 dukaan.displayprice();



    return 0;
}