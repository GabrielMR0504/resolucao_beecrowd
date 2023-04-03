
// Calculando #3065
#include <iostream>
using namespace std;
 
int main() {
    int n_vezes, result = 0, num, cont = 1;
    cin >> n_vezes;
    
    while(n_vezes){
        cin >> num;
        result += num;
        for(int i = 1; i < n_vezes; i++){
            cin >> num;
            result += num;
        }
        printf("Teste %d\n", cont);
        printf("%d\n\n", result);
        cont++;
        cin >> n_vezes;
        result = 0;
    }
}
