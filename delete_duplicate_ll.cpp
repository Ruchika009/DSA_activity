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

void display(Node* head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL"<<endl;
}

void deleteataDuplicate(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        while(temp->next!=NULL && temp->data==temp->next->data){
            Node* curr=temp->next;
            temp->next=temp->next->next;
            free(curr);
            
            
        }
        temp=temp->next;
        
        
    }
}

int main(){
    Node* head=createNode(10);
    head->next=createNode(10);
    head->next->next=createNode(10);
    head->next->next->next=createNode(20);
    head->next->next->next->next=createNode(20);
    head->next->next->next->next->next=createNode(30);
    head->next->next->next->next->next->next=createNode(30);

    display(head);


    deleteataDuplicate(head);
    display(head);


    return 0;
}