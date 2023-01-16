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

void insertion(int A[], int n){
    for(int i=1; i<n; i++){
        int current = A[i];
        int j = i-1;
        while( A[j]>current && j>=0){
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = current;
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

    insertion(A, n);
    display(A, n);

    return 0;
}