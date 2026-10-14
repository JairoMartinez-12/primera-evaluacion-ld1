//escriba un programa que como entrada reciba tres lados, valide que es un triangulo diga si es equilatero, isoseles o escaleno,

#include <iostream>
using namespace std;
int main(){

int a, b, c;
    cout << "Ingrese 3 lados: ";
    if (!(cin >> a >> b >> c)) return 1;

    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) cout << "Equilatero\n";
        else if (a == b || a == c || b == c) cout << "Isosceles\n";
        else cout << "Escaleno\n";
    } else {
        cout << "No es un triangulo\n";
    
    return 0;

}







