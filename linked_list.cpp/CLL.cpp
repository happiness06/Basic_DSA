#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        this -> data = val;
        this ->next = NULL;
    }

    ~node(){
        int d = this -> data;
        if(this -> next != NULL){
            delete next;
            this -> next = NULL; 
        }
        cout<<"Memory freed from "<<d<<endl;
    }

};

void insertNode(node* &tail, int element, int pos ){
    if(tail == NULL){
        node* tmp = new node(element);
        tail = tmp;
        tmp->next = tmp;
    }
    else {
        
        node* curr = tail;
        while(curr -> data != pos) {
            curr = curr->next;
        }
        
        node* tmp = new node(element);
        tmp->next = curr->next;
        curr->next = tmp;
    }
    
}

void deletepos(node* tail, int key){
    if(tail == NULL){
        cout<<"No elements!"<<endl;
    }
    else{
        node* pred = tail;
        node* curr = pred->next;
        while(curr -> data != key){
            pred= curr;
            curr = curr ->next;
        
        }
        pred -> next = curr ->next;

        if(curr == pred){
            tail = NULL;
        }
        else if(tail == curr){
            tail = pred;
        }
        curr ->next = NULL;
        delete curr;
    }
    
}

void print(node* &tail){
     /*
    if(tail != NULL){
        node* tmp = tail;
        cout<<tail->data<<" -> ";
        while(tail != tmp){
            cout<<tail->data<<" -> ";
            tail = tail->next;
        }cout<<"NULL"<<endl;
    }
    else {
        cout<<"NULL"<<endl;
    }
    */
    if(tail != NULL){
        node* tmp = tail;
        do{
        cout<<tail->data<<" -> "; 
        tail = tail->next;
        }while(tail!=tmp);
        cout<<"NULL"<<endl;
        cout<<"tail is "<<tail->data<<endl;
    }
    else{
        cout<<"NULL"<<endl;
    }
    
    
}

int main(){
    node* tail = NULL;
    insertNode(tail, 5, 9);
    print(tail);
    insertNode(tail, 9, 5);
    print(tail);
    insertNode(tail, 11, 5);
    print(tail);
    insertNode(tail, 13, 9);
    print(tail);
    insertNode(tail, 1, 9);
    print(tail);
    insertNode(tail, 7, 5);
    print(tail);
    deletepos(tail, 9);
    print(tail);
    deletepos(tail, 1);
    print(tail);
    deletepos(tail, 13);
    print(tail);
    deletepos(tail, 7);
    print(tail);
   
    deletepos(tail, 11);
    print(tail);
    deletepos(tail, 5);
    print(tail);
    return 0;
}