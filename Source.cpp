#include <iostream>

using namespace std;


int main() {

	int NoofvarlengthArray = 0;//variable length Array
	int query = 0;//query
	int sequence = 0;//sequnce
	int index = 0;
	int valueAtIndex = 0;
	cin >> NoofvarlengthArray >> query;

	//Array of Arrays dynamically created
	int **ptr = new int*[NoofvarlengthArray];//2


	//Dynamically one dimensional Array
	int *output = new int[query];

	for (int i = 0; i < query; ++i) {
		cin >> sequence;//3
		ptr[i] = new int[sequence];

		for (int j = 0; j < sequence; ++j) {

			cin >> ptr[i][j];

		}

	}
		//Query
		for (int i = 0; i < query; ++i) {
			//Enter index 0 aur value at index 1
			cin >> index >> valueAtIndex;
			output[i] = ptr[index][valueAtIndex];

		}

	
		for (int i = 0; i < query; ++i) {
			cout << output[i] << endl;
		}


		delete[]ptr;
		delete[]output;
	return 0;
}