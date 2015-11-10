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

	template <typename Comparable>
	void display(vector<Comparable> & a) {

		for (int i = 0; i < a.size(); i++) {

			cout << a[i] << " ";
		}

		cout << "\n\n";
	}

	template <typename Comparable>
	void selectionSort(vector<Comparable> & a) {

		cout << "\nStarting Selection Sort" << endl;
	
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

	template <typename Comparable>
	void bubbleSort(vector<Comparable> & a) {

		cout << "\nStarting Bubble Sort" << endl;

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

	template <typename Comparable>
	void insertionSort(vector<Comparable> & a) {

		cout << "\nStarting Insertion Sort" << endl;

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

	template <typename Comparable>
	void mergeSort(vector<Comparable> & a) {

		cout << "\nStarting Merge Sort\n" << endl;

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

	template <typename Comparable>
	void quickSort(vector<Comparable> & a) {


	}

	template <typename Comparable>
	void randomQuickSort(vector<Comparable> & a) {


	}

	template <typename Comparable>
	void heapSort(vector<Comparable> & a) {


	}

};