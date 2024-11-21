#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

    Node(int n){
        data=n;
        next=NULL;
    }

};

void insertatSTART(Node* &head,int data){
    Node* new_node= new Node(data);
    new_node->next=head;
    head=new_node;
}

void insertatEND(Node* &head,int data){
    Node* new_node= new Node(data);
    Node* temp=head;
    if(temp==NULL){
        temp=new_node;
    }
    else{
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=new_node;
        
    }
}

void insertatPOSITION(Node* &head,int data,int pos){
    if(head==NULL){
        insertatSTART(head,data);
        return;
    }
    
    Node* new_node= new Node(data);
    Node* temp=head;
    int count=0;
    while(count!=pos-1){
        temp=temp->next;
        count++;
    }
    new_node->next=temp->next;
    temp->next=new_node;
}

void display(Node* head){
    Node* temp=head;
    while(temp!=0){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    Node* head=NULL; 
    insertatSTART(head,1);
    display(head);
    insertatSTART(head,2);
    display(head);
    insertatEND(head,3);
    display(head);
    insertatPOSITION(head,4,1);
    display(head);

    return 0;
}