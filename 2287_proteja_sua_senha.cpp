// Proteja sua Senha 2287
#include <iostream>

using namespace std;

int main() {
  int n_vezes, n_teste = 1;
  string resp = "";
  char n;
  cin >> n_vezes;
  while (n_vezes) {
    char m_comb[6][2 * n_vezes];
    for (int h = 0; h < n_vezes; h++) {
      string comb_num = "", senha_cod = "";

      // guarda associacao de numeros
      for (int i = 0; i < 10; i++) {
        cin >> n;
        comb_num += n;
      }
      // printf("senha_cod: %s\n", comb_num.c_str());
      // guarda senha codificada
      for (int i = 0; i < 6; i++) {
        cin >> n;
        senha_cod += n;
      }
      // printf("senha_cod: %s\n", senha_cod.c_str());
      char n_1, n_2;
      // monta matriz que relaciona comb. numeros com senhas codif.
      for (int i = 0; i < 6; i++) {
        n_1 = comb_num[(senha_cod[i] - 'A') * 2];
        n_2 = comb_num[(senha_cod[i] - 'A') * 2 + 1];
        // printf("n1: %c n2: %c\n", n_1, n_2);
        m_comb[i][2 * h] = n_1;
        m_comb[i][2 * h + 1] = n_2;
      }
    }
    printf("Teste %d\n", n_teste);
    // descobre senha a partir da matriz a senha
    for (int i = 0; i < 6; i++) {
      for (int j = 0; j < 2; j++) {
        int cont = 1;
        for (int k = 2; k < n_vezes * 2; k++) {
          if (m_comb[i][j] == m_comb[i][k]) {
            cont++;
          }
        }
        if (cont == n_vezes) {
          printf("%c ", m_comb[i][j]);
          break;
        }
      }
    }
    cin >> n_vezes;
    n_teste++;
    printf("\n\n");
    resp = "";
  }
}