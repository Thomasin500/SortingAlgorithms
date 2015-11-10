#pragma once

#include <vector>
#include <iostream>

using namespace std;

class sortingAlgorithms {

public:

	sortingAlgorithms() {}

	template <typename Comparable>
	bool checkSorted(vector<Comparable> & a) {

		bool sorted = true;

		for (int i = 1; i < a.size(); i++) {

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