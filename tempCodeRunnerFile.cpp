#include<iostream>
using namespace std;

int main(){
    int n;
    int a[n];

    cout<<"Enter the size of the array : ";
    cin>>n;
    cout<<"Enter the elements of the array : ";
    for(int i =0; i<n; i++){
        cin>>a[i];
    }

    for(int i=0; i<n; i++){
            for(int j = i+1; j<n; j++){
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
        for(int i =0; i<n; i++){
            a[i] = a[i]*i;
        }
        int sum =0;
        for(int j=0; j<n;j++){
            sum = sum + a[j];
        }
        return sum;
    
}