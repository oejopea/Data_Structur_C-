#pragma once
#pragma once
#include <iostream>  // ✅ ضروري لتعريف cout
using namespace std; // ✅ ضروري أو استخدم std::cout

class Array_List
{
	int* arr;
	int size;
	int capacity;

public:
	Array_List() {
		size = 0;
		capacity = 10;
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
		for (int i = 0; i < size; i++)
		{
			arr2[i] = arr[i];
		}
	}


	void deleteToList() {
		if (size == 0) {
			cout << "Array is nun" << endl;
		}
		size--;
	}


	int getSize() {
		return  size;
	 }
	int getCapacity() {
		return capacity;
	}

	void addToFirst(int element) {
		if (size == capacity) {
			expand();
		}
		for (int i = size - 1; i >= 0; i--) {
				arr[i+1] = arr[i];

		}
		arr[0] = element;
		size++;

		
	}

	void deleteToListFirst() {
		for (int i = 0; i < size; i++) {
			arr[i] = arr[i + 1];
		}
		size--;
	}

	void removeByIndex(int Index) {
		if (Index >= 0 && Index < size) {
			for (int i = Index; i < size; i++) {
				arr[i] = arr[i + 1];
			}
		}
	}
	bool search(int val) {
		if (size == 0)
		{
			return false;
		}
		for (int i = 0; i < size; i++) {
			if (arr[i] = val) {
				return true;
			}
		}
		return false;
	}

	void updateValue(int index, int ele) {
		if (index >= 0 && index < size) {
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
		for (int i = 0; i < size; i++) {
			cout << arr[i] << " ";
		}

	}





};

