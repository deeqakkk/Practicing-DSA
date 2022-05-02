#include<bits/stdc++.h>
using namespace std;

// defining linked list node
class Node{
    public:
    int data;
    Node *next;
};


// function to insert a new node on the front position
void push(Node **head, int data){
 Node *newNode=new Node();
 newNode->data=data;
 newNode->next=*head;
 *head=newNode;
};

// Insert a new node after the given node
void insertAfter(Node *pNode, int data){
    if(pNode==NULL){
        cout<<"The given node cannot be NULL"<<endl;
        return;
    }
    Node *newNode=new Node();
    newNode->data=data;
    newNode->next=pNode->next;
}

// append a new node at the end of the list
void append(Node **head, int data){
    Node *newNode=new Node();
    Node *last = *head;
    newNode->data=data;
    newNode->next=NULL;

    if(*head==NULL){
        *head=newNode;
        return;
    }
    while(last->next!=NULL){
        last=last->next;
    }
    last->next=newNode;
}


// function to print the linkedlist
void printList(Node *node){
    while(node!=NULL)
    {
        cout<<node->data<<" ";
        node=node->next;
    }
}
int main(){

  Node *head=NULL;
  append(&head,6);
  push(&head,5);
  push(&head,4);
  append(&head,5);

  insertAfter(head->next,7);

  cout<<"Linked list is: ";
  printList(head);
  return 0;
}