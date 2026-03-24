#pragma once
#pragma once
#include <iostream>  // ✅ ضروري لتعريف cout
using namespace std; // ✅ ضروري أو استخدم std::cout

class ArrayList {
	int* arr;
	int size;
	int capacity;

public:
	ArrayList() {
		size = 0;
		int capacity = 10;
		arr = new int[capacity];


	}
	void addToList(int x) {
		if (size == capacity)
		{
			expand();
		}
		arr[size] = x;
		size++;
	}
	void expand() {
		capacity *= 2;
		int* arr2 = new int[capacity];
		for ( int i = 0; i < size; i++)
		{
			arr2[i] = arr[i];
		}
	}
	void deletToLast() {
		if (size == 0)
		{
			cout << "Array is num" << endl;
		}
		size--;
	}

	int getSize() {
		return size;
	}
	int getCapacity() {
		return capacity;
	}

	void addToFirst(int x) {
		if (size == capacity)
		{
			expand();
		}
		for (int i = size - 1; i  >= 0; i--)
		{
			arr[i + 1] = arr[i];
		}
		arr[0] = x;
		size++;
	}

	void deletToFirst() {
		if (size != 0)
		{
			cout << "Array is Empty";
		}
		for (int i = 0; i < size; i++)
		{
			arr[i] = arr[i + 1];
		}size--;
	}

	void removeByIndex(int x) {
		if (x >= 0 && x < size)
		{
			for (int i = x; i < size; i++)
			{
				arr[i] == arr[i + 1];
			}
		}
	}

	bool search(int val) {
		if (size == 0 )
		{
			return false;
		}
		for (int i = 0; i < size; i++)
		{
			if(arr[i] == val)
			{
				return true;
			}
		}
		return false;
	}

	void updateValue(int index, int ele) {
		if ( index >= 0 && index < size)
		{
			arr[index] = ele;
		}
	}

	void clear() {
		size = 0;
	}
	
	void shinkToFit() {
		capacity = size;
		int* temp = new int[capacity];
		for (int i = 0; i < size; i++)
		{
			temp[i] = arr[i];
		}
		delete[]arr;
		arr = temp;
	}

	void printArray() {
		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " " ;
		}
	}







};