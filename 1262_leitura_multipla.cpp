#include <iostream>
using namespace std;

int main() {
  string input;
  int proc, cont_r = 0, cont_w = 0, ciclos = 0;

  while (cin >> input >> proc) {
    for (int i = 0; i < input.size(); i++) {
      if (input[i] == 'R') {
        cont_r += 1;
        cont_w = 0;

        if (input[i + 1] != 'R') {
          ciclos += cont_r / proc;
          if (cont_r % proc) {
            ciclos++;
          }
        }
      }

      if (input[i] == 'W') {
        cont_w += 1;
        cont_r = 0;
        ciclos++;
      }
    }
    printf("%d\n", ciclos);
    cont_r = 0;
    cont_w = 0;
    ciclos = 0;
  }
  printf("%d\n", ciclos);
}