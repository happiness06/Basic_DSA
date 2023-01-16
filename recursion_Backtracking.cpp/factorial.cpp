#include<iostream>
using namespace std;

int fact(int num){
    if(num == 1)
    return 1;
    else return num *fact(num-1);
}

int main(){
    int n ;
    cout<<"Enter the num : ";
    cin>>n;
    cout<<"Factorial is "<<fact(n);
    return 0;
}