#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
};
Node *head=NULL;
//for insertion func is created
void insert(int n){
    Node *newNode= new Node;  //new=dynamic memory 
    newNode -> data =n;
    newNode -> next = head;
    head = newNode;
}
//insertion at the end
void insert_at_pos(int pos,int n){
    Node *newNode= new Node;
    newNode->data=n;
   if(pos==1){
    newNode->next=head;
    head=newNode;
   }
   
    Node *temp=head;
    for(int i=0;i<pos-1&& temp!=NULL; i++){
        temp=temp->next;
    }

    if(temp==NULL){
        cout<<"inalid position";
    }
    newNode->next=temp->next;
    temp->next=newNode;

   
}
//for printing the linked list a func is created
//traversing is done
void print(){
    cout<<"the elements of linked list are";
    Node *temp= head; //for 1st node
    while(temp!=NULL){
        cout<<temp->data<<" "; //for accessing the data value
        temp= temp ->next;  //for transversing to next 
    }
}
int main(){
    insert(1);  //last node
    insert(3);  
    insert(6);
    insert(11);
    insert(12);
    insert(4);//this our 1st node
    insert_at_pos(15,5);
    print();
    return 0;


}