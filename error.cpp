#include "error.h"

template <class T>
void Error::printVars(initializer_list<T> list) {
	for(auto elem : list) {
		cout << elem << " ";
	}
	cout << endl;
}
