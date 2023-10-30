// Actividad 10 - Suma Recursiva e Iterativa c mas mas.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

int sumaIterativa(int n)
{
    int suma = 0;

    while (n > 9)
    {
        suma += n % 10;
        n /= 10;
    }
    return (suma + n);
}

int main()
{
    int numero = 12345;
    int resultado = sumaIterativa(numero);
    std::cout << "La suma de los digitos de " << numero << " es " << resultado << std::endl;

    return 0;
}