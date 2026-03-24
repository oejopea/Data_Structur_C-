//#include <iostream>
//using namespace std;
//class queueArrayList
//{
//private:
//	int arr[5];
//	int front;
//	int back;
//public:
//	queueArrayList() {
//		front = -1;
//		back = -1;
//	}
//	bool isEmpty() {
//		return (front == -1 || front > back);
//	}
//	bool isfull() {
//		return(back == -4);
//	}
//
//	void enqueue(int element) {
//		if (isfull()) {
//			cout << "The Array Is Full" << endl;
//			return;
//		}
//		if (isEmpty())
//		{
//			front = 0;
//		}
//		back++;
//		arr[back] = element;
//		cout << "inserted" << element << endl;
//		
//	}
//
//	void dequeue() {
//		if (isEmpty() && front == -1)
//		{
//			cout << "The Queue Is Empty" << endl;
//			return;
//		}
//		cout << "Removed" << arr[front] << endl;
//		front++;
//		if (front > back)
//		{
//			front = back = -1;
//		}
//
//	}
//
//	void display()
//	{
//		if (isEmpty()) {
//			cout << "The Queue Is Empty" << endl;
//			return;
//		}
//		cout << "Array list whith Queue : " << endl;
//		for (int i = front; i <= back; i++)
//		{
//			cout << arr[i] << " ";
//		}
//		cout << endl;
//	}
//
//
//};
//
//int main() {
//	queueArrayList mylistQueue;
//	mylistQueue.enqueue(5);
//	mylistQueue.enqueue(2);
//	mylistQueue.enqueue(3);
//	mylistQueue.enqueue(4);
//	mylistQueue.enqueue(6);
//	mylistQueue.display();
//
//}