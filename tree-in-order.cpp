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
	Node(int value, Node* left, Node* rigth) {
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
		//if (value > p->Value)
		//{
		//	p->rigth = n;
		//}
		//else
		//{
		//	p->left = n;
		//}
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

	int getroot() {
		if (root == nullptr) {
			cout << "Tree is empty\n";
			return -1;
		}
		return root->Value;
	}
	

	//left root right
	void inorder(Node* r)
	{
		if (r == nullptr)
		{
			return;
		}
		inorder(r->left);
		cout << r->Value << " ";
		inorder(r->rigth);

	}
	void printInOrder() {
		inorder(root);
	}

	//root left  right
	void preOrder(Node* r)
	{
		if (r == nullptr)
		{
			return;
		}
		cout << r->Value << " ";
		preOrder(r->left);
		preOrder(r->rigth);
	}

	void printPreOrder()
	{
		preOrder(root);
	}

	//left  right  root

	void postOrder(Node* r)
	{
		if (r == nullptr)
		{
			return;
		}
		postOrder(r->left);
		postOrder(r->rigth);
		cout << r->Value << " ";


	}
	void printPostOrder() {
		postOrder(root);
	}

	int countNodes(Node* r)
	{
		if ( r == nullptr)
		{
			return 0;
		}
		return 1 + countNodes(r->left) + countNodes(r->rigth);
	}
	void printCountNodes() {
		cout << countNodes(root) << endl;
	}

};
int main()
{
	Bst bst;
	bst.add(60);
	bst.add(20);
	bst.add(30);
	bst.add(0);
	bst.add(50);
	bst.add(70);
	bst.getroot();
	cout << bst.search(70) << endl;
	cout << bst.get_max() << endl;
	cout << bst.get_min() << endl;
	cout << bst.isEmpty() << endl;

	//This is in order 
	cout << "This is in order " << endl;
	bst.printInOrder();

	//This is in Post order 
	cout << "This is Post order " << endl;
	bst.printPostOrder();

	//This is in pre order 
	cout << "This is pre order " << endl;
	bst.printPreOrder();

	//This is in Count Nodes 
	cout << "This is Count Nodes " << endl;
	bst.printCountNodes();


}