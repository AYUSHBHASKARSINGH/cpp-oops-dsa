#include<iostream>
#include<vector>
#include<string>
#include<stack>
#include<algorithm>
using namespace std;

int maxi(stack<int> s){
        // int max = s.top();
        vector<int> v;
        for(int j=0;j<s.size();j++){
            v.push_back(s.top());
            s.pop();
        }
        sort(v.begin(),v.end());
        int max = v[v.size()-1];

    return max;
}

vector<int> getmax(vector<string>& operations){
    stack<int> s;
    int n;  
    vector<int> vs;
    for(int i=0;i<operations.size();i++){
        if(operations[i]=="1"){
            cin>>n;
            s.push(n);
        }
        if(operations[i]=="2"){
            s.pop();
        }
        if(operations[i]=="3"){
                // cout<<maxi(s);
                vs.push_back(maxi(s));

        }

    }
return vs;

}


int main(){
    vector<string> operations{"1","2","1","2","1","1","2","3","1","3"};

    getmax(operations);




return 0;
}