#ifndef ERROR_H
#define ERROR_H

#include <iostream>
#include <initializer_list>

template<class T>
class Error {
	public:
		Error() = default;
		~Error() = default;
		
		void printVars(std::initializer_list<T> list);
};

#endif
