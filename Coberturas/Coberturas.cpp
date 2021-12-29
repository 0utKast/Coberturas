#include <iostream>
#include <cmath>


void raizCuadrada(int x)
{
    std::cout << "raíz cuadrada de " << x << " = ";
    
    std::cout << sqrt(x) << '\n';

}

int main() {
    setlocale(LC_ALL, "es_ES.UTF-8");
    raizCuadrada(12);
    raizCuadrada(0);
    raizCuadrada(-34);

    return 0;
}



















/*#include <iostream>

void spam(int vecesEscribe)
{
    for (int contador{ 0 }; contador < vecesEscribe; ++contador)
        std::cout << "Prohibido hacer Spam\n";
}


int main()
{
    spam(0);
    spam(1);
    spam(2);
    
}*/















/*#include <iostream>

void comparar(int x, int y)
{
    if (x > y)
        std::cout << x << " es mayor que " << y << '\n'; // caso 1
    else if (x < y)
        std::cout << x << " es menor que " << y << '\n'; // caso 2
    else
        std::cout << x << " es igual a " << y << '\n'; // caso 3
}

int main()
{
    comparar(1, 0);
    comparar(0, 1);
    comparar(1, 1);


}*/












/*#include <iostream>

bool esVocal(char c)
{
    switch (c) // declaración 1
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        return true; // declaración 2
    default:
        return false; // declaración 3
    }
}

int main()
{
    
        std::cout << esVocal('a'); //debe devolver 1(true)
        std::cout << esVocal('q'); //debe devolver 0(false)

}*/


    







/*#include <iostream>
int foo(int x, int y)
{
    int z{ y };
    if (x > y)
    {
        z = x;
    }
    return z;
}

int main()
{
    int resultado = foo(1, 0);
    std::cout << resultado;

}*/








/*#include <iostream>

void spam(int timesToPrint)
{
    for (int count{ 0 }; count < timesToPrint; ++count)
        std::cout << "Spam! ";
}*/













/*void compare(int x, int y)
{
    if (x > y)
        std::cout << x << " is greater than " << y << '\n'; // case 1
    else if (x < y)
        std::cout << x << " is less than " << y << '\n'; // case 2
    else
        std::cout << x << " is equal to " << y << '\n'; // case 3
}*/







