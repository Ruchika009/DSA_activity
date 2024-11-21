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

void insertatSTART(Node* &head,int data){
    Node* new_node= new Node(data);
    new_node->next=head;
    head=new_node;
}

void updateatPOS(Node* &head,int data,int pos){
    Node* temp=head;
    int count=0;
    
    while(count!=pos){
        temp=temp->next;
        count++;
    }
    temp->data=data;
  

}

void display(Node* head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL"<<endl;
}


int main(){
    Node* head=NULL;
    insertatSTART(head,1);
    // display(head);
    insertatSTART(head,2);
    // display(head);
    insertatSTART(head,9);
    // display(head);
    insertatSTART(head,0);
    display(head);
    cout<<endl;
    updateatPOS(head,10,3);
    display(head);
    return 0;
}