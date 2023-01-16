#include<iostream>
using namespace std;

int main(){

    int row, col;
    cout<<"Enter rows and columns resp. ";
    cin>>row>>col;
    int A[row][col];

    //to take input of elements
     cout<<"Enter elements : ";
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>A[i][j];
        }
    }

    //to print matrix
    cout<<"The row-wise matrix is following : "<<endl;
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    //printing row-wise sum
    for(int i=0; i<row; i++){
        int sum = 0;
        for(int j =0; j<col; j++){
            sum += A[i][j];
        }
        cout<<"The row-wise required sum is "<<sum<<endl;
    }

    //printing column-wise sum
    for(int i=0; i<col; i++){
        int sum = 0;
        for(int j =0; j<row; j++){
            sum += A[j][i];
        }
        cout<<"The col-wise required sum is "<<sum<<endl;
    }

    return 0;
}