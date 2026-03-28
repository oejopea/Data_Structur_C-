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
	int sizeTree = 0;
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
		sizeTree++;

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
		if (r == nullptr)
		{
			return 0;
		}
		return 1 + countNodes(r->left) + countNodes(r->rigth);
	}
	void printCountNodes() {
		cout << countNodes(root) << endl;
	}

	void remove(int val)
	{
		if (search(val) == false)
		{
			return;
		}
		Node* p = root;
		Node* prev = root;
		while (p->Value != val)
		{
			prev = p;
			if (val > p->Value)
			{
				p = p->rigth;
			}
			else
			{
				p = p->left;
			}
		}

		sizeTree--;
		if (sizeTree == 0)
		{
			delete root;
			root == nullptr;
		}

		//leaf Node
		if (p->rigth == nullptr && p->left == nullptr)
		{
			if (val > prev->Value)
			{
				prev->rigth == nullptr;
			}
			else
			{
				prev->left == nullptr;
			}
			delete p;
		}
		//left 

		else if (p->rigth == nullptr)
		{
			if (p == root)
			{
				root = p->left;
				delete p;
				return;
			}
			else if (p->Value > prev->Value)
			{
				prev->rigth = p->left;
			} 
			else
			{
				prev->left = p->left;
			}

			delete p;
		}

		//rigth
		else if (p->left == nullptr)
		{
			if (p == root)
			{
				root = p->rigth;
				delete p;
				return;
			}
			else if(p->Value < prev->Value )
			{
				prev->left = p->rigth;
			}
			else
			{
				prev->rigth = p->rigth;
			}
			delete p;
		}

		//rigth != null and left != null
		else if (p->left != nullptr && p->rigth != nullptr)
		{
			Node* p2 = p;
			Node* prev2 = p;
			p2 = p2->rigth;
			//the new root lef is null
			if (p2->left == nullptr)
			{
				p->Value = p2->Value;
				p->rigth = p2->rigth;
				delet p2;
			}
			else
			{
				while (p2->left != nullptr)
				{
					prev2 = p2;
					p2 = p2->left;

				}
				p->Value = p2->Value;
				prev2->left = p2->rigth;
				delete  p2;


			}
		}

		

	}

	void clear()
	{
		while (!isEmpty())
		{
			remove(root->Value);
		}
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

	//The Size if the tree
	cout << bst.sizeTree << endl;

}