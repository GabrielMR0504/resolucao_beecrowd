#include <iostream>
#include <math.h>
using namespace std;

int main() {
  float d, vf, vg, hip, temp_f, temp_g;

  while (cin >> d >> vf >> vg) {
    hip = sqrt(pow(12, 2) + pow(d, 2));
    temp_f = 12 / vf;
    temp_g = hip / vg;

    if (temp_g < temp_f) {
      cout << "S\n";
    } 
    else {
      cout << "N\n";
    }
  }
}