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
    for(int i=0; i<n; i++){
        for(int j = i; j<m; j++){
            //swap
            int tmp = A[i][j];
            A[i][j] = A[j][i];
            A[j][i] = tmp;
        }
    }

    //printing elements
    cout<<"Matrix is : ";
    for(int i = 0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }

}