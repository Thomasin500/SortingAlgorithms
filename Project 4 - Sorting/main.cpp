#pragma once


///////////////////////////////////
//	Thomas Freeman
//	Data Structures Project 4 - Sorting
///////////////////////////////////

#include "sortingAlgorithms.h"
#include <iostream>

#include <vector>

using namespace std;

void permute(vector<int> & a) {


}

bool checkSort(const vector<int> & a) {

	return false;
}


int main() {

	vector<int> array1 = {7, 3, 8, 1, 0, 5, 9, 2, 4, 6};

	sortingAlgorithms sort;

	sort.selectionSort(array1);

	cout << "Done" << endl;

	cin.ignore();
	cin.ignore();

	return 1;
}