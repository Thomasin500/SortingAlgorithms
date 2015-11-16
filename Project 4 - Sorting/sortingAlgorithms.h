#pragma once

#include <vector>
#include <iostream>
#include <algorithm> //needed for min

using namespace std;

class sortingAlgorithms {

public:

	sortingAlgorithms() {}

	//copies all the elements of b into a so that when finished, a == b
	//no changes made to b
	template <typename Comparable>
	void copyArray(vector<Comparable> & a, vector<Comparable> & b) {

		for (int i = 0; i < a.size(); i++) {

			a[i] = b[i];
		}
	}
	/*-----------------------------------------------------------------------
	copyArray

	Precondition:  vector array a and vector array b
	Postcondition: all elements of a are now the elements of b
	-----------------------------------------------------------------------*/

	template <typename Comparable>
	bool checkSorted(vector<Comparable> & a) {

		bool sorted = true;

		for (int i = 0; i < a.size(); i++) {

			if (a[i - 1] > a[i]) {

				sorted = false;
			}
		}

		return sorted;
	}
	/*-----------------------------------------------------------------------
	checkSorted

	Precondition:  vector array a
	Postcondition: returns true if the array is sorted
	-----------------------------------------------------------------------*/

	template <typename Comparable>
	void display(vector<Comparable> & a) {

		for (int i = 0; i < a.size(); i++) {

			cout << a[i] << " ";
		}

		cout << "\n\n";
	}
	/*-----------------------------------------------------------------------
	display

	Precondition:  vector array a
	Postcondition: outputs all elements of the array
	-----------------------------------------------------------------------*/

	template <typename Comparable>
	void selectionSort(vector<Comparable> & a) {
	
		for (int i = 0; i < a.size(); i++) {

			int min = i;

			for (int j = i; j < a.size(); j++) {

				if (a[j] < a[min]) {

					min = j;
				}
			}		   

			swap(a[i], a[min]);
		}

		cout << "Selection Sort Finished:\n";
		display(a);
	}
	/*-----------------------------------------------------------------------
	selectionSort

	Precondition:  implements selection sort
	Postcondition: the array is now sorted
	-----------------------------------------------------------------------*/

	template <typename Comparable>
	void bubbleSort(vector<Comparable> & a) {

		bool swappable = true;

		while (swappable) {

			swappable = false;

			for (int i = 1; i < a.size() ; i++) {

				if (a[i - 1] > a[i]) {

					swap(a[i - 1], a[i]);
					swappable = true;
				}
			}			
		}

		cout << "Bubble Sort Finished:\n";
		display(a);
	}
	/*-----------------------------------------------------------------------
	bubbleSort

	Precondition:  implements bubble sort
	Postcondition: the array is now sorted
	-----------------------------------------------------------------------*/

	template <typename Comparable>
	void insertionSort(vector<Comparable> & a) {

		for (int i = 0; i < a.size(); i++) {

			int j = i;

			while (j > 0 && a[j - 1] > a[j]) {
				swap(a[j], a[j - 1]);
				j--;
			}
		}

		cout << "Insertion Sort Finished:\n";
		display(a);
	}
	/*-----------------------------------------------------------------------
	insertionSort

	Precondition:  implements insertion sort
	Postcondition: the array is now sorted
	-----------------------------------------------------------------------*/

	template <typename Comparable>
	void mergeSort(vector<Comparable> & a) {

		const int size = a.size();

		vector<Comparable> finalArray(size);

		for (int subArrays = 1; subArrays < size; subArrays *= 2) {

			for (int i = 0; i < a.size(); i = i + 2 * subArrays) {

				mergeSortUtil(a, i, min(i + subArrays, size), min(i + 2 * subArrays, size), finalArray);
			}

			copyArray(a, finalArray);			
		}

		cout << "Merge Sort Finished:\n";
		display(a);
	}
	/*-----------------------------------------------------------------------
	mergeSort

	Precondition:  implements merge sort
	Postcondition: the array is now sorted
	-----------------------------------------------------------------------*/

