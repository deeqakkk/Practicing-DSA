#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
};

void push(Node **head, int data){
    Node *newNode=new Node();
    newNode->data=data;
    newNode->next=*head;
    *head=newNode;
}

void printList(Node *node){
    while(node!=NULL)
    {
    cout<<node->data<<" ";
    node=node->next;
    }
}


void deleteNode(Node **head, int key){
    Node *temp=*head;
    Node *prev=NULL;

  if(temp!=NULL && temp->data==key){
      *head=temp->next;
      delete(temp);
      return;
  }
  else {
      while(temp!=NULL && temp->data!=key)
        {
            prev=temp;
            temp=temp->next;
        }

        if(temp==NULL)
        return;
        prev->next=temp->next;
        delete temp;
  }

}
int main(){

    Node *head=NULL;
    push(&head,1);
    push(&head,2);
    push(&head,3);
    push(&head,4);
    push(&head,5);

    // cout<<"Original Linked List: ";
    puts("Created linked list: ");
    printList(head);
     deleteNode(&head, 1);
    puts("\nLinked List after Deletion of 1: ");
     
    printList(head);

}