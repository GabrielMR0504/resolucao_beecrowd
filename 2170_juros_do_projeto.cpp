//Juros do Projeto 2170
#include <iostream>
using namespace std;
 
int main() {
    int cont = 1;
    double x, y, juros;
    
    while(cin >> x >> y){
    juros = (y/x - 1) * 100;
    printf("Projeto %d:\nPercentual dos juros da aplicacao: %.2f %\n\n", cont, juros);
    cont ++;
    }
}