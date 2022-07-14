#include<iostream>
using namespace std;


class vector{
      public:
        int* arr;
        int size;
          vector(int m){
            size=m;
            arr = new int[size];
          }
      int dotproduct(vector &v){
          int d=0;
          for (int i = 0; i < size; i++)
          {
              d+= this->arr[i]*v.arr[i];
          }
              return d;
      };
};


int main(){

    vector v1(3);
    v1.arr[0] = 10;
    v1.arr[1] = 34;
    v1.arr[2] = 145;

    vector v2(3);
    v2.arr[0] = 20;
    v2.arr[1] = 20;
    v2.arr[2] = 20;
    
    int a = v1.dotproduct(v2);
    cout<<a;
    return 0;
}