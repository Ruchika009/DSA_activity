#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int n){
        data= n;
        next=NULL;
    }
};


// printng linked list in reverse order
void reverseprint(Node* &head){
    if(head==NULL){
        return;
    }
    
    reverseprint(head->next);
    cout<<head->data<<" ";
  
}

Node* reverse(Node* &head){
    Node* prev=NULL;
    Node* curr=head;
    
    while(curr!=NULL){
        Node* next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    head=prev;
    return head;

}

void display(Node* head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL"<<endl;
}


int main(){
    Node* head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);

    display(head);

    // reverseprint(head);
    // display(head);
    reverse(head);
    display(head);
    return 0;
}