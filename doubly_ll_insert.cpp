#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node* prev;
};



int main(){
    Node* Head=NULL,*Tail=NULL;
    int val,n;
    cout<<"Enter number of elements in list:";
    cin>>n;

    for(int i=0;i<n;i++){
        cout<<"Enter value "<<i+1<<":";
        cin>>val;

        Node* new_node=new Node();
        new_node->data=val;
        new_node->next=NULL;

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

    cout<<"1. Insert at Start"<<endl;
    cout<<"2. Insert at End"<<endl;
    cout<<"3. Insert at specific position"<<endl;

    int opt,data;
    cout<<"Enter option:";
    cin>>opt;

    cout<<"Enter data:";
    cin>>data;

    Node* temp=new Node;
    Node* T=Head;
    if(opt==1){
        temp->data=data;
        temp->next=T;
        temp->prev=NULL;
        Head=temp;
    }

    else if (opt==2)
    {
        while(T->next!=NULL){
            T=T->next;
        }
        temp->data=data;
        temp->next=NULL;
        temp->prev=T;
        T->next=temp;
        Tail=temp;
    }

    else if (opt==3)
    {
        int pos,count=0;
        cout<<"Enter position:";
        cin>>pos;

        while(pos-1!=count){
            T=T->next;
            count++;
        }
        temp->data=data;
        temp->next=T->next;
        temp->prev=T;
        T->next=temp;
    }
    
    

    Node* ptr=Head;
    while(ptr!=NULL){
        cout<<ptr->data<<"<->";
        ptr=ptr->next;
    }
    cout<<"NULL"<<endl;

    return 0;
}