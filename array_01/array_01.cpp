#include <iostream>
#include <string>
using namespace std;
//
int main(){ 

	// A //////////////////////////////
	cout << " ---------- array ----------- " << endl;
	
	cout << "\n ========================================= \n";

	int HighScore[6]; // sizeof(HighScore) = 24 -> int is 4 * 6 byte
	HighScore[0] = 40;
	HighScore[1] = 82;
	HighScore[2] = 120;
	HighScore[3] = 888;
	HighScore[4] = -12;
	HighScore[5] = 0;

	for (int i = 0; i < sizeof(HighScore); i++) { // <-- issue
		cout << HighScore[i] << " | ";
	}

	cout << "\n ========================================= \n";

	size_t arraySize = sizeof(HighScore) / sizeof(HighScore[0]);
	//for (int i = 0; i < 6; i++) { // <-- use fix number
	for (size_t i = 0; i < arraySize; i++) { // <-- works fine
		cout << HighScore[i] << " | ";
	}
	//// https://en.cppreference.com/w/cpp/types/size_t

	int main_Array_01[12] = {}; // empty array
	int main_Array_02[12]{}; // empty array

	cout << "\n ========================================= \n";

	//// 2d array // save in memory as "contiguous" address
	int table_A[3][2] = {
		{ 4, 8 },
		{ 0, -1 },
		{ 12, 24}
	};
	cout << " \n++++     table_B[2][1]  [row][col]:  " << table_A[1][1] << endl;

	int City_Hospital_insID[5][4][52][3];	// nd array building, section, room, bed
	City_Hospital_insID[2][1][20][0] = 478521;
	City_Hospital_insID[2][1][20][1] = 200145;
	City_Hospital_insID[2][1][20][2] = -1;

	string City_Hospital_PName[5][4][52][3];
	City_Hospital_PName[2][1][20][0] = "James";
	City_Hospital_PName[2][1][20][1] = "Kirk";
	City_Hospital_PName[2][1][20][2] = "";

	// copy array
	int highScore[10] = { 20, 70, 0, 71, 12, 07, 4, 47 };
	int newScore[10] = { 1, 1, 1, 1, 1, 1, 1, 1 };
	
	int a = 12;
	int b = 125;
	
	b = a; // copy is ok
	a = b; // copy is ok
	//highScore = newScore; // <-- copy is not allowed

	size_t arraySize1 = sizeof(highScore) / sizeof(highScore[0]);
	for (size_t i = 0; i < arraySize1; i++) {
		highScore[i] = newScore[i]; // copy array values with same size
	}
//	cout << "\n --------- end of code ------------ " << endl;
}

// C++ arrays
// https://www.youtube.com/watch?v=T76E09hnEuo

// pass array to function 

//void checkArray(int arr[]) {
//	arr[0] = 85;
//}
////
//int main() {
//	int anArray[4] = { 1,2,2,2 };
//	int anArray_02[4];
//	cout << anArray[0] << " --A-- \n";
//	checkArray(anArray);
//	cout << anArray[0] << " --B-- default: arrays are passing by reference. \n";
//}
//// https://www.tutorialspoint.com/cplusplus/cpp_passing_arrays_to_functions.htm
