#include<iostream>
using namespace std;

int leernumentero();
int sumdigitos(int ni);
void mostrarresult(int ni, int resultado);

int main()
{
	int ni;
	int resultado;
	ni = leernumentero();
	resultado = sumdigitos(ni);
	mostrarresult(ni, resultado);
	system("pause"); // Esto hay que borralo que en LINUX no va xD
	return 0;
}

int leernumentero()
{
	int n;
	cout << "Introduce un numero entero: " << endl;
	cin >> n;
	while (n < 0)
		{
			cout << "Introduce un numero entero: ";
			cin >> n;
		}
	return n;
}

int sumdigitos(int ni)
{
	int suma = 0;
	while (ni > 0)
	{
		suma = suma + ni % 10;
		ni = ni / 10;
	}
	return suma;
}

void mostrarresult(int ni, int resultado)
{
	cout << "El resultado de la suma de los digitos de " << ni << " es " << resultado << endl;
}
