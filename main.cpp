#include <iostream>

using namespace std;

int main()
{
    int a,b,c = 0;
    //dos  nhumero por teclado y retornar el amyor de las dos lineas
    //z=(a<b)?a:b;
    cout<< "valor de a: ";
    cin>> a;
    cout<< "valor de b: ";
    cin>> b;

    c = (a>b)? cout<< "a es mayor y su valor es: "<<endl : cout<< "a es mayor y su valor es: "<<endl;
    //c = (a>b)? printf("El mayor es (a) y su valor es: %d",a):printf("El mayor es (b) y su valor es: %d",b);

    return 0;
}
