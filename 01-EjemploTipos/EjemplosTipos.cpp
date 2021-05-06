#define NDEBUG
#include <iostream>
#include <cassert>

int main () {
    // Tipo de dato bool
    assert (true == true and true);
    assert (true == true  or false );
    assert (2 != 2 == false);
    assert (2 >= 2 == true);
    assert (2 <= 2 == true);
    assert (2 and (not 2) == false);

// Tipo de dato Int
    assert (2 + 2 == 4);
    assert (2 - 2 == 0);
    assert (2 * 2 == 4);
    assert (2 / 2 == 1);
    assert (3 % 2 == 1);
    assert (2 != 3);
    assert (2 >=2);
    assert (3 < 4 );

// Tipo de dato Unsigned


    // Tipo de dato Char
    assert ('a' == 'a');
    assert ('a' != 'b');

    // Tipo de dato Double
    assert (3.5 != 3.8 );
    assert (3.5 + 0.1 == 3.6);
    
    // Tipo de dato String
    assert ("hola" == "hola");
    assert ("chau" != "hola");

}