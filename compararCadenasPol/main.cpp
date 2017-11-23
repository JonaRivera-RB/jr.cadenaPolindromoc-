//
//  main.cpp
//  compararCadenasPol
//
//  Created by misael rivera on 22/11/17.
//  Copyright © 2017 misael rivera. All rights reserved.
//

#include <iostream>
using namespace std;
int contarCaracteres(char cad[]);
int compararCadena(char cad[], int contador);
int main(int argc, const char * argv[]) {
    char cad[50];
    int caracteres;
    cout << "Leer una cadena y decir si es polindromo!\n";
    cout<<"Introduce cadena: "<<endl;
    cin.getline(cad, 50, '\n');
    cout<<"La cadena es: "<<endl<<cad<<endl;
    caracteres = contarCaracteres(cad);
    if(compararCadena(cad, caracteres)==0)
        cout<<"es una cadena polindromo"<<endl;
    else
        cout<<"la cadena no es polindromo"<<endl;
    
    return 0;
}
int contarCaracteres(char cad[])
{
    int caracteres=0;
    for (int i=0; cad[i]!='\0'; i++)
        caracteres++;
    return caracteres;
}
int compararCadena(char cad[], int contador)
{
    int comparacion=1;
    int maximo = (contador-1) /2;
    for (int i=0,j=contador-1; i<maximo; i++,j--) {
       /* cout<<"esta es la i en la posicion "<<i<<cad[i]<<endl;
        cout<<"esta es la j en la posicion "<<j<<cad[j]<<endl;*/
        if (cad[i]==' ')
            j++;
        else if(cad[j]==' ')
            i-=1;
        if (cad[i]!='\32' && cad[j]!='\32') {
            if (cad[i]==cad[j]){
                comparacion=0;
               // cout<<"adentro"<<endl;
            }
            else
                comparacion += 1;
        }
    }
    //cout<<"comparacion ->"<<comparacion<<endl;
    
    return comparacion;
}

