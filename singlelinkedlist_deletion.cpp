#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
};
Node *head=NULL;
void insert(int n){
 Node *newNode=new Node;
 newNode->data=n;
 newNode->next=head;
 head=newNode;
}
//deletion of 1st node
// void deletionFirstNode(){
//     if(head==NULL){
//         cout<<"list is empty, nothimg to delete";
//     }
//     else{
//          Node *temp=head;
//          head=head->next;  //head ptr variable ko update kiya
//          delete temp;  //delete kiya 1st node
//     }


// }
//deletion of last node
void deletelastNode(){
     if(head==NULL){
        cout<<"list is empty, nothimg to delete";
        return;
    }
    if(head->next=NULL){   //if there is only one node
        delete head;
        head=NULL;
        return;

    }
    else{
        Node *temp=head;
        while(temp->next->next!=NULL){
            temp =temp->next;
           
        }
         delete temp->next;
         temp->next= NULL;

    }
}
void print(){
    cout<<"the elements of list are ";
     Node *temp=head;
     while(temp!=NULL){
        cout<<temp->data<<" ";
       temp= temp->next;
     }

}
int main(){
    int n, value;
    cout<<"the elements you want ";
    cin>>n;
    for(int i=0; i<n; i++){
        cout<<"enter value";
        cin>>value;
        insert(value);
    }
    deletelastNode();
    print();
    return 0;
    
}