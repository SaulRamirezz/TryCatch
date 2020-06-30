#include <iostream>
using namespace std;

int main()
{
	try
	{
		int* puntero;
		while (true) { //estoy intentando asignar memoria dinámica pero no puedo porque el heap esta lleno
			puntero = new int[100000];
		}
	}
	catch (bad_alloc & ex)
	{
		cout << "Ocurrio un error: " << ex.what() << endl; //what es una función que bad_alloc hereda de exception
	}
	
}

