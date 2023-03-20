//Matring 1803

#include <iostream>
#include <math.h>
using namespace std;

int main() {
  string linha;
  int tam;
  cin >> linha;
  tam = linha.size();
  int matriz[4][tam];

  // monta a matriz com os valores de entrada
  for (int i = 0; i < 4; i++) {
    //nao le entrada na primeira iteracao
    if (i != 0) {
      cin >> linha;
    }
    for (int j = 0; j < tam; j++) {
      // converte num. char em int
      matriz[i][j] = linha[j] - '0';
    }
  }
  
  int vet_num[tam];

  // converte os numeros das colunas em um vetor de inteiros
  for (int i = 0; i < tam; i++) {
    vet_num[i] = 0;
    for (int j = 0; j < 4; j++) {
      vet_num[i] += matriz[j][i] * pow(10, 3 - j);
    }
  }

  string result = "";

  // realiza o calculo para para descobrir a string
  for (int i = 1; i < tam - 1; i++) {
    result += ((vet_num[0] * vet_num[i]) + vet_num[tam - 1]) % 257;
  }
  printf("%s\n", result.c_str());
}