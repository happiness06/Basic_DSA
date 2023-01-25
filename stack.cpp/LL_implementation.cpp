#include<iostream>
using namespace std;

class node{
    // data members 
    public:
    int data;
    node* next;

    node(int x){
        this->data = x;
        this -> next = NULL;
    }

    ~node(){
        int val = this->data;
        if(this->next != NULL){
            delete next;
            this -> next = NULL;
        }
        cout<<"Popped : "<<val<<endl;
    }
};

class stack{
    public:
    //data members
    node *head = NULL;
    //node *tail = NULL;

    //add to head func acc to LL 
    //head is the only end to access stack
    void push(int y){
        if(head == NULL){
            node* tmp = new node(y);
            head = tmp;
        }

        else {
            node* tmp = new node(y);
            tmp ->next = head;
            head = tmp;
        }
    }

    void pop(){
        if(head == NULL){
            cout<<"Stack is empty!"<<endl;
        }
        else {
            node* tmp = head;
            head = head->next;
            delete tmp;
        }
    }

    int peek(){
        if(head == NULL){
            cout<<"Stack is empty! "<<endl;
            return -1;
        }

        else return head->data;
    }

    bool isEmpty(){
        if(head == NULL){
            return 1;
        }
        else return 0;
    }

    void display(){
        if(head == NULL){
            cout<<"UNDERFLOW !!"<<endl;
        }

        else{
            node* tmp = head;
            while(tmp != NULL){
                cout<<tmp->data<<" ";
                tmp = tmp->next;
            }cout<<"NULL"<<endl;
        }
    }
};
int main(){
    stack s;

    s.push(5);
   
    cout<<s.peek();

}