/* Christian Aldana 0909-21-697*/

/*<--- Declaración de Librerias --->*/
#include <iostream>
#include <conio.h>
#include <ostream>
#include <stdio.h>

using namespace std;

/*<-- Estructura Principal -->*/
int main(int argc, char** argv) {

    /*<-- Declaración de Variables -->*/

    //FUNCION QUE CALCULE LA FACTORIAL DE UN NUMERO.
    int Num_01Fact, Num_02Fact;
    int factorial=1;
    Num_02Fact=1;

    //FUNCION PARA GENERAR TABLAS DE MULTIPLICAR
    int  Num_01Tab;

    //Funcion para calcular numeros pares, y el promedio de los impares.
    int impares,n;
    int pares;
    int sumas_pares;
    int suma_impares;
    int x;
    suma_impares = 0;
    sumas_pares = 0;
    pares = 0;
    impares = 0;

    //DIAS DE LA SEMANA
    char dia;


    //GENERALES
    char op, opc1;



    /*<-- Estructura do -->*/
    do{
        system("cls");// Limpieza de pantalla


        /*<--ZONA DE COMENTARIOS-->*/

        /*<--Para seleccionar una funcion colocar el numero dentro del ()-->*/

        /*<- Mostrar en Pantalla ->*/

        cout<<"			***** PROGRAMA MULTIFUNCIONAL S.A  *****";  /*<-- TITULO DEL PROGRAMA -->*/

        cout<<"\n\nFUNCIONES:"<<endl;
        cout<<"CALCULAR FACTORIAL DE UN NUMERO (1)"<<endl;
        cout<<"GENERADOR DE TABLAS DE MULTIPLICAR (2)"<<endl;
        cout<<"CALCULAR NUMMEROS PARES (3)"<<endl;
        cout<<"DIAS LABORALES (4)"<<endl;
        cout<<"Opcion: ";
        cin>>op; //Ingreso de Valor a Variable


        /*<-- Estructura Switch -->*/
        switch(op){
            case '1':{ //FUNCION QUE CALCULE LA FACTORIAL DE UN NUMERO.
                cout<<"		<--- CALCULO FACTORIAL --->"<<endl<<endl;
                cout<<"Ingrese un numero "; cin>> Num_01Fact;

                while (Num_02Fact<=Num_01Fact) //El numero ingresado tiene que ser menor a el.
                {
                    factorial = factorial * Num_02Fact; //Multiplicar el numero ingresado por el factorial.
                    Num_02Fact = Num_02Fact+1;
                }
                cout<<"La factorial del numero ingresado es de : "<< factorial; //Respuesta.
                getch(); //Detener el programa
                break;
            }
            case '2':{ //FUNCION PARA GENERAR TABLAS DE MULTIPLICAR
                cout<<"       <--- GENERADOR DE TABLAS MULTIPLICAR --->"<<endl<<endl;

                do{
                    cout<<"Digite un numero: "; cin>>Num_01Tab; //Ingresar el dato.
                }while((Num_01Tab<1) || (Num_01Tab>10));

                for(int i=1;i<=30;i++){  //Generador de tablas hasta el 30.
                    cout<<Num_01Tab<<" * "<<i<<" = "<<Num_01Tab*i<<endl;  //COMO SALDRA EN PANTALLA LA ANSWER.
                }
                getch(); //Detener el Programa
                break;
            }
            case '3':{ //Funcion para calcular numeros pares, y el promedio de los impares.
                cout<<"       <--- FUNCION CALCULAR --->"<<endl<<endl;

                for (x=1;x<=10;x++) { //EL USUARIO DEBE DE INGRESAR 10 NUMEROS SEGUIDOS.
                    cout << "Ingrese un numero" << endl;
                    cin >> n; //CAPTAR EL NUMERO.

                    //Si el numero dividido 2, se utiliza un operador el cual dara el residuo de la operacion y si llega a 0 es par.
                    if (n%2==0) {
                        sumas_pares = sumas_pares+n; //Suman los numeros de la variable n
                        pares = pares+1; //Se suman los numeros pares y se cuentan.
                    } else {
                        suma_impares = suma_impares+n; //Suman los numeros de la variable n
                        impares = impares+1; //SE Suman las variables n + 1.
                    }
                }
                cout << "La suma de los numeros pares es de:" << sumas_pares << endl;
                cout << "Numeros pares:" << pares << endl;
                cout << "El promedio de numeros impares es: " << suma_impares/impares << endl;

                getch(); //Detener el Programa
                break;
            }
            case '4':{ //DIAS DE LA SEMANA
                cout<<"       <--- Dias de la semana --->"<<endl<<endl;
            cout << "Ingrese un dia de la semana para saber si es laboral o no.";

            //Cree una lista con abreviaturas para que el usuario pida un dia y el programa le diga si es laboral o no.
                cout<<"\nLunes (L)"<<endl;
                cout<<"Martes (M)"<<endl;
                cout<<"Miercoles (X)"<<endl;
                cout<<"Jueves (J)"<<endl;
                cout<<"Viernes (V)"<<endl;
                cout<<"Sabado (S)"<<endl;
                cout<<"Domingo (D)"<<endl;
                cout << "Ingrese la abreviatura para saber si el dia es laboral o no.";
                cin >> dia;

                switch (dia) {
                    case 'L' : cout << "El dia lunes es laboral.";
                        break;
                    case 'M' : cout << "El dia martes es laboral.";
                        break;
                    case 'X' : cout << "El dia miercoles es laboral.";
                        break;
                    case 'J' : cout << "El dia jueves es laboral.";
                        break;
                    case 'V' : cout << "El dia viernes es laboral.";
                        break;
                    case 'S' : cout << "El dia sabado no es laboral.";
                        break;
                    case 'D' : cout << "El dia Domingo no es laboral.";
                        break;
                    default: cout << "Usted ha ingresado un dia incorrecto.";
                }

            getch(); //Detener el progrma
            break;
            }

            default: { //Mensaje de Error
                cout<<"Este Operador es Invalido, Preciona enter para continuar";
                getch(); //Detener el programa
            }
        }

    } while ((op != '1') && (op != '2') && (op != '3') && (op != '4') && op != '5'); //Condicion while de salida

    getch(); //Detener el Programa
    return 0; //Devolver el valor de 0
}
/* Christian Aldana 0909-21-697*/
/* MI OPINION: Este parcial es uno de los mas interesantes que he realizado ya que nos piden
 * ejercicios combinados de funciones y procedimientos, ademas de trabajar con un IDE que
 * no habia tenido el placer de trabajar con tal, es muy bueno, los ejercicios en los lenguajes de
 * programacion usamos la logica a tal punto de ver soluciones los cuales no teniamos ni idea que
 * existian. "SI PUEDES IMAGINARLO, PUEDES PROGRAMARLO"*/
