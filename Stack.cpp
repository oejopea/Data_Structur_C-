#include <iostream>
using namespace std;
class Stack {
	int top;
	int item[5];
public:
	Stack():top(-1){}

	bool isFull() {
		return top == 4;
	}

	bool isEmpty() {
		return top == -1;
	}

	void push(int element) {
		if (isFull()) {
			cout << "The Arr Is Full" << endl;
			return;
		}
		top++;
		item[top] = element;
	}
	void pop() {
		if (isEmpty()) {
			cout << "array is empty" << endl;
			return;

		}
		top--;


	}

	int Top() {
		if (isEmpty())
		{
			cout << "The Stack is Empty" << endl;
			return -1;
		}
		return item[top];

	}

	void print()
	{
		for (int i = 0; i <= top; i++)
		{
			cout << item[i] << "";
		}
	}


};

int main()
{
	Stack st;
	st.push(1);
	st.push(2);
	st.push(3);
	st.push(4);
	st.push(5);
	st.pop();
	st.push(6);
	cout << st.Top() << endl;
	st.print();
}