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
   
        ~node(){
            int val = this ->data;
            if(this->next != NULL){
                delete next;
                this -> next = NULL;
            }
            cout<<"Memory is freed!!"<<endl;
        }
       
};

void insertAtHead(node* &head ,int d){
    node* tmp = new node(d);
    tmp -> next= head;
    head = tmp;
}
void insertAtTail(node* &tail, int d){
    node* tmp = new node(d);
    tail->next = tmp;
    tail = tmp;
}

void insertAtPos(int position, int d, node* &head, node* &tail){
    
    if(position == 1){
        insertAtHead(head, d);
        return;
    }
    
    node* tmp = new node(d);
    node* t=head;
    int cnt =1;
    while(cnt < position-1){
        t = t->next;
        cnt++;
    }
    tmp->next = t->next;
    t->next = tmp;
    if(tmp->next == NULL){
        tail = tmp;
    }
}

int deleteAtHead(node* &head){
    node* tmp = head->next;
    int data = head->data;
    head->next = NULL;
    delete head;
    head = tmp;
    return data;
}

int deleteAtTail(node* &head, node* &tail){
    node* tmp;
    for(tmp = head; tmp->next != tail; tmp = tmp->next);
    int data = tail->data;
    delete tail; 
    tail = tmp;
    tail->next = NULL;
    return data;
}

int deleteVal( int val, node* &head){
    int cnt = 1;
    node* pred = NULL;
    node* tmp = head;
    while(tmp->data != val){
        pred = tmp;
        tmp=tmp->next;
        cnt++;
    }
    pred->next = tmp->next;
    tmp->next = NULL;
    int data = tmp->data;
    delete tmp;
    return data;
}

int deleteAtPos(int position, node* &head){
    if(position == 1){
        node* tmp = head->next;
        int data = head->data;
        head->next = NULL;
        delete head;
        head = tmp;
        return data;
    }
    node* curr = head; node* pred = NULL;
    int cnt = 1;
    while(cnt < position){
        pred = curr;
        curr = curr->next;
        cnt++;
    }
    pred->next = curr->next;
    curr->next = NULL;
    int data = curr->data;
    delete curr;
    return data;

    
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
    insertAtTail(tail , 7);
    print(head);
    insertAtPos(3, 5, head, tail);
    print(head);
    insertAtPos(1, 2, head, tail);
    print(head);
    insertAtPos(6, 10, head, tail);
    print(head);
    cout<<"head is "<<head->data<<endl;
    cout<<"tail is "<<tail->data<<endl;
    
    print(head);
    deleteAtHead(head);
    print(head);
    deleteAtTail(head, tail);
    print(head);
    deleteAtPos(4, head);
    print(head);  
    deleteVal(9, head);
    print(head);    

    return 0;
}