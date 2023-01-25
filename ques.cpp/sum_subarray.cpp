#include<iostream>
using namespace std;


int main(){
    int n;
    int A[n];

    cout<<"Enter the size of the array : ";
    cin>>n;
    cout<<"Enter the elements of the array : ";
    for(int i =0; i<n; i++){
        cin>>A[i];
    }
    int sum=0;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            sum = sum + A[j];
        }
        return sum;
    }
    return 0;
}