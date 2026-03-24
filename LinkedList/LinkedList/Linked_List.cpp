#include <iostream>
using namespace std;
class Node {
public:
	int data;
	Node* next;

};

class Linked_List {
public:
	Node* head = nullptr;
	Node* tail = nullptr;

	void addList(int x) {
		Node* n = new Node;
		n->data = x;
		n->next = nullptr;


		if (head == nullptr)
		{
			head = n;
			tail = n;
		}
		else
		{
			tail->next = n;
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
		else
		{
			n->next = head;
			head = n;
		}

	}

	bool isEmpty() {
		return head == nullptr;
	}

	void print() {
		if (head == nullptr)
		{
			cout << "Empty" << endl;
		}
		else
		{
			Node* n = head;
			while ( n != nullptr)
			{
				cout << n->data << " ";
				n = n->next;
			}
			cout << endl;
		}
	}





};
