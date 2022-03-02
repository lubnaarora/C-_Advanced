#include<iostream>
#include<vector>

using namespace std;


void print(vector<int>& vec) {
	for (auto itr = vec.begin(); itr != vec.end(); itr++)
		cout << *itr << " ";

	cout << endl;
}

int main() {
	vector<int> vec = { 1,2,3 };
	vector<int> a, b;

	for (auto itr = vec.begin(); itr != vec.end(); itr++)
		a.push_back(*itr);

	for (auto itr = vec.begin(); itr != vec.end(); itr++)
		b.push_back(*itr);

	cout << " a : ";
	print(a);

	cout << " b : ";
	print(b);

	return 0;

}
