#include<iostream>
#include<vector>

using namespace std;

class Car {
	vector<string> obj;
public:
	Car(const std::initializer_list<string> vec) { //New Keyword added as initializer_list
		for (auto itr : vec)
			obj.push_back(itr);
	}

	void print() {
		for (auto itr : obj)
			cout << itr << " ";
	}
};

int main() {
	Car myCar = { "i10","Nano","XL6" };
	myCar.print();

	return 0;
}
