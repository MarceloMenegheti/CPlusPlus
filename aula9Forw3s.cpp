#include <iostream>
#include <string>
#include <cmath>
#include <fstream>

using namespace std;
int main(){

  // Outer loop //externo
  for (int i = 1; i <= 2; ++i) {
    cout << "Externo: " << i << "\n";// Executes 2 times
    // Inner loop // interno
    for (int j = 1; j <= 3; ++j) {
      cout << "\tInterno: " << j << "\n";// Executes 6 times (2 * 3)
    }
}
return 0;
}