#include<iostream>
using namespace std;

class stack{
    public:
    //data members 
    int size;
    int *arr;
    int top ;

    //constructor
    stack(int size){
        this -> size =size;
        arr = new int[size];
        top = -1;
    }

    //member functions
    void push(int x){
        if(size - top > 1){
            top++;
            arr[top] = x;
            
        }
        else{
            cout<<"Stack overflow !!"<<endl;
        }
    }

    void pop(){
        if(top >= 0){
           top--;
        }
        else {
            cout<<"Stack underflow!"<<endl;
        }
    }

    int peek(){
        if(top < 0){
            cout<<"Stack underflow!"<<endl;
            return -1;
        }
        else {
            int data = arr[top];
            return data;
        }
    }

    bool isEmpty(){
        if(top == -1){
            return true;
        }
        else return false;
    }
};

int main(){
        stack s(5);
        s.push(1);
        s.push(2);
        cout<<s.peek()<<endl;
        s.push(3);
        s.push(4);
        s.push(5);
        cout<<s.peek()<<endl;
        s.pop();
        cout<<s.peek()<<endl;
        s.pop();
        s.pop();
        s.pop();
        s.pop();
        cout<<s.peek()<<endl;
        cout<<"Is stack empty ? "<<s.isEmpty()<<endl;


    return 0;
}