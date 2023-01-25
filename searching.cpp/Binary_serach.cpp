#include<iostream>
using namespace std;

void display(int A[], int n){
    cout<<"The elements of array are ";
    for(int i=0; i<n ; i++){
        cout<<A[i]<<" ";
    }
}

int binary_search(int A[], int n, int key){
    int start =0;
    int end = n-1;
    while (start<end){
        int mid = (start+end)/2;
        if(A[mid] == key)
        return mid;
        else if(key < A[mid])
        end = mid;
        else 
        start = mid + 1;
    }

    return -1;
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

    int key;
    cout<<"Enter the key element : ";
    cin>>key;
    cout<<binary_search(A, n , key);

    return 0;
}