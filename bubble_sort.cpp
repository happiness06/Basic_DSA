#include<iostream>
using namespace std;

void display(int A[], int n){
    cout<<"The elements of array are ";
    for(int i=0; i<n ; i++){
        cout<<A[i]<<" ";
    }
}

void swap(int A[], int a, int b){
    int tmp = A[a];
    A[a]= A[b];
    A[b] = tmp;
}

void bubble(int A[], int n){
    for(int i=0; i<n-1; i++){
        for(int j = n-1; j>=i; j--){
            if(A[j] < A[j-1])
            swap (A, j, j-1);
        }
    }
}

int main(){
    int n;
    int A[n];

    cout<<"Enter the size of the array : ";
    cin>>n;
    cout<<"Enter the elements of the array : ";
    for(int i =0; i<n; i++){
        cin>>A[i];
    }

    bubble(A, n);
    display(A, n);

    return 0;
}