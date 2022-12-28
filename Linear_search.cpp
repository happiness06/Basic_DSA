#include<iostream>
using namespace std;

void display(int A[], int n){
    cout<<"The elements of array are ";
    for(int i=0; i<n ; i++){
        cout<<A[i]<<" ";
    }
}

int linear_search(int A[], int n, int key){
    for(int j=0; j<n; j++){
        if(A[j] == key)
        return j;
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
    cout<<linear_search(A, n , key);

    return 0;
}
