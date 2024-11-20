#include <iostream>
using namespace std;
int main() 
{
  int i, j, multiplo;

  for (i = 1; i <= 10; i++) 
  {
    cout << i << ": ";
    for (j = 1; j <= 10; j++) 
    {
      multiplo = i * j;
      cout << multiplo << " ";
    }
    cout << "" << endl;
  }
}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
