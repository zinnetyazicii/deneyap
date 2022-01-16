#include <iostream>
using namespace std;
int main()
{
    int x = 23;         // x = 0001 0111
    int y = 78;         // y = 0100 1110
    int z = x | y;      // z = 0101 1111
    cout << "Sonuc: " << z << endl;
    return 0;
}
