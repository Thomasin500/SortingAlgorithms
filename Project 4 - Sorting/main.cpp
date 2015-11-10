#pragma once

///////////////////////////////////
//	Thomas Freeman
//	Data Structures Project 4 - Sorting
///////////////////////////////////

#include "sortingAlgorithms.h"
#include <iostream>

#include <vector>

using namespace std;

sortingAlgorithms sort;

vector<int> array1 = { 7, 3, 8, 1, 0, 5, 9, 2, 4, 6 };

void permute(vector<int> & a) {


}

bool checkSort(const vector<int> & a) {

	bool sorted = true;

	for (int i = 1; i < a.size(); i++) {

		if (a[i - 1] > a[i]) {

			sorted = false;
		}
	}

	return sorted;
}

void testAlgorithms() {

	vector<int> array1 = { 7, 3, 8, 1, 0, 5, 9, 2, 4, 6 };
	vector<int> array2 = { 6, 4, 8, 9, 2, 3, 10, 7, 1, 5 };
	vector<int> array3 = { 9, 4, 8, 6, 1, 3, 0, 5, 7, 2 };

	int input = NULL;

	cout << "\nWhich Sorting Algorithm Would You Like To Test?\n\n";
	cout << "Selection (0)\nBubble (1)\nInsertion (2)\nMerge (3)\nQuick (4)\nRandom Quick (5)\nHeap (6)\n\n";
	cin >> input;

	switch (input) {

	case 0:
		sort.selectionSort(array1);
		cout << "Array is sorted: " << checkSort(array1) << endl;
		break;
	case 1:
		sort.bubbleSort(array1);
		cout << "Array is sorted: " << checkSort(array1) << endl;
		break;
	case 2:
		sort.insertionSort(array1);
		cout << "Array is sorted: " << checkSort(array1) << endl;
		break;
	case 3:
		sort.mergeSort(array1);
		cout << "Array is sorted: " << checkSort(array1) << endl;
		break;
	case 4:
		sort.quickSort(array1);
		cout << "Array is sorted: " << checkSort(array1) << endl;
		break;
	case 5:
		sort.randomQuickSort(array1);
		cout << "Array is sorted: " << checkSort(array1) << endl;
		break;
	case 6:
		sort.heapSort(array1);
		cout << "Array is sorted: " << checkSort(array1) << endl;
		break;
	default:
		break;
	}

	cout << "\n\nWould you like to test another sorting algorithm? (0 for no, 1 for yes)\n";
	cin >> input;

	if (input == 1) {

		testAlgorithms();
	}
}

int main(const vector<int> & a) {

	//ector<int> sortedArray = {1,2,3,4,5};

	//cout << sort.checkSorted(sortedArray);

	testAlgorithms();	
	
	cout << "\n\nDone\n" << endl;

	cin.ignore();
	cin.ignore();

	return 1;
}