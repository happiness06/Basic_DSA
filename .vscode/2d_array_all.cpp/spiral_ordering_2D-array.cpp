#include<iostream>
using namespace std;

int main(){
    int n, m; //n=rows, m = columns
    cout<<"Enter rows and columns resp. ";
    cin>>n>>m;
    int A[n][m];

    // taking input for 2d array
    cout<<"Enter elements : ";
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>A[i][j];
        }
    }

    int row_start = 0, row_end = n-1, column_start = 0, column_end = m-1;
    while (row_start <= row_end && column_start <= column_end){
        for(int col = column_start; col <=column_end; col++){
            cout<<A[row_start][col]<<" ";
        }
        row_start ++;

        for(int row = row_start; row <=row_end; row++){
            cout<<A[row][column_end]<<" ";
        }
        column_end--;

        for(int col = column_end; col >=column_start; col--){
            cout<<A[row_end][col]<<" ";
        }
        row_end--;

        for(int row = row_end; row>=row_start; row--){
            cout<<A[row][column_start]<<" ";
        }
        column_start++;
    }
    return 0;
}