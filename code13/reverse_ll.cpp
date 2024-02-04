/*
Today: 04 - Feburary 2024
Author: Sailendra Chettri
Purpose:  reverse linked list
*/
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

class node{
    public: 
        int data;
        node* next;
    
        // constructor
        node(int data){
            this->data = data;
            this->next = NULL;
        }
};

void insertAtTail(node *&tail, int data)
{
    node *newNode = new node(data);
    tail->next = newNode;
    tail = tail->next;
}

void traverse(node* head){
    node* temp = head;

    cout << "\nAvailable data: ";
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl << endl;
}

node* reverseLL(node* head){
    // empty and 1 node case
    if(head == NULL || head->next == NULL)
        return head;
    
    node* prev = NULL;
    node* curr = head;
    node* forward = NULL;

    while(curr != NULL){
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }

    return prev;
}

int main()
{

    node* node1 = new node(10);
    node* head = node1;
    node* tail = node1;

    insertAtTail(tail, 20);
    insertAtTail(tail, 30);
    insertAtTail(tail, 40);
    insertAtTail(tail, 50);
    traverse(head);

    head = reverseLL(head);
    traverse(head);

    
    

    return 0;
}