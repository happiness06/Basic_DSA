#include<iostream>
using namespace std;

class node{
    public: 
        int data;
        node* next;
        node(int x){
            this -> data = x;
            this -> next = NULL;
        }
};

void insertAtHead(node* &head ,int d){
    node* tmp = new node(d);
    tmp -> next= head;
    head = tmp;
}


void insertAtPos(int position, int d, node* &head){
    
    if(position == 1){
        insertAtHead(head, d);
    }
    node* tmp = new node(d);
    node* t=head;
    int cnt =1;
    while(cnt!=position-1){
        t = t->next;
        cnt++;
    }
    tmp->next = t->next;
    t->next = tmp;
}

void print(node* &head){
    node* tmp= head;
    while(tmp != NULL){
        cout<<tmp -> data<<" -> ";
        tmp = tmp->next;
    }cout<<"NULL"<<endl;
}


int main(){
    node* node1 = new node(9);
    node* head = node1;
    node* tail = node1;
    insertAtHead(head , 8);
    
    print(head);
    insertAtPos(3, 5, head);
    insertAtPos(1, 2, head);
    print(head);
    return 0;
}