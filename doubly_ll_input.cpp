#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node* prev;
};



int main(){
    int val,n;
    Node* Head=NULL,*Tail=NULL;
    

    cout<<"Enter number of values in list:";
    cin>>n;

    for(int i=0;i<n;i++){
        cout<<"Enter value "<<i+1<<":";
        cin>>val;

        Node* new_node=new Node();
        new_node->data=val;
        new_node->next=NULL;
        new_node->prev=NULL;

        if(Head==NULL){
            new_node->next=NULL;
            new_node->prev=NULL;
            Head=new_node;
            Tail=new_node;
        }
        else{
            new_node->next=NULL;
            new_node->prev=Tail;
            Tail->next=new_node;
            Tail=new_node;
        }

    }
 
    Node* temp=Head;
    while(temp!=NULL){
        cout<<temp->data<<"<->";
        temp=temp->next;

    }
    cout<<"NULL"<<endl;
    return 0;
}