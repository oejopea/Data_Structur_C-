#include <iostream>
using namespace std;
class Node
{
public:
	int data;
	Node* next;
	Node() {
		data = 0;
		next = nullptr;
	}
};

class StackLinkedList
{
public:
	Node* top; //head
	int size;
	StackLinkedList() {
		top = nullptr;
		size = 0;
	}
	bool isEmpty() 
	{
		return top == nullptr;
	}
	int getSize() {
		return size;
	}

	void push(int element) 
	{
		Node* n = new Node();
		n->data = element;
		if (isEmpty())
		{
			top = n;
			size++;
			return;
		}
		n->next = top;
		top = n;
		size++;
	}

	int pop() {
		if (isEmpty())
		{
			cout << "The Array Is Empty" << endl;
			return 0;
		}
		int poppedElement = top->data;
		Node* p = top;
		top = top->next;
		delete p;
		size--;
		return poppedElement;

	}
	int Top() {
		if (isEmpty())
		{
			cout << " the Array is Empty " << endl;
			return 0;
		}
		return top->data;
	}
	~StackLinkedList()
	{
		while (!isEmpty())
		{
			pop();
		}
	}
	void print() 
	{
		Node* temp = top;
		while (temp != nullptr)
		{
			cout << temp->data << " ";
			temp = temp->next;
		}
		cout << endl;
	}

};
int main() 
{
	StackLinkedList mylist;
	mylist.push(1);
	mylist.push(2);
	mylist.push(3);
	mylist.push(4);
	mylist.push(5);
	mylist.push(6);
	mylist.push(7);
	mylist.pop();
	mylist.print();
}