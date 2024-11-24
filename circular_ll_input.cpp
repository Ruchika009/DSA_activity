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