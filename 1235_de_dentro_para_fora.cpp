#include <iostream>
#include <string.h>

using namespace std;

int main() {
  int n, metade;
  string input, palavra = "";
  cin >> n;
  getline(cin, input);

  for (int i = 0; i < n; i++) {
    getline(cin, input);
    metade = input.size() / 2;
    
    for (int j = metade - 1; j >= 0; j--) {
      palavra += input[j];
    }
    
    for (int h = input.size() - 1; h >= metade; h--) {
      palavra += input[h];
    }
    
    printf("%s\n", palavra.c_str());
    palavra = "";
  }
}