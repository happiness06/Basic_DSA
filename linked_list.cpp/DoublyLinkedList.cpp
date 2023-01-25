#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* prev;
    node* next;

    node(int val){
        this->data = val;
        this ->next = NULL;
        this ->prev = NULL;
    }
    ~node(){
        int val = this->data;
        if(next != NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"Memory freed of "<<val<<endl;
    }
};

void InsertAtHead(node* &head, node* &tail, int data){
    if (head == NULL){
        node* tmp = new node(data);
        head = tmp;
        tail = head;
    }
    else{
    node* tmp = new node(data);
    tmp->next =  head;
    head -> prev = tmp;
    head = tmp;
    }
    
}

void InsertAtTail(node* &head, node* &tail, int data){
    if (tail == NULL){
        node* tmp = new node(data);
        tail = tmp;
        head = tail;
    }
    else {
    node* tmp = new node(data);
    tail->next = tmp;
    tmp->next = NULL;
    tmp->prev = tail;
    tail = tmp;
    }
    
}

int InsertAtpos(int position, int data, node* &head, node* &tail){
    
    node* curr = head;
    int cnt = 1;
    while( cnt <  position-1){
        curr = curr->next;
        cnt++;
    }
    if(position == 1){
        InsertAtHead(head, tail, data);
    }

    else if(curr->next == NULL){
        InsertAtTail(head, tail, data);
    }
    else{
    node* tmp = new node(data);
    curr ->next ->prev = tmp;
    tmp->next = curr->next;
    curr ->next = tmp;
    tmp ->prev = curr;
    }
    

}

int deleteAtPos(int position, node* &head, node* &tail){
    if(position == 1){
        node* tmp = head;
        head = tmp ->next;
        head -> prev = NULL;
        tmp -> next = NULL;
        int data = tmp->data;
        delete tmp;
        return data;
    }
    node* curr = head; node* pred = NULL;
    int cnt = 1;
    while(cnt < position){
        pred = curr;
        curr = curr->next;
        cnt++;
    }

    if(head->next->next == NULL){
        tail = head;
    }
    curr ->prev = NULL;
    pred ->next = curr->next;
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
    node* head = NULL;
    node* tail = NULL;
    print(head);

    InsertAtHead(head, tail, 7);
    print(head);
    cout<<"head -> "<<head->data<<endl;
    cout<<"tail -> "<<tail->data<<endl;

    InsertAtTail(head, tail, 3);
    print(head);
    cout<<"head -> "<<head->data<<endl;
    cout<<"tail -> "<<tail->data<<endl;

    InsertAtpos(3, 1, head, tail);
    print(head);
    cout<<"head -> "<<head->data<<endl;
    cout<<"tail -> "<<tail->data<<endl;

    InsertAtpos(1, 9, head, tail);
    print(head);
    cout<<"head -> "<<head->data<<endl;
    cout<<"tail -> "<<tail->data<<endl;

    InsertAtpos(4, 1, head, tail);
    print(head);
    cout<<"head -> "<<head->data<<endl;
    cout<<"tail -> "<<tail->data<<endl;

    deleteAtPos(2, head, tail);
    print(head);
    cout<<"head -> "<<head->data<<endl;
    cout<<"tail -> "<<tail->data<<endl;

    deleteAtPos(1, head, tail);
    print(head);
    cout<<"head -> "<<head->data<<endl;
    cout<<"tail -> "<<tail->data<<endl;

    deleteAtPos(2, head, tail);
    print(head);
    cout<<"head -> "<<head->data<<endl;
    cout<<"tail -> "<<tail->data<<endl;

    deleteAtPos(2, head, tail);
    print(head);
    cout<<"head -> "<<head->data<<endl;
    cout<<"tail -> "<<tail->data<<endl;

    return 0;
}
