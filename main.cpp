#include <iostream>
using namespace std;

int main(){

//Qui vanno definite le variabili

    float a = 0;
    float b = 0;
    float c = 0;

    cout << "inserisci tre numeri\n";
    cin >> a >> b >> c;

    float AreaTriangolo = (a*b) / 2 ;
    float AreaQuadrato = a*a ;
    float AreaRettangolo = a*b ;
    float AreaTrapezio = (a+b)*c / 2 ;

//Qui va scritto il codice per eseguire i calcoli richiesti

    cout << "AREA TRIANGOLO :  \n" << AreaTriangolo;
    cout << "AREA QUADRATO : \n" << AreaQuadrato;
    cout << "AREA RETTANGOLO :  \n" << AreaRettangolo;
    cout << "AREA TRAPEZIO :  \n" << AreaTrapezio;

    return 0;
}
