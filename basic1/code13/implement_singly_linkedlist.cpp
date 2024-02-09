/*
Today: 21 - January 2024
Author: Sailendra Chettri
Purpose: Implement singly linkedlist using C++
course: Love Babbar - 25m:59s
*/
#include<iostream>
//#include <bits/stdc++.h>
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

void insertAtHead(node* &head, int data){

    // create new node
    node* temp = new node(data);
    temp->next = head;
    head = temp;
}

void traverseLL(node* &head){
    node* temp = head;

    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;

    }cout << endl;
}

int main()
{
    // creating a new node;
    node *node1 =  new node(10);

    node *head = node1;
    traverseLL(head);

    insertAtHead(head, 12);
    insertAtHead(head, 14);
    insertAtHead(head, 14);
    traverseLL(head);

    return 0;
}