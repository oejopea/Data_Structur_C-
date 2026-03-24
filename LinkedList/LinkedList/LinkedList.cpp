#include "Linked_List.cpp"
#include <iostream>
#include <string>
using namespace std;
int main() {

	Linked_List list;
	list.addFirst(10);
	list.addList(15);
	list.print();
	
	//LinkedList list;
	//list.addList(1);
	//list.addList(2);
	//list.addList(3);
	//list.addList(4);
	//list.addList(5);
	//list.addFirst(100);
	//cout<< "Is Empty : " << list.isEmpty() << endl;
	//list.print();

}
