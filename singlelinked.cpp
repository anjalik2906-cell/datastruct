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
// void insert_at_end(int n){
//     Node *newNode= new Node;
//     newNode -> data =n;
//     newNode -> next = NULL; 
//     if(head==NULL){
//         head= newNode;
//     }
//     else{
//         Node *temp= head; //for 1st node
//     while(temp ->next!=NULL){
//         temp= temp ->next;  //for transversing to next 
//     }
//     temp ->next= newNode;

//     }
// }
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
// int main(){
//     insert(1);  //last node
//     insert(3);  
//     insert(6);
//     insert(11);
//     insert(12);
//     insert(4);//this our 1st node
//     insert_at_end(51);
//     print();
//     return 0;


// }
int main(){
    int n, value;

    cout << "How many elements you want to insert: ";
    cin >> n;

    for(int i = 0; i < n; i++){
        cout << "Enter value: ";
        cin >> value;
        insert(value);
    }

    print();

    return 0;
}