	//merges two arrays into one sorted array
	template <typename Comparable>
	void mergeSortUtil(vector<Comparable> & a, int left, int right, int end, vector<Comparable> & b) {

		int i = left;
		int j = right;

		for (int k = left; k < end; k++) {

			if (i < right && (j >= end || a[i] <= a[j])) {

				b[k] = a[i];
				i++;
			} else {

				b[k] = a[j];
				j++;
			}
		}
	}
	/*-----------------------------------------------------------------------
	mergeSort util

	Precondition: a util function of merge sort
	Postcondition: the array is now sorted
	-----------------------------------------------------------------------*/

	template <typename Comparable>
	void quickSort(vector<Comparable> & a, int low, int high) {
		
		if (low < high) {

			int pivot = quickSortUtil(a, low, high);

			quickSort(a, low, pivot - 1);
			quickSort(a, pivot + 1, high);
		}	
	}
	/*-----------------------------------------------------------------------
	quickSort

	Precondition:  implements quick sort
	Postcondition: the array is now sorted
	-----------------------------------------------------------------------*/
	
	template <typename Comparable>
	int quickSortUtil(vector<Comparable> & a, int low, int high) {

		int temp = low;
		int pivot = a[low];

		for (int i = low + 1; i <= high; i++) {

			if (a[i] <= pivot) {

				temp++;
				swap(a[i], a[temp]);
			}
		}

		swap(a[temp], a[low]);

		return temp;
	}
	/*-----------------------------------------------------------------------
	quickSortUtil

	Precondition:  a utility function of quick sort
	Postcondition: the array is now sorted
	-----------------------------------------------------------------------*/


	template <typename Comparable>
	void randomQuickSort(vector<Comparable> & a, int low, int high) {

		if (low < high) {

			int pivot = quickSortUtil(a, low, high);

			quickSort(a, low, pivot - 1);
			quickSort(a, pivot + 1, high);
		}
	}
	/*-----------------------------------------------------------------------
	randomQuickSort

	Precondition:  implements random quick sort
	Postcondition: the array is now sorted
	-----------------------------------------------------------------------*/

	template <typename Comparable>
	int randomQuickSortUtil(vector<Comparable> & a, int low, int high) {

		int temp = low;
		int pivot = a[rand() % a.size()];

		for (int i = low + 1; i <= high; i++) {

			if (a[i] <= pivot) {

				temp++;
				swap(a[i], a[temp]);
			}
		}

		swap(a[temp], a[low]);

		return temp;
	}
	/*-----------------------------------------------------------------------
	randomQuickSortUtil

	Precondition:  a utility function for random quick sort
	Postcondition: the array is now sorted
	-----------------------------------------------------------------------*/

	//builds a max heap
	template <typename Comparable>
	void buildHeap(vector<Comparable> & a) {

		for (int i = a.size() / 2; i >= 1; i--) {

			heapify(a, i, a.size());
		}

		display(a);
	}
	/*-----------------------------------------------------------------------
	build heap

	Precondition:  vector array a
	Postcondition: the array is now sorted as a max heap
	-----------------------------------------------------------------------*/

	template <typename Comparable>
	void heapSort(vector<Comparable> & a) {

		buildHeap(a);

		int temp;
		
		for (int i = a.size(); i >= 2; i--) {

			temp = a[i];
			a[i] = a[1];
			a[1] = temp;
			heapify(a, 1, i - 1);
		}
	}
	/*-----------------------------------------------------------------------
	heap sort

	Precondition:  implements heap sort with vector array a
	Postcondition: the array is now sorted
	-----------------------------------------------------------------------*/

	template <typename Comparable>
	void heapify(vector<Comparable> & a, int i, int n) {

		int temp = a[i];
		int j = i * 2;

		cout << temp << endl;
		cout << j;

		while (j <= n) {

			if (j < n && a[j + 1] > a[j]) {

				j++;
			}

			if (temp > a[j]) break;

			else if (temp <= a[j]) {

				a[j / 2] = a[j];
				j *= 2;
			}
		}
		a[j / 2] = temp;
	}
	/*-----------------------------------------------------------------------
	heapify

	Precondition:  bubbles up 
	Postcondition: the array is now sorted
	-----------------------------------------------------------------------*/
};