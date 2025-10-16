#include <iostream>
#include <string>
using namespace std;

// using  Template function for linear search:
template <typename T>
int linearSearch(T arr[], int size, T value) {
	for (int i = 0; i < size; ++i) {
		if (arr[i] == value) {
			return i;
		}
	}
	return -1;
}

// using template function to print search result:
template <typename T>
void printSearchResult(int index, T key) {
	if (index != -1) {
		cout<<"Value "<<key<<" found at index "<<index<<"."<<endl;
	}
	else{
		cout<<"Value "<<key<<" not found in the array."<<endl;
	}
}

int main(){
	// Test with an integer array of size 5
	int intArray[5] = { 64, 25, 12, 22, 11 };
	int intKey = 12;
	int intIndex = linearSearch(intArray, 5, intKey);
	printSearchResult(intIndex, intKey);

	// Test with a float array of size 4
	float floatArray[4] = { 3.14f, 2.71f, 1.62f, 0.57f };
	float floatKey = 1.62f;
	int floatIndex = linearSearch(floatArray, 4, floatKey);
	printSearchResult(floatIndex, floatKey);

	// Test with a string array of size 4
	string stringArray[4] = { "apple", "orange", "banana", "grape" };
	string stringKey = "banana";
	int stringIndex = linearSearch(stringArray, 4, stringKey);
	printSearchResult(stringIndex, stringKey);

	return 0;
}
