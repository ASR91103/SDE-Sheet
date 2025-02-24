#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }
    
    Node(int data1){
        data = data1;
        next = nullptr;
    }
    
};

Node * ReverseLL(Node* head){
    Node* temp = head;
    Node* prev = NULL;
    while(temp!=NULL){
        Node* front = temp->next;
        temp->next = prev;
        prev = temp;
        temp = front;
    }
    return prev;
}



void printLL(Node* head)
{
    Node*  temp =  head;
    while(temp!= NULL)
    {
        cout<<temp->data<<" ";
        temp= temp->next;
    }
}


int main(){
    Node *temp= new Node(1);
    temp->next=new Node(2);
    temp->next->next = new Node(3);
    printLL(temp);
    Node* newhead = ReverseLL(temp);
    printLL(newhead);
    
    
    
    return 0;
}
