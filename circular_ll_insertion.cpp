#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

int main()
{
    Node *Head=NULL,*Tail=NULL;
    int val,n;
    cout<<"Enter number of elements in list:";
    cin>>n;

    for(int i=0;i<n;i++){
        cout<<"Enter element "<<i+1<<":";
        cin>>val;

        Node* new_node=new Node();
        new_node->data=val;
        new_node->next=Head;


        if(Head==NULL){
            // new_node->next=Head;
            Head=new_node;
            Tail=new_node;
        }

        else{
            Tail->next=new_node;
            Tail=new_node;
        }
    }

    cout<<"1. Insert at Head"<<endl;
    cout<<"2. Insert at Tail"<<endl;
    cout<<"3. Insert at specific position"<<endl;

    int data,pos,opt;
    cout<<"Enter option:";
    cin>>opt;

    cout<<"Enter data:";
    cin>>data;

    Node* trav=Head;
    Node* temp1=new Node;
    if(opt==1){
        temp1->data=data;
        temp1->next=Head;
        while(trav->next!=Head){
            trav=trav->next;
        }
        trav->next=temp1;
        Head=temp1;
    }

    else if(opt==2){
        temp1->data=data;
        while(trav->next!=Head){
            trav=trav->next;
        }
        temp1->next=Head;
        trav->next=temp1;
    }

    else if(opt==3){
        cout<<"Enter position before to insert a data:";
        cin>>pos;
        int count=0;

        while(pos-2!=count){
            trav=trav->next;
            count++;
        }
        temp1->data=data;
        temp1->next=trav->next;
        trav->next=temp1;
    }

    Node* temp=Head;
    if(temp!=NULL){
        do{
            cout<<temp->data<<"->";
            temp=temp->next;
            
        }
        while(temp!=Head);
    
        cout<<Head->data<<endl;
            
        
    }


    
    return 0;
}