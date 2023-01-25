#include<iostream>
using namespace std;

void is_subseq(int A[], int B[], int a, int b)
{
    int j=0;
    for(int i=0; i<a; i++){
        if (B[j] == A[i] && j<b){
            cout<<"TRUE";
            j++;
        }
    }
    cout<<"False";
}

int main(){
    int n, m;
    int A[n], B[m];

    cout<<"Enter the size of the array : ";
    cin>>n;
    cout<<"Enter the elements of the array : ";
    for(int i =0; i<n; i++){
        cin>>A[i];
    }
    cout<<"Enter the size of the array2 : ";
    cin>>m;
    cout<<"Enter the elements of the array : ";
    for(int i =0; i<m; i++){
        cin>>A[i];
    }

    is_subseq(A, B, n , m);

    return 0;
}