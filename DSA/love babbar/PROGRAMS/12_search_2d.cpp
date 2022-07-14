#include<iostream>
#include<vector>
using namespace std;

int bsearch2d(vector<vector<int>>& matrix,int key){
    int row = matrix.size();
    int column = matrix[0].size();
    int st =0;
    int e = (row*column)-1;

    while(st<=e){
        int mid = st + (e-st)/2;
        int element =  matrix[mid/column][mid%column];  //mid element k liye i j kya h uska scene
        if(key==element){  //element--> mid hi h bs mid linear m h aur element matrix m h
            return 1;
        }
        if(key > element){
            st = mid+1;
        }
        if(key < element){
            e = mid-1;
        }
    }
    return 0;
}


int main(){
    vector<vector<int>> matrix{{1,3,5,7},{10,11,16,20},{22,30,44,60}};
    cout<<"present or not-->"<<bsearch2d(matrix,30);

return 0;
}