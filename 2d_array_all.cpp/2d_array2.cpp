#include<iostream>
using namespace std;

int main(){

    int A[3][4] = {{1, 11, 111, 1111}, {2, 22, 222, 2222}, {3, 33, 333, 3333}};
    cout<<"The row-wise matrix is following : "<<endl;
    for(int i = 0; i<3; i++){
        for(int j = 0; j<4; j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"The column-wise matrix is following : "<<endl;
    for(int i = 0; i<4; i++){
        for(int j = 0; j<3; j++){
            cout<<A[j][i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}