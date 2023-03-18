//Criptografia 1024
#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int main() {
  int n_testes;
  string input, result = "";
  cin >> n_testes;
  // limpa buffer
  getline(cin, input);

 // le linhas de entrada
  for (int j = 0; j < n_testes; j++) {
    getline(cin, input);
    // desloca 3 posicoes a direita cada letra
    for (int i = 0; i < input.size(); i++) {
      if ((input[i] >= 'A' && input[i] <= 'Z') || (input[i] >= 'a' && input[i] <= 'z')) {
        result += char(int(input[i]) + 3);
      } else {
        result += char(input[i]);
      }
    }
    // inverte string
    input = result;
    for (int i = 0; i < input.size(); i++) {
      result[i] = input[input.size() - 1 - i];
    }
    // seta posicao da metada da string
    int metade = input.size() / 2;
    input = result;
    // desloca a metade da strig 1 posicao
    for (int i = metade; i < input.size(); i++) {
      result[i] = char(int(input[i]) - 1);
    }

    printf("%s\n", result.c_str());
    result = "";
  }
}