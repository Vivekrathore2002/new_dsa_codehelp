#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};
void printList(Node* head){
    while(head !=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}
void insertAtHead(Node* &head,int data){
    Node* temp=new Node();
    temp->data=5;
    temp->next=head;
    head=temp;
}
void insertAtPos(Node* &head,int data,int pos){
 int cnt=1;
 while(cnt<pos-1){
    head=head->next;
    cnt++;
 }
 Node* temp=new Node();
 temp->data=data;
 temp->next=head->next;
 head->next=temp;

}
void insertAtEnd(Node* &head,int data){
    Node* temp=new Node();
    temp->data=data;
    head->next=temp->next;
    temp->next=NULL;
    head->next=temp;
}

int main()
{
    Node* head=new Node();
    Node* second=new Node();
    Node* third=new Node();
    head->data=1;
    head->next=second;
    second->data=2;
    second->next=third;
    third->data=3;
    third->next=NULL;
    printList(head);
    cout<<endl;
    insertAtHead(head,5);
    printList(head);
    cout<<endl;
    insertAtPos(head,22,1 );
    printList(head);
    cout<<endl;
    insertAtEnd(third,10);
    printList(head);
return 0;
}

