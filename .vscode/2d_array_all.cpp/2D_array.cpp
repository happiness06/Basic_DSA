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

    //printing elements
    cout<<"Matrix is : ";
    for(int i = 0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }

    int x;
    cout<<"Enter the element to be found : ";
    cin>>x;
    bool flag =true ;
    for(int i=0; i<n; i++){
        for(int j =0; j<n; j++){
            if(A[i][j] == x){
                cout<<i<<" "<<j<<endl;
                flag = true;
            }
        }
    }

    if(flag)
    cout<<"Element found!";
    else cout<<"Element not found!";
}