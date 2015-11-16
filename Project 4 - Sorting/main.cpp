#pragma once

///////////////////////////////////
//	Thomas Freeman
//	Data Structures Project 4 - Sorting
///////////////////////////////////

#include "sortingAlgorithms.h"
#include <iostream>

#include <vector>

using namespace std;

vector<int> array1 = { 7, 3, 8, 1, 0, 5, 9, 2, 4, 6 };

//TODO implement heap sort

template <typename Comparable>
void display(vector<Comparable> & a) {

	for (int i = 0; i < a.size(); i++) {

		cout << a[i] << " ";
	}

	cout << "\n\n";
}

//swaps a random element of the array 5 times to ensure true randomness
void permute(vector<int> & a) {	
	
	swap(a[rand() % a.size()], a[rand() % a.size()]);
	swap(a[rand() % a.size()], a[rand() % a.size()]);
	swap(a[rand() % a.size()], a[rand() % a.size()]);
	swap(a[rand() % a.size()], a[rand() % a.size()]);
	swap(a[rand() % a.size()], a[rand() % a.size()]);
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

	sortingAlgorithms sort;

	vector<int> array1 = { 7, 3, 8, 1, 0, 5, 9, 2, 4, 6 };

	int input = NULL;

	cout << "\nWhich Sorting Algorithm Would You Like To Test?\n\n";
	cout << "Selection (0)\nBubble (1)\nInsertion (2)\nMerge (3)\nQuick (4)\nRandom Quick (5)\nHeap (6)\nShow Permutations (7)\n\n";
	cin >> input;
	cout << endl;

	cout << "Current Array is: " << endl;
	display(array1);	

	switch (input) {

		case 0:
			cout << "Array after permutation is: ";
			permute(array1);
			display(array1);

			cout << "\nStarting Selection Sort" << endl;
			sort.selectionSort(array1);
			cout << "Array is sorted: " << checkSort(array1) << endl;

			cout << "Array after permutation is: " << endl;
			permute(array1);
			display(array1);

			cout << "\nStarting Selection Sort" << endl;
			sort.selectionSort(array1);
			cout << "Array is sorted: " << checkSort(array1) << endl;

			cout << "Array after permutation is: " << endl;
			permute(array1);
			display(array1);

			cout << "\nStarting Selection Sort" << endl;
			sort.selectionSort(array1);
			cout << "Array is sorted: " << checkSort(array1) << endl;

			break;
		case 1:
			cout << "Array after permutation is: ";
			permute(array1);
			display(array1);

			cout << "\nStarting Bubble Sort" << endl;
			sort.bubbleSort(array1);
			cout << "Array is sorted: " << checkSort(array1) << endl;

			cout << "Array after permutation is: ";
			permute(array1);
			display(array1);

			cout << "\nStarting Bubble Sort" << endl;
			sort.bubbleSort(array1);
			cout << "Array is sorted: " << checkSort(array1) << endl;

			cout << "Array after permutation is: ";
			permute(array1);
			display(array1);

			cout << "\nStarting Bubble Sort" << endl;
			sort.bubbleSort(array1);
			cout << "Array is sorted: " << checkSort(array1) << endl;
			break;
		case 2:
			cout << "Array after permutation is: ";
			permute(array1);
			display(array1);

			cout << "\nStarting Insertion Sort" << endl;
			sort.insertionSort(array1);
			cout << "Array is sorted: " << checkSort(array1) << endl;

			cout << "Array after permutation is: ";
			permute(array1);
			display(array1);

			cout << "\nStarting Insertion Sort" << endl;
			sort.insertionSort(array1);
			cout << "Array is sorted: " << checkSort(array1) << endl;

			cout << "Array after permutation is: ";
			permute(array1);
			display(array1);

			cout << "\nStarting Insertion Sort" << endl;
			sort.insertionSort(array1);
			cout << "Array is sorted: " << checkSort(array1) << endl;
			break;
		case 3:
			cout << "Array after permutation is: ";
			permute(array1);
			display(array1);

			cout << "\nStarting Merge Sort" << endl;
			sort.mergeSort(array1);
			cout << "Array is sorted: " << checkSort(array1) << endl;

			cout << "Array after permutation is: ";
			permute(array1);
			display(array1);

			cout << "\nStarting Merge Sort" << endl;
			sort.mergeSort(array1);
			cout << "Array is sorted: " << checkSort(array1) << endl;

			cout << "Array after permutation is: ";
			permute(array1);
			display(array1);

			cout << "\nStarting Merge Sort" << endl;
			sort.mergeSort(array1);
			cout << "Array is sorted: " << checkSort(array1) << endl;
			break;
		case 4:		
			cout << "Array after permutation is: ";
			permute(array1);
			display(array1);

			cout << "\nStarting Quick Sort" << endl;
			sort.quickSort(array1, 0, array1.size() - 1);
			cout << "Array is sorted: " << checkSort(array1) << endl;

			cout << "Quick Sort Finished:\n";
			display(array1);

			cout << "Array is sorted: " << checkSort(array1) << endl;

			cout << "Array after permutation is: ";
			permute(array1);
			display(array1);

			cout << "\nStarting Quick Sort" << endl;
			sort.quickSort(array1, 0, array1.size() - 1);
			cout << "Array is sorted: " << checkSort(array1) << endl;

			cout << "Quick Sort Finished:\n";
			display(array1);

			cout << "Array is sorted: " << checkSort(array1) << endl;

			cout << "Array after permutation is: ";
			permute(array1);
			display(array1);

			cout << "\nStarting Quick Sort" << endl;
			sort.quickSort(array1, 0, array1.size() - 1);
			cout << "Array is sorted: " << checkSort(array1) << endl;

			cout << "Quick Sort Finished:\n";
			display(array1);

			cout << "Array is sorted: " << checkSort(array1) << endl;
			break;
		case 5:
			cout << "Array after permutation is: ";
			permute(array1);
			display(array1);

			cout << "\nStarting Random Quick Sort" << endl;
			sort.randomQuickSort(array1, 0, array1.size() - 1);
			cout << "Array is sorted: " << checkSort(array1) << endl;

			cout << "Random Quick Sort Finished:\n";
			display(array1);

			cout << "Array is sorted: " << checkSort(array1) << endl;

			cout << "Array after permutation is: ";
			permute(array1);
			display(array1);

			cout << "\nStarting Random Quick Sort" << endl;
			sort.randomQuickSort(array1, 0, array1.size() - 1);
			cout << "Array is sorted: " << checkSort(array1) << endl;

			cout << "Random Quick Sort Finished:\n";
			display(array1);

			cout << "Array is sorted: " << checkSort(array1) << endl;

			cout << "Array after permutation is: ";
			permute(array1);
			display(array1);

			cout << "\nStarting Random Quick Sort" << endl;
			sort.randomQuickSort(array1, 0, array1.size() - 1);
			cout << "Array is sorted: " << checkSort(array1) << endl;

			cout << "Random Quick Sort Finished:\n";
			display(array1);

			cout << "Array is sorted: " << checkSort(array1) << endl;
			break;
		case 6:
			cout << "Array after permutation is: ";
			permute(array1);
			display(array1);

			cout << "\nStarting Heap Sort" << endl;
			sort.heapSort(array1);
			cout << "Array is sorted: " << checkSort(array1) << endl;

			cout << "Heap Sort Finished:\n";
			display(array1);

			cout << "Array is sorted: " << checkSort(array1) << endl;
			cout << "Array after permutation is: ";
			permute(array1);
			display(array1);

			cout << "\nStarting Heap Sort" << endl;
			sort.heapSort(array1);
			cout << "Array is sorted: " << checkSort(array1) << endl;

			cout << "Heap Sort Finished:\n";
			display(array1);

			cout << "Array is sorted: " << checkSort(array1) << endl;

			cout << "\nStarting Heap Sort" << endl;
			sort.heapSort(array1);
			cout << "Array is sorted: " << checkSort(array1) << endl;

			cout << "Heap Sort Finished:\n";
			display(array1);

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

	testAlgorithms();	
	
	cout << "\n\nDone\n" << endl;

	cin.ignore();
	return 1;
}