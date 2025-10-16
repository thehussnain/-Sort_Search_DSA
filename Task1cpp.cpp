#include <iostream>
#include <string>
using namespace std;

// Template function to print the array
template <typename T>
void printArray(T arr[], int size) {
	for (int i = 0; i < size; ++i) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

// Template function for selection sort
template <typename T>
void selectionSort(T arr[], int size) {
	for (int i = 0; i < size - 1; ++i) {
		int smallSub = i;
		for (int j = i + 1; j < size; ++j) {
			if (arr[j] < arr[smallSub]) {
				smallSub = j;
			}
		}
		// Swap arr[i] and arr[smallSub]
		T temp = arr[i];
		arr[i] = arr[smallSub];
		arr[smallSub] = temp;
	}
}

int main() {
	// Integer array test
	int intArray[5] = { 64, 25, 12, 22, 11 };
	cout << "Original integer array: ";
	printArray(intArray, 5);
	selectionSort(intArray, 5);
	cout << "Sorted integer array: ";
	printArray(intArray, 5);

	// String array test
	string stringArray[4] = { "apple", "orange", "banana", "grape" };
	cout << "\nOriginal string array: ";
	printArray(stringArray, 4);
	selectionSort(stringArray, 4);
	cout << "Sorted string array: ";
	printArray(stringArray, 4);

	return 0;
}
