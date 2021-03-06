#define NDEBUG
#include <cassert>
using namespace std;
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
    assert (2 - 3 == -1);
    assert (2 * 2 == 4);
    assert (2 / 2 == 1);
    assert (3 % 2 == 1);
    assert (2 != 3);
    assert (2 >=2);
    assert (3 < 4 );

    // Tipo de dato Unsigned
    assert (3u >= 3u);

    // Tipo de dato Char
    assert ('a' == 'a');
    assert ('a' != 'b');
    assert ('A' + 1 == 'B');
    assert ('Z' - 1 == 'Y');
    assert (char(64) == '@');

    // Tipo de dato Double
    assert (3.5 != 3.8 );
    assert (3.5 + 0.1 == 3.6);
    assert (1.0/10.0 == 0.1);
    assert (10e3 == 10000);
    
    // Tipo de dato String
    assert ("hola"s == "hola"s);
    assert ("chau"s != "hola"s);
    assert (string ("Riquelme"s).length()>5);
    assert (string("Boca"s)+string("Juniors"s)=="BocaJuniors"s);

    
}
