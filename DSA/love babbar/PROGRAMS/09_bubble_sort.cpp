//------->BUBBLE SORT<----------
//USE -CASE



//LOGIC
// IF A>B SWAP AND IF A<B IGNORE
//FOR N NUMBER OF TERMS WE WILL DO N-1 ROUNDS


#include<iostream>
using namespace std;


void bubblessort(int arr[], int size){
    bool swapped = false;  //OPTIMISATON
    //for round 1 to n-1
    for(int i=0;i<size;i++){            //can also do i=1 se n leking agey ka code change hoga fr
        for(int j=0;j<size-i-1;j++){    //if used above statement then 0  se size-i only
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true; //mtlb agr kisi bhi round m ek bhi swap nhi hue mtlb wo sorted hai already.
            }
        }
        if (swapped ==false){               //this will prevent from checking whole if theres is sorted array already.
            break;    

            //after optimisation best case ki time complexity = O(n) HO JAYEGI
        }   
    }
}


int main(){
    int arr[6] = {10,1,7,6,14,9};
    bubblessort(arr,6);

    for(int a=0;a<6;a++){
        cout<<arr[a]<<" ";
    }
return 0;
}



//----TIME COMPLEXITY
//BEST CASE --- ALREADY SORTED ----O(N^N)
//WORST CASSE------REVERSE SORTED--- O(N^N)

