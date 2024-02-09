/*
Today: 27 - January 2024
Author: Sailendra Chettri
Purpose: Creating a doubly linked list
Complected; Lecture 1: 01hr:13m:56s
*/
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node* prev;
        node* next;

        // constructor
        node(int data){
            this->data = data;
            this->next = NULL;
            this->prev = NULL;
        }

        ~node(){
            int value = this->data;

            if(next != NULL){
                delete next;
                next = NULL;
            }

            cout << "Memory free for node with data " << value << endl;
        }
};

void traverse(node* head){
    node* temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int lengthLL(node* head){
    node*temp = head;
    int len = 0;

    while(temp != NULL){
        len++;
        temp = temp->next;
    }

    return len;
}

void insertAtHead(node* &head, int data){
    node* temp = new node(data);

    temp->next = head;
    head->prev = temp;
    head = temp;
}

void insertAtTail(node* &tail, int data){
    node* temp = new node(data);

    tail->next = temp;
    temp->prev = tail;

    tail = temp;
}

void insertAtPosition(node* &head, node* &tail, int pos, int data){
    // first index insertion
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

    // last index insertion
    if(temp->next == NULL){
        insertAtTail(tail, data);
        return;
    }

    node* newNode = new node(data);
    newNode->next = temp->next;
    temp->next->prev = newNode;
    temp->next = newNode;
    newNode->prev = temp;
}

void deleteNode(node *&head, int pos)
{
    // deletion of start node
    if (pos == 1)
    {
        node *temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;

        return;
    }

    // deletion of middle and last node
    node *curr = head;
    node *prev = NULL;

    int cnt = 1;

    while (cnt < pos)
    {
        prev = curr;
        curr = curr->next;
        cnt++;
    }

   curr->prev = NULL;
   prev->next = curr->next;
   curr->next = NULL;
   delete curr;
}



int main()
{
    int len;
    node *node1 = new node(10);
    node* head = node1;
    node* tail = node1;

    len = lengthLL(head);
    cout << "\nLength of linked list: " << len << endl;
    cout << "Available Data: ";
    traverse(head);

    insertAtHead(head, 9);
    len = lengthLL(head);
    cout << "\nLength of linked list: " << len << endl;
    cout << "Available Data: ";
    traverse(head);

    insertAtHead(head, 5);
    len = lengthLL(head);
    cout << "\nLength of linked list: " << len << endl;
    cout << "Available Data: ";
    traverse(head);

    insertAtHead(head, 3);
    len = lengthLL(head);
    cout << "\nLength of linked list: " << len << endl;
    cout << "Available Data: ";
    traverse(head);

    // insertAtTail(tail, 2);
    // len = lengthLL(head);
    // cout << "\nLength of linked list: " << len << endl;
    // cout << "Available Data: ";
    // traverse(head);

    insertAtPosition(head, tail, 3, 100);
    len = lengthLL(head);
    cout << "\nLength of linked list: " << len << endl;
    cout << "Available Data: ";
    traverse(head);

    deleteNode(head, 1);
    len = lengthLL(head);
    cout << "\nLength of linked list: " << len << endl;
    cout << "Available Data: ";
    traverse(head);

    

    return 0;
}