#include<iostream>
using namespace std;

int fibonacci(int n){
    if(n == 0 )
    return 0;
    else if(n == 1)
    return 1;
    else {
        int ans = fibonacci(n-1) + fibonacci(n-2);
        return ans;
    }
}
int main(){
    int num;
    cout<<"Enter your num : ";
    cin>>num;

    cout<<fibonacci(num);
    return 0;
}
