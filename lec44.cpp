//Lecture 44: Linked List & its types - Singly, Doubly, Circular etc.
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* tail;
    //here comes constructor for implementation of a linked list
    Node(int data){
        this->data=data;
        this->next=NULL;
        this->tail=NULL;
    }
};
void insertAtHead(Node* &head,int d){
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}
void insertAtTail(Node* &tail,int d){
    Node* temp=new Node(d);
    // temp->tail=head;
    // head->next=temp;
    // head=temp;
    tail->next=temp;
    tail=temp;
}
void insertAtPosition(Node* &head,int position,int d){
    Node*temp=head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    Node* nodeToInsert =new Node(d);
    nodeToInsert->next=temp->next;
    temp->next=nodeToInsert;
}
//print nodes
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    //created new node
    Node* node1=new Node(10);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;
    Node* head=node1;
    Node* tail=node1;
    print(head);
    // insertAtHead(head,12);
    // print(head);
    // insertAtHead(head,15);
    // print(head);
    insertAtTail(tail,12);
    print(head);
    insertAtTail(tail,15);
    print(head);
    insertAtPosition(head,3,22);
    print(head);
    }