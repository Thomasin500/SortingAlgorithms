#pragma once

class sortingAlgorithms {


	template <typename Comparable>
	void selectionSort(vector<Comparable> & a);

	template <typename Comparable>
	void bubbleSort(vector<Comparable> & a);

	template <typename Comparable>
	void insertionSort(vector<Comparable> & a);

	template <typename Comparable>
	void mergeSort(vector<Comparable> & a);

	template <typename Comparable>
	void quickSort(vector<Comparable> & a);

	template <typename Comparable>
	void randomquickSort(vector<Comparable> & a);

	template <typename Comparable>
	void heapsort(vector<Comparable> & a);
};