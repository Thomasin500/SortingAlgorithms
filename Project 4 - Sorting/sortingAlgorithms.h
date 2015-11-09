#pragma once

#include <vector>
#include <iostream>

using namespace std;

class sortingAlgorithms {

public:

	sortingAlgorithms() {}

	template <typename Comparable>
	bool checkSorted(vector<Comparable> & a) {



		return false;
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

		cout << "Starting Selection Sort" << endl;
	
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


	}

	template <typename Comparable>
	void insertionSort(vector<Comparable> & a) {


	}

	template <typename Comparable>
	void mergeSort(vector<Comparable> & a) {


	}

	template <typename Comparable>
	void quickSort(vector<Comparable> & a) {


	}

	template <typename Comparable>
	void sortingAlgorithms::randomquickSort(vector<Comparable> & a) {


	}

	template <typename Comparable>
	void sortingAlgorithms::heapsort(vector<Comparable> & a) {


	}

};