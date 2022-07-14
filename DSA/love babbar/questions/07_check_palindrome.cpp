// --------->>>>>>>PALINDROME

//In normal code compiler will consider uppercase and lowercase as different so make it same by defining a different function

#include<iostream>
using namespace std;

char lowercase(char ch){
    if(ch >= 'a' && ch<= 'z'){        
        return ch;
    }
    else{
       char ans = ch - 'A'+'a';
       return ans; 
    }

}

int getlength(char name[]){
    int count =0;
    for(int i=0;name[i] != '\0';i++){        
        count++;
    }
    return count;
}

int chck(char a[]){
    int st=0;
    int e= getlength(a)-1;
    int ans =1;
    
    while(st<=e){
        if(lowercase(a[st]) != lowercase(a[e])){                   //yhi pr lower case kr lo
            ans = 0;
            break;
        }
        else{
            st++;
            e--;
        }
    }
    return ans;
}

int main(){
    char a[20];
    cout<<"enter the word to be checked "<<endl;
    cin>>a;

    cout<<"Palindrome -->"<<chck(a)<<endl;
    cout<<lowercase('A');

return 0;
}