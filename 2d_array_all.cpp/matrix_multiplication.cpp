#include<iostream>
using namespace std;

int main(){
    int n1, n2, n3;       //n = rows, m = columns
    cout<<"Enter rows and columns resp. of matrix A : ";
    cin>>n1>>n2;
    cout<<"Enter rows and columns resp. of matrix B : ";
    cin>>n2>>n3;
    int A[n1][n2];
    int B[n2][n3];
    int C[n1][n3];

    // taking input for 2d array
    cout<<"Enter elements of A : ";
    for(int i=0; i<n1; i++){
        for(int j=0; j<n2; j++){
            cin>>A[i][j];
        }
    }
    cout<<"Enter elements of B : ";
    for(int i=0; i<n2; i++){
        for(int j=0; j<n3; j++){
            cin>>B[i][j];
        }
    }

    

    for(int i=0; i<n1; i++){
        for(int j =0; j<n3; j++){
            for(int k =0; k<n1; k++){
                C[i][j]+=A[i][k]*B[k][j];
            }
        }
    }

    //printing elements
    cout<<"Matrix is : ";
    for(int i = 0; i<n1; i++){
        for(int j=0; j<n3; j++){
            cout<<C[i][j]<<" ";
        }
        cout<<endl;

    }
    return 0;

}