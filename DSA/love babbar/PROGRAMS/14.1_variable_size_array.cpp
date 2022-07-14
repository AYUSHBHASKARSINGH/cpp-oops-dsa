//normal array and int etc uses stack(static allocation)
//  memory but for 

//heap we have to use "NEW " keyword


// --------------DYNAMIC MEMORY ALLOCATION-----------

#include<iostream>
using namespace std;

int getsum(int* arr){            //pehle arr[0] ka address h     int arr[] aise bhi likh slte hai
    int sum=0;
    for(int j=0;j<5;j++){
        sum += arr[j];
    }
    return sum;
}


int main(){
    //new jo h wo address hi deta h basically
    // new char;                       //heap m char banaya 
    char* ch = new char;                         //BUT heap me memory change nhi kr skte direct isliye pointers ka sahara lenge
    // upar char ch to stack me banega pr new char jo h wo heap m banega

    delete ch;        //aise delete ho jati h heap m se


    // ------FOR ARRAY-------

    int* arr = new int[10];       //array in heap 
                                    // total memory hogi 10*4 = 40 of dynamic waki aur 8 pointer ki static wali = 48.

    // ------->taking input-------

    for(int i=0;i<5;i++){
        cin>>arr[i];
    }

    cout<<getsum(arr)<<endl;


    // delete []arr;      //for array
return 0;
}





// --------------------GYAN------------

// static keyword me memory apne aap delete bhi hoti jati hai 
// example:
// while(true){
//     int i=5;         to yha pr ek loop m i=5 bna fir jab ek baar loop Chla to memory delete bhi ho gyi kyuki local variable bhi h 
//     jeewan loop k baad khtam ho jata hai
// }



// lekin in dynamic memory apne aap delete nhi hoti hai usey manual 
// delete keyword use krke krna pdta hai 
// example:

// while(true){
//     int* a = new int;       
//     to isme loop khatam hone pr stack m se int a ki 4 byte to delete ho jayegi par heap ki 4 byte nhi hogi usko free karne k liye delete keyword use karna padegaa
// }