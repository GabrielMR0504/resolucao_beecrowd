// Par ou impar 2286
#include <iostream>

using namespace std;

int main() {
  int n_vezes, num_1, num_2, cont = 0;
  string jog_1, jog_2;
  cin >> n_vezes;
  while (n_vezes) {
    cont++;
    cin >> jog_1 >> jog_2;
    printf("Teste %d\n", cont);
    for (int i = 0; i < n_vezes; i++) {
      cin >> num_1 >> num_2;
      if ((num_1 + num_2) % 2) {
        printf("%s\n", jog_2.c_str());
      } else {
        printf("%s\n", jog_1.c_str());
      }
    }
    printf("\n");
    cin >> n_vezes;
  }
}