//insertion at head
// ................
// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;
//     Node* tail;
// };
// void printList(Node* head){
//     while(head !=NULL){
//         cout<<head->data<<" ";
//         head=head->next;
//     }
// }
// void insertAtHead(Node* &head,int data){
//     Node* temp=new Node();
//     temp->data=5;
//     temp->next=head;
//     head=temp;
// }
// int main()
// {
//     Node* head=new Node();
//     Node* second=new Node();
//     Node* third=new Node();
//     head->data=1;
//     head->next=second;
//     second->data=2;
//     second->next=third;
//     third->data=3;
//     third->next=NULL;
//     printList(head);
//     cout<<endl;
//     insertAtHead(head,5);
//     printList(head);
// return 0;
// }
// ............
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};
void printList(Node* &head){
    while(head !=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}
void insertAtPos(Node* &head,int data){
 Node* temp=new Node();
 temp->data=data;
 temp->next=head->next;
 head->next=temp;
}
void insertAtEnd(Node* &head,int data){
    node* temp=new Node();
    temp->data=data;
}
int main()
{
    Node* head=new Node();
    Node* second=new Node();
    Node* third=new Node();
    head->data=5;
    head->next=second;
    second->data=10;
    second->next=third;
    third->data=15;
    third->next=NULL;
    printList(head);
    cout<<endl;
    insertAtPos(second,22);
    printList(head);
    cout<<endl;


return 0;
}