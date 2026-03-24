#include <iostream>

using namespace std;
//double linked list
class Node {
public:
    int data;
    Node* next;
    Node* prev;

};
class DLL {
public:
    Node* head = nullptr;
    Node* tail = nullptr;


    void addToLast(int x) {
        Node* n = new Node;
        n->data = x;
        n->next = nullptr;
        n->prev = nullptr;
        if (head == nullptr) {
            head = n;
            tail = n;

        }
        else {
            tail->next = n;
            n->prev = tail;
            tail = n;

        }
    }
    void print() {
        Node* p = head;
        while (p != nullptr) {
            cout << p->data << "  ";
            p = p->next;
        }

        cout << endl;
    }

    void printRev() {
        Node* p = tail;
        while (p != nullptr) {
            cout << p->data << "  ";
            p = p->prev;
        }
        cout << endl;
    }

    void addFirst(int x) {
        Node* n = new Node;
        n->data = x;
        n->next = nullptr;
        n->prev = nullptr;

        if (head == nullptr) {
            head = n;
            tail = n;

        }
        else {
            n->next = head;
            head->prev = n;
            head = n;
        }
    }

    void deleteElemet(int x) {
        if (head->data == x) {
            Node* p = head;
            head = head->next;
            head->prev = nullptr;
            delete p;
            return;

        }
        else if (tail->data == x) {
            Node* p = tail;
            tail = tail->prev;
            tail->next = nullptr;
            delete p;
            return;
        }
        else {
            Node* p = head;
            while (p != nullptr) {
                if (p->data == x) {
                    p->prev->next = p->next;
                    p->next->prev = p->prev;
                    delete p;
                    break;
                }
                else {
                    p = p->next;
                }

            }

        }
    }





};
