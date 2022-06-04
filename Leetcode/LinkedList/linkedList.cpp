#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next; 
};


void printList(Node *n){
    while(n!=NULL){
        cout<<n->data<<" ";
        n=n->next;
    }
}


int countList(Node *n){
    int count=0;
    while(n!=NULL){
  count++;
  n=n->next;
    }
    return count;
}

int sumList(Node *n){
    int sum=0;
    while(n!=NULL){
        sum+=n->data;
        n=n->next;
    }
    return sum;
}


int main(){
    Node *head=new Node();
    Node *second=new Node();
    Node *third =new Node();

    // head= new Node();
    // second=new Node();
    // third=new Node();

    head->data=2;
    head->next=second;

    second->data=2;
    second->next=third;

    third->data=3;
    third->next=NULL;
    // inserting at first position
    Node *newNode=new Node();
    newNode->data=5;
    newNode->next=head;


    // inserting at last position
    Node *newNode2=new Node();
    newNode2->data=9;
    newNode2->next=NULL;
    third->next=newNode2;


    printList(head);
    cout<<endl;
    printList(newNode);
    cout<<endl;
    cout<<"No. of nodes: "<< countList(head)<<endl;

    cout<<"No. of nodes: "<< countList(newNode2)<<endl;
    cout<<"Sum of nodes: "<<sumList(head);



    return 0;

}