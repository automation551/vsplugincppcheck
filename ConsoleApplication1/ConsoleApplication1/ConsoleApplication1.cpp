// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<stdlib.h>
#include<stdio.h>
int main(int argc, char* argv[]) {
	size_t size = (size_t)atoi(argv[1]);
	char* c = (char*)malloc(size);
	size_t den = 0;
	size_t x = 1000;
	size_t val1 = x / size;
	size_t val2 = 20 / size;
	size_t val3 = x / 0;
	size_t val4 = 10 / 0;
	size_t val5 = x / den;
	size_t val6 = 20 / den;
	return (int)(val1 + val2 + val3 + val4 + val5 + val6);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
