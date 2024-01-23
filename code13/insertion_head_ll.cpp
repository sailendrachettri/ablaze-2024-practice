/*
Today: 23 - January 2024
Author: Sailendra Chettri
Purpose: Insert at head in singly linked list. Code using C++
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

int main()
{

    node *node1 = new node(10);
    node *head = node1;

    insertAtHead(head, 20);
    insertAtHead(head, 3);
    insertAtHead(head, 13);
    insertAtHead(head, 4);

    traverseLL(head);

    

    return 0;
}