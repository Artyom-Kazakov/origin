#include <iostream>
#include <fstream>

int main() {
	int n = 0;
	int m = 0;
	std::ifstream in("in.txt");

	in >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		in >> arr[i];
	}

	in >> m;
	int* arr_2 = new int[m];
	for (int i = 0; i < m; i++) {
		in >> arr_2[i];
	}

	std::ofstream out("out.txt");
	out << m << std::endl;
	out << arr_2[m - 1] << " ";
	for (int i = 0; i < m - 1; i++) {
		out << arr_2[i] << " ";
	}
	out << std::endl;
	out << n << std::endl;
	out << arr[n - 1] << " ";
	for (int i = 0; i < n - 1; i++) {
		out << arr[i] << " ";
	}

	in.close();
	out.close();
	delete[] arr;
	delete[] arr_2;
}
