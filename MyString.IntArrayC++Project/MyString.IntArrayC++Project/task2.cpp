#include <iostream>
using namespace std;

/*
1. IntArray class-i yaradin. Bu class massiv rolunu
oynamalidir.
Novbeti imkanlar olsun:
- Massivin evveline reqem elave eden method
- Massivin sonuna reqem elave eden method
- Massivi copy etmek imkani yaradin
- Print
*/


class IntArray {
	int* arr;
	int size;
public:

	IntArray() {};

	IntArray(int* arr)
	{
		SetArr(arr);
	}

	IntArray(int* arr, int size) :IntArray(arr) {
		SetSize(size);
	}

	IntArray& operator=(const IntArray& other) {
		SetArr(other.arr);
		return *this;
	}

	void SetArr(int* arr) {
		delete[] this->arr;
		this->arr = new int[size];
		this->arr = arr;
	}

	void SetSize(int size) {
		this->size = size > 0 ? size : 5;
	}

	int* GetArr()const { return arr; }
	int Getsize() const { return size; }


	// 1 Massivin evveline reqem elave eden method

	void InsertFirstIndex(int value) {
		size++;
		int* temp = new int[size];
		temp[0] = value;
		for (int i = 1; i < size; i++) {
			temp[i] = arr[i - 1];
		}
		delete[] arr;
		arr = temp;
		temp = nullptr;
	}


	// 2 Massivin sonuna reqem elave eden method

	void InsertLastIndex(int value) {
		size++;
		int* temp = new int[size];
		for (int i = 0; i < size - 1; i++) {
			temp[i] = arr[i];
		}
		temp[size - 1] = value;

		delete[] arr;
		arr = temp;
		temp = nullptr;
	}



	// 3 Massivi copy etmek imkani yaradin

	void Insert(int index, int value) {
		int* temp = new int[size];
		for (int i = 0; i < size; i++) {
			temp[i] = arr[i];
		}

		delete[] arr;
		arr = temp;
		temp = nullptr;
	}


	IntArray& Copy() {
		IntArray ptr;
		for (int i = 0; i < size; i++) {
			ptr.Insert(i, arr[i]);
		}
		return ptr;
	}



	// 4 Print

	void Print() {
		for (int i = 0; i < size; i++) {
			cout << arr[i] << " ";
		}
	}



	~IntArray() {
		delete[] arr;
	}
};


void main() {
	int size = 5;
	int* a = new int[size] {1, 2, 3, 4, 5};
	IntArray array(a, size);
	array.InsertFirstIndex(6);
	array.InsertLastIndex(6);
	array.Copy();
	array.Print();
}