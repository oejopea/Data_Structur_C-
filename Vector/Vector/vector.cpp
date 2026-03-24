#include <iostream>
#include <vector>  
using namespace std;
int main() {
	vector <int> myList = { 10,20,30,40,50,60,70,80,90,100 };
	myList.push_back(1);
	myList.push_back(2);
	myList.push_back(3);
	myList.push_back(4);
	cout <<"The Cpacity is : " <<  myList.capacity() << endl;
	cout << "The Size is : " << myList.size() << endl;
	myList.push_back(5);
	myList.push_back(6);
	myList[0] = 90;
	myList.push_back(1);
	myList.push_back(2);
	myList.push_back(1);
	myList.push_back(2);
	myList.push_back(3);
	myList.shrink_to_fit();
	myList.push_back(10);
	//Part2
	myList.insert(myList.begin()+2, 50);
	vector<int>::iterator it;
	for (it = myList.begin(); it != myList.end(); it++)
	{
		cout << *it << " ";
	}cout << endl;



	





	for (int i = 0; i < myList.size(); i++)
	{
		cout << myList[i] << " ";
	}
	cout << endl;
	cout << "The Cpacity is : " << myList.capacity() << endl;
	cout << "The Size is : " << myList.size() << endl;

}
