#include<iostream>
using namespace std;

bool search(int target, int A[][4], int row, int col){
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            if(A[i][j] == target)
            return 1;
        }   
    }
    return 0;
}

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

    /*
    cout<<"The column-wise matrix is following : "<<endl;
    for(int i = 0; i<4; i++){
        for(int j = 0; j<3; j++){
            cout<<A[j][i]<<" ";
        }
        cout<<endl;
    }
   //row wise linear search
   */
   int target;
   cout<<"Enter the element to be found : ";
    cin>>target;
    /*
    for(int i = 0; i<3; i++){
        for(int j = 0; j<4; j++){
            if(A[i][j] == target)
            cout<<"Element found at "<<i<<" "<<j<<endl;
        }   
    }
    */
   if(search(target, A, 3, 4))
   cout<<"Element found !"<<endl;
   else
   cout<<"Element isn't found!"<<endl;

    return 0;
}