//Criptotexto 2866

#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int main() {
  string input, res;
  int casos, n;
  cin >> casos;
  
  while (casos > 0) {
    cin >> input;
    
    for (int i = input.size() - 1; i >= 0; i--) {
      if (input[i] >= 'a') {
        res += input[i];
      }
    }
    
    printf("%s\n", res.c_str());
    res = "";
    casos--;
  }
}