#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

};

Node* createNode(int data){
    Node* new_node=new Node;

    new_node->data = data;
    new_node->next = NULL;
    return new_node;
    
}

void deleteatalternate(Node* &head){
    Node* curr=head;

    while(curr!=NULL && curr->next!=NULL){
        Node* temp=curr->next;
        curr->next=curr->next->next;
        free(temp);
        curr=curr->next;
    }
}

void display(Node* head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL"<<endl;
}


int main(){
    Node* head=createNode(10);
    head->next=createNode(20);
    head->next->next=createNode(30);
    head->next->next->next=createNode(40);

    display(head);

    deleteatalternate(head);
    display(head);
    return 0;
}
