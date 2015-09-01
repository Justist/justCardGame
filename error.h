#ifndef ERROR_H
#define ERROR_H

#include <iostream>
#include <initializer_list>

using namespace std;

class Error {
	
	private:
		
	public:
		Error() {}
		
		template<class T>
		void printVars(initializer_list<T> list);
	
};

#endif
