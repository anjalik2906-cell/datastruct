#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node *prev;

};
Node *head=NULL;
void insert(int n){
     Node *newNode =new Node;
     newNode->data=n;
     newNode->next=head;
     newNode->prev=NULL;
     if(head!=NULL)
     {
        head->prev=newNode;
        
     }
     head=newNode;
}
void print(){    //traversing
    cout<<"elements of doble linked list: ";
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp =temp ->next;
    }
    
}
   

int main(){
    insert(1);
    insert(7);
    insert(56);
    insert(21);
    insert(10);
    print();
    return 0;
}