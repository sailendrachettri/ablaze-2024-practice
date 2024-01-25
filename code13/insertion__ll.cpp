/*
Today: 23 - January 2024
Author: Sailendra Chettri
Purpose: Insert at head in singly linked list. Code using C++
complected Lec 44: 41m:08s
*/
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node *next;
    
    // constructor
    node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void traverseLL(node* &head){
    node *temp = head;

    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;

    }cout << endl;
}

void insertAtHead(node* &head, int data){
    node* newNode = new node(data);
    newNode->next = head;
    head = newNode;
}

void insertAtTail(node* &tail, int data){
    node* newNode = new node(data);
    tail->next = newNode;
    tail = tail->next;
}

void insertAtPos(node* &head, node* &tail, int pos, int data){
    // case1: insert at first positon
    if(pos == 1){
        insertAtHead(head, data);
        return;
    }

    node* temp = head;
    int cnt = 1;

    while(cnt < pos-1){
        temp = temp->next;
        cnt++;
    }

    // case2: insert at last position
    if(temp->next == NULL){
        insertAtTail(tail, data);
        return;
    }

    // case3: insert in middle
    node* newNode = new node(data);
    newNode->next = temp->next;
    temp->next = newNode;
}

int main()
{

    node *node1 = new node(10);
    node *head = node1;
    node *tail = node1;

    // insertAtHead(head, 20);
    // insertAtHead(head, 3);
    // traverseLL(head);

    insertAtTail(tail, 20);
    insertAtTail(tail, 30);
    insertAtTail(tail, 40);
    insertAtTail(tail, 50);
    insertAtTail(tail, 60);
    traverseLL(head);

    int pos = 7;
    int data = 70;
    insertAtPos(head, tail, pos, data);
    traverseLL(head);

    cout << "head: "<<head->data<<endl;
    cout << "tail: "<<tail->data<<endl;


    

    return 0;
}