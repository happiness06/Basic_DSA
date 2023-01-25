#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> s;

    s.push(6);
    s.push(7);
    cout<<"Topmost element in stack is " << s.top()<<endl;
    s.push(8);
    s.push(9);
    cout<<"Topmost element in stack is " << s.top()<<endl;
    s.pop();
    cout<<"Topmost element in stack is " << s.top()<<endl;
    if(s.empty()){
        cout<<"Stack is empty !"<<endl;
    }
    else  cout<<"Stack is not empty !"<<endl;

    cout<<"Size of stack is "<<s.size()<<endl;
    return 0;

}
