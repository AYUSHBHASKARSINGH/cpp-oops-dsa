#include<bits/stdc++.h>
using namespace std;

void set_matrix_zero(int mat[][3],int size){
            vector<int> row;
        vector<int> col;

        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(mat[i][j]==0){
                    row.push_back(i);
                    col.push_back(j);
                }
            }
        }

        for(int l=0;l<row.size();l++){
            for(int i=0;i<3;i++){
                mat[row[l]][i]=0;
                // mat[i][col[l]] = 0;
            }
        }

        for(int l=0;l<col.size();l++){
            for(int i=0;i<3;i++){
                mat[i][col[l]] = 0;
            }
        }
}




int main(){

    int mat[3][3];

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>mat[i][j];
        }
    }

    set_matrix_zero(mat,3);
    cout<<endl;
        

//print
        for(int h=0;h<3;h++){
            for(int y=0;y<3;y++){
                cout<<mat[h][y]<<" ";
            }
            cout<<endl;
        }
    

return 0;
}