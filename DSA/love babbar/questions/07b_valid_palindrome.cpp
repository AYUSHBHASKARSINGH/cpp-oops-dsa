#include<iostream>
#include<string>

//faltu k character aur space hatani hai
//space ignore krna hai
//lower case karna hai
//eg    NO O O n  is a palindrome
using namespace std;

bool valid(char ch){
    if((ch>='a'&& ch<='z')||(ch>='A'&& ch<='Z')||(ch>='0'&& ch<='9')){
        return 1;
    }
    return 0;
}

char lowercase(char ch){
    if((ch >= 'a' && ch<= 'z') || (ch >= '0' && ch<= '9')){        
        return ch;
    }
    else{
       char ans = ch - 'A'+'a';
       return ans; 
    }
}

int check(string s){
    int st=0;
    int e= s.length()-1;
    int ans =1;
    
    while(st<=e){
        if(s[st] != s[e]){                   //yhi pr lower case kr lo
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


bool ispalindrome(string s){

    //faltu character hata diye
    string temp = "";
    for(int i=0;i<s.length();i++){
        if(valid(temp[i])){
            temp.push_back(temp[i]);
        }
    }

    //lowercase me karo
    for(int j=0;j<temp.length();j++){
        s[j] = lowercase(temp[j]);
    }   
    return check(temp);
}

int main(){
    string s;
    cout<<"enter the word -->";
    cin>>s;
    cout<<"palindrome -->"<<ispalindrome(s);


return 0;
}