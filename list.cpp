#include <iostream>
#include <list>
using namespace std;
int main() {
	list<int> l;
	l.push_back(10);
	l.push_front(20);
	l.push_front(30);
	l.pop_back();
	for (auto i = l.begin; i != l.end; i++)
	{
		cout << *i << " "; 
	}
	cout << l.size() << endl;


}