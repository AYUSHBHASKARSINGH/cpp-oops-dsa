#include <iostream>
using namespace std;

int getmax(int arr[] ,int size){
    int max = arr[0];
   
    for (int j = 0; j < size; j++)
    {
        if(max < arr[j]){           //can also do this by using function max in loop jo ki bsically a,b me zyada value hi deta h
            max = arr[j];
        }
    }
    return max;

};

int main()
{

    int size;
    cin >> size;

    int array[100];

    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    cout<<getmax(array,size);

    return 0;
}