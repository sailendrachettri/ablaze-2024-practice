/*
Today: 01 - February 2024
Author: Sailendra Chettri
Purpose: Circular Linked List using C++
Lecture: 02hr 06m 20s complected
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

        // destructor
        ~node(){
            int value = this->data;
            if(this->next != NULL){
                delete next;
                next = NULL;
            }

            cout << "Memory free for node with data " << value << endl;
        }
};

void insertNode(node* &tail, int ele, int data){
    // if list is empty
    if(tail == NULL){
        node* newNode = new node(data);
        tail = newNode;
        newNode->next = newNode;
    }
    else{
        // non-empty list - assuming element is present in list
        node* curr = tail;

        while(curr->data != ele){
            curr = curr->next;
        }

        node* temp = new node(data);
        temp->next = curr->next;
        curr->next = temp;

    }
}

void traverseCLL(node* tail){
    node* temp = tail;

    cout << "Available Data: ";

    do{
        cout << tail->data << " ";
        tail = tail->next;
    }while(tail != temp);

    cout << endl;
}

int main()
{

    node * tail = NULL;

    // insert in empty list
    insertNode(tail, 5, 3);
    traverseCLL(tail);


    insertNode(tail, 3, 4);
    traverseCLL(tail);

    insertNode(tail, 3, 109);
    traverseCLL(tail);

    insertNode(tail, 109, 101);
    traverseCLL(tail);

    

    return 0;
}