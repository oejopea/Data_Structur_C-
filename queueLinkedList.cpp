#include <iostream>
using namespace std;
class Node
{
public:
	int data;
	Node* next;
};

class queueLinkedList
{
public:
	Node* front = NULL;
	Node* back = NULL;

	bool isEmpty()
	{
		return front == NULL;
	}
	void enqueue(int element)
	{
		Node* n = new Node;
		n->data = element;
		n->next = NULL;
		if (isEmpty())
		{
			front = back = n;
		}
		else
		{
			back->next = n;
			back = n;
		}

	}

	void dequeue() {
		if (isEmpty())
		{
			cout << "The queue is Empty" << endl;
			return;
		}
		else if (front == back)
		{
			Node* p = front;
			front = back = NULL;
			delete p;
		}
		else
		{
			Node* p = front;
			front = front->next;
			delete p;
		}
	}
	int get_front()
	{
		return front->data;
	}
	int get_back() {
		return back->data;
	}

	void print() {
		if (isEmpty())
		{
			cout << "The Queue Is Empty" << endl;
			return;
		}
		Node* p = front;
		while (p != nullptr)
		{
			cout << p->data << "";
			p = p->next;
		}

	}

};
int main()
{
	queueLinkedList mylist;
	mylist.enqueue(1);
	mylist.enqueue(2);
	mylist.enqueue(3);
	mylist.enqueue(4);
	mylist.enqueue(5);
	mylist.enqueue(6);
	mylist.enqueue(7);
	mylist.enqueue(8);
	mylist.dequeue();
	mylist.print();

	
}