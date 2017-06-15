#ifndef Pila_H
#define Pila_H

#include <iostream>
#include <vector>

using namespace std;

template<class T>
class Pila {
	private:
		vector<T> datos;

	public:
		void push(T);
		T pop();
		T top();
};

template <class T>
void Pila<T> :: push(T elemento){
	datos.push_back(elemento);
}

template <class T>
T Pila<T> :: top() {
	return datos.back();
}

template<class T>
T Pila<T> :: pop(){
	T retval = datos.back();
	datos.pop_back();

	return retval;
}

#endif