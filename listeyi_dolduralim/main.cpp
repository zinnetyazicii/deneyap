
// Oda 1 : Bit Ve (&) Operatörü


#include <iostream>
using namespace std;
int main()
{
    int x = 27;         // x = 0001 1011
    int y = 58;         // y = 0011 1010
    int z = x & y;      // z = 0001 1010
    cout << "Sonuc: " << z << endl;
    return 0;
}
/*
//Sonuc: 26

//Oda 2 : Bit Veya (|) Operatörü

#include <iostream>
using namespace std;
int main()
{
    int x = 23;         // x = 0001 0111
    int y = 78;         // y = 0100 1110
    int z = x | y;      // z = 0101 1111
    cout << "Sonuc: " << z << endl;
    return 0;

//Sonuc: 95

//Oda 3 : Bit Özel Veya (^) Operatörü

#include <iostream>
using namespace std;
int main()
{
    int x = 23;         // x = 0001 0111
    int y = 78;         // y = 0100 1110
    int z = x ^ y;      // z = 0101 1001
    cout << "Sonuc: " << z << endl;
    return 0;
}


//Sonuc: 89

//Oda 4 : Bit Saða (>>) Öteleme Operatörü
#include <iostream>
using namespace std;
int main()
{
    int x = 23;         // x = 0001 0111
    int y = x >> 1;     // y = 0000 1011
    cout << “23 >> 1: “ << y << endl;

    y = x >> 3;         // y = 0000 0010
    cout << “23 >> 3: “ << y << endl;
    return 0;
}
//23 >> 1: 11
//23 >> 3: 2

//Oda 5  : Bit Sola (<<) Öteleme Operatörü

#include <iostream>
using namespace std;
int main()
{
    y = x << 1;         // y = 0010 1110
    cout << "23 << 1: " << y << endl;

    y = x << 3;         // y = 1011 1000
    cout << "23 << 3: " << y << endl;
    return 0;
}

//23 << 1: 46
//23 << 3: 184

//Bit Deðil (~) Operatörü
#include <iostream>
using namespace std;
int main()
{
    unsigned char x = 23;   // x = 0001 0111
    unsigned char y = 78;   // y = 0100 1110
    unsigned char z = ~x;   // z = 1110 1000
    cout << "~23: " << (int)z << endl;

    z = ~y;                 // z = 1011 0001
    cout << "~78 : " << (int)z << endl;
    return 0;
}

//~23: 232
//~78 : 177

*/


