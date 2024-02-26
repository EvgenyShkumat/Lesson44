#include <iostream>
using namespace std;

void random_init(int* vector, int size, int min, int max);
string output(int* vector, int size);
void user_init(int* vector, int size, int min, int max);

bool is_the_same(int* vector, int length);

int main() {
	int size;
	
	do
	{
		cout << "Enter size of vector: ";
		cin >> size;
	} while (size <= 0);

	int* vector = new int[size];

	random_init(vector, size, 0, 9);
	
	bool same = is_the_same(vector, size);

	cout << output(vector, size) << endl;
	cout << (same  ? "Yes, there is same numbers" : "No, there is no same numbers");

	delete[] vector;

	return 0;
}