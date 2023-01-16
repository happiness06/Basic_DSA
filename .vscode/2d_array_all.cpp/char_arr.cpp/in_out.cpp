#include<iostream>
using namespace std;

bool palindrome(char name[], int n){
    int s = 0; int e = n-1;
    while(s<=e){
        if(name[s]!= name[e])
        return 0;
        else {
            s++; e--;
        }
        return 1;
    }
}

void reverse(char name[], int n){
    int s = 0, e = n-1;
    while(s<e)
    swap(name[s++], name[e--]);
}

int get_len(char name[]){
    int count = 0;
    for(int i=0; name[i] != '\0'; i++){
        count++;
    }
    return count;
}

int main(){
    char name[20];

    cout<<"Enter the name : ";
    cin>>name;

    cout<<"My name is "<<name<<endl;
    cout<<get_len(name)<<endl;

    int len = get_len(name);

    reverse(name, len);
    cout<<"Reversed name is "<<name<<endl;

    cout<<"Is it palindromic ?"<<endl;
    cout<<palindrome(name, len)<<endl;
    return 0;
}