/* EjemploTipos.cpp
 * Ejemplos de Valores y Operaciones de Tipos de Datos
 * Fabián Belmonte
 * 20220550
 */

#include <string>   // Incluye la biblioteca de string
#include <cassert>  // Incluye la biblioteca cassert para poder utilizar el assert
               
int main() {   

//Tipo de dato Boolean
    assert (true);
    assert (false==false);
    assert (not false == true);
    assert (not false);
    assert (false == not true);
    assert (true and true = true);
    assert ((false and false) == false);

// Tipo de dato double
    assert (8.0 == 5.0 + 3.0);
    assert (20.0 == 5.0*4.0);
    assert (3.0 - 1.0 == 2.0);
    assert(3.5 + 3.5 == 7.0);
    assert(12.00 > 11.99);

//Tipo de dato Entero
    assert(2500 == 5*500);
    assert(678 == 678);             
    assert(20 != 10+15);
    assert(15 + 15 == 30);
    assert(-20 + 10 == -10);
    assert(7 * 7 != 21);
    assert(-1 > -2);
    assert(25/5 > 4);    

//Tipo de dato Character
    assert('A' + 10 == 'K');
    assert('K' - 'A' == 65);
    assert('A' + 'K' == 140);
    assert('a' != 'b'); 
   
//Tipo de dato String
    assert(10 == std::string("Hola Mundo").length()); 
    assert ("Fabian" < "Fabian_Pablo");
}