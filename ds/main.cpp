#include <iostream>
	using namespace std;
	int main()
	{
	    int a = 23, b = 5;
	    cout << "Ekleme: " << (a + b) << endl;
	    cout << "Cikarma: " << (a - b) << endl;
	    cout << "Carpma: " << (a * b) << endl;
	    cout << "Bolme: " << (a / b) << endl;
	 cout << "Mod alma: " << (a % b) << endl;
	 cout << "Arttirma: " << a++ << endl;
	 cout << "Arttirma: " << ++a << endl;
	 cout << "Azaltma: " << b-- << endl;
	 cout << "Azaltma: " << --b << endl;

	return 0;	}

/*
Kodun Çıktısı (Etkinlik sonunda öğrencilerle paylaşılır.)

Ekleme: 28
Cikarma: 18
Carpma: 115
Bolme: 4
Mod alma: 3
Arttirma: 23
Arttirma: 25
Azaltma: 5
Azaltma: 3

#include <iostream>
using namespace std;
int main()
{
    int x = 5, y = 4;
    cout << (x < y) << endl;
    cout << (x > y) << endl;
    cout << ((x-1) <= y) << endl;
    cout << (x >= (y+2)) << endl;
    cout << (x == y) << endl;
    cout << (x != y) << endl;
    return 0;
}

Kodun Çıktısı (Etkinlik sonunda öğrencilerle paylaşılır.)
0
1
1
0
0
1

#include <iostream>
using namespace std;
int main()
{
    int x = 5, y = 0;
    cout << ((x <= y) || (y>0)) << endl;
    cout << ((x > 4) && (y==0)) << endl;
    cout << (x && !y) << endl;
    cout << (!(x-2) || (y+2 > 2)) << endl;
    return 0;
}
Kodun Çıktısı (Etkinlik sonunda öğrencilerle paylaşılır.)

0
1
1
0

#include <iostream>
using namespace std;
int main()
{
    float x, y, z;
    x = 2.4;
    y = x;
    z = x + 1.3 + (y * 2.0);

    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
    cout << "z: " << z << endl << endl;

    x = y = 3.4;
    cout << "x: " << x << endl;
    cout << "y: " << y << endl << endl;

    x+= 5.1;
    y+= y * 2.0;
    cout << "x: " << x << endl;
    cout << "y: " << y << endl << endl;

    x/= 2.0;
    y*= 3.0;
    cout << "x: " << x << endl;
    cout << "y: " << y << endl << endl;

    return 0;
}

Kodun Çıktısı (Etkinlik sonunda öğrencilerle paylaşılır.)

x: 2.4
y: 2.4
z: 8.5

x: 3.4
y: 3.4

x: 8.5
y: 10.2

x: 4.25
y: 30.6

*/
