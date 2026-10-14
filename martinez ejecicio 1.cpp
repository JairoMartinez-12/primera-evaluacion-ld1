//realice un programa que permita convertir unidades de longitud de cm a cm , pulgadas , metros , millas , km.
#include <iostream>
using namespace std;
int main(){

int cm;

    cout << "Ingrese la cantidad en cm:";
    cin >> cm;

    cout << "\n Conversiones" << endl;
    cout << " cm: " << cm << endl;
    cout << " Pulgadas: " << cm * 0.393701 << endl;
    cout << " Metros: " << cm / 100.0 << endl;
    cout << " Millas: " << cm / 160934.4 << endl;
    cout << " Kilometros: " << cm / 100000.0 << endl;



return 0;
}
