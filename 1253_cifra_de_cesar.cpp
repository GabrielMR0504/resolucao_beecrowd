#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int main() {
  string input;
  int casos, n;
  cin >> casos;

  while (casos > 0) {
    cin >> input;
    string resposta(input.size(), ' ');
    cin >> n;

    for (int i = 0; i < input.size(); i++) {
      if ((input[i] - n) < 'A') {
        int dif = n - (input[i] - 'A' + 1);
        resposta[i] = 'Z' - dif;
      } 
      else {
        resposta[i] = input[i] - n;
      }
    }
    casos--;
    printf("%s\n", resposta.c_str());
  } 
}