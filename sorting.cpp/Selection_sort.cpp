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

void selection(int A[], int n){
    for(int i=0; i<n; i++){
        int min = i;
        for(int j = i+1; j<n; j++){
            if(A[j] < A[min])
            min = j;
        }
        swap (A, i, min);
    }
}

int main(){
    int n, A[n];

    cout<<"Enter the size of the array : ";
    cin>>n;
    cout<<"Enter the elements of the array : ";
    for(int i =0; i<n; i++){
        cin>>A[i];
    }

    selection(A, n);
    display(A, n);

    return 0;
}