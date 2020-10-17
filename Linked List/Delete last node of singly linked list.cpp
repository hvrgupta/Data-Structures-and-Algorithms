#include<bits/stdc++.h>
using namespace std;

struct Node{
int data;
Node *next;
    Node(int x){
    data = x;
    next = NULL;
    }
};

Node* deleteTail(Node *head){
    if(head == NULL)
        return NULL;

    Node *curr = head;

    while(curr->next->next == NULL){
         curr = curr->next;
    }
    curr->next = NULL;
    delete curr->next->next;
    return head;
}

void printList(Node *node){
    while(node != NULL){
        cout<<node->data<<endl;
        node = node->next;
    }
}

int main(){
Node *head = new Node(10);
head->next = new Node(20);
head->next->next = new Node(30);

head = deleteTail(head);

printList(head);
}

