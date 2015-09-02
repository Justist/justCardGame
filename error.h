#ifndef ERROR_H
#define ERROR_H

#include <iostream>
#include <initializer_list>

using namespace std;

template<class T>
class Error {
	
	private:
		
	public:
		Error() {}
		
		void printVars(initializer_list<T> list);
	
};

#include "error.cpp"

#endif
