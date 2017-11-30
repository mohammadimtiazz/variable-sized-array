#include <iostream>
#include <stdlib.h>

using namespace std;


int main () {
	int rowSize, query;
	cin >> rowSize >> query;

	//initialize the rows
	int **variableArr = new int* [rowSize];

	int colSize;
	int element;
	for(int i = 0; i < rowSize; i++){
		cin >> colSize;
		//initialize different size cols 
		variableArr[i] = new int [colSize];

		for (int j = 0; j < colSize; j++){
			cin >> element;

			//inserting column elements
			variableArr[i][j] = element;
		}
	}

	int row, col;
	for (int i = 0; i < query; i++){
		cin >> row >> col;
		cout << variableArr[row][col] << endl;

	}

	//delete variable array
	for(int i = 0; i < rowSize; i++){
		delete [] variableArr[i];
	}

	delete [] variableArr;


	return 0;
} 
