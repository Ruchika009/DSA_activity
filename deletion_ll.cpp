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

void deleteatStart(Node* &head){
    Node* temp=head;
    head=head->next;
    free(temp);

}

void deleteatEND(Node* &head){
    Node* second_last=head;
    while(second_last->next->next!=NULL){
        second_last=second_last->next;
    }
    Node* temp=second_last->next;
    second_last->next=NULL;
    free(temp);

    
}

void deleteatPOS(Node* &head,int pos){
    Node* temp=head;
    int count=0;
    while(count!=(pos-1)){
        temp=temp->next;
        count++;
    }
    Node* curr=temp->next;
    temp->next=temp->next->next;
    free(curr);
}


int main(){
    Node* head=createNode(10);
    head->next=createNode(20);
    head->next->next=createNode(30);
    head->next->next->next=createNode(40);

    display(head);
    deleteatStart(head);
    display(head);
    // deleteatEND(head);
    // display(head);
    deleteatPOS(head,1);
    display(head);
    return 0;
}