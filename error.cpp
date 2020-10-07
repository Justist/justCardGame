#include "error.h"

template <class T>
__attribute((unused)) void Error<T>::printVars(std::initializer_list<T> list) {
	for(auto elem : list) {
		std::cout << elem << " ";
	}
	std::cout << std::endl;
}
