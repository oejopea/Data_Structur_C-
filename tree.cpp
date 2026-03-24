#include <iostream>
using namespace std;
class Node
{
public:
	int Value;
	Node* left;
	Node* rigth;
	Node() {
		this->Value = 0;
		this->left = nullptr;
		this->rigth = nullptr;
	}
	Node(int value, Node *left, Node *rigth) {
		this->Value = value;
		this->left = left;
		this->rigth = rigth;
	}


};
class Bst
{
	Node* root;
public:
	Bst() {
		root = nullptr;
	}
	bool search(int value) {
		Node* p = root;
		while (p != nullptr)
		{
			if (p->Value == value)
			{
				return true;
			}
			if (value > p->Value)
			{
				p = p->rigth;
			}
			else
			{
				p = p->left;
			}
		}
		return false;
	}
	void add(int value)
	{
		if (search(value))
		{
			cout << "Value is exist";
			return;
		}

		Node* n = new Node(value, nullptr, nullptr);
		if (root == nullptr)
		{
			root = n;
			return;
		}
		Node* p = root;
		while (true)
		{
			if (value > p->Value)
			{
				if (p->rigth == nullptr) {
					p->rigth = n;
					break;

				}
				p = p->rigth;
			}
			else
			{
				if (p->left == nullptr)
				{
					p->left = n;
					break;
				}
				p = p->left;
			}
		}
		if (value > p->Value)
		{
			p->rigth = n;
		}
		else
		{
			p->left = n;
		}
	}

	bool isEmpty() {
		return root == nullptr;
	}
	int get_min()
	{
		Node* p = root;
		while (p->left != nullptr)
		{
			p = p->left;
		}
		return p->Value;

	}
	int get_max() 
	{
		Node* p = root;
		while (p->rigth != nullptr)
		{
			p = p->rigth;
		}
		return p->Value;
	}

};
	int main()
	{
		Bst bst;
		bst.add(10);
		bst.add(20);
		bst.add(30);
		bst.add(0);
		bst.add(50);
		bst.add(70);
		cout << bst.search(70) << endl;
		cout << bst.get_max() << endl;
		cout << bst.get_min() << endl;
		cout << bst.isEmpty() << endl;

	}
