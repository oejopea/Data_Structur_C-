#pragma once
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

class LinkedList {
public:
    Node* head = nullptr;
    Node* tail = nullptr;

    void addList(int x) {
        Node* n = new Node;
        n->data = x;
        n->next = nullptr;

        if (head == nullptr) {
            head = n;
            tail = n;
        }
        else {
            tail->next = n;  // استخدام tail مباشرة أفضل
            tail = n;
        }
    }

    void addFirst(int x) {
        Node* n = new Node;
        n->data = x;
        n->next = nullptr;
        if (head == nullptr)
        {
            head = n;
            tail = n;
        }
        else {
            n->next = head;
            head = n;
        }
    }
    bool isEmpty() {
        return head == nullptr;
    }

    void print() {
        if (head == nullptr) {
            cout << "empty" << endl;
        }
        else {
            Node* p = head;
            while (p != nullptr) {
                cout << p->data << " ";
                p = p->next;
            }
            cout << endl;
        }
    }
};
