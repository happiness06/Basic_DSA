#include<iostream>
using namespace std;

int power(int num){
    if(num == 0)
    return 1;
    else return 2 *power(num-1);
}

int main(){
    int n ;
    cout<<"Enter the num : ";
    cin>>n;
    cout<<"2^"<<n<<" is "<<power(n);
    return 0;
}