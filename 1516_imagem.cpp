#include <iostream>
 
using namespace std;
 
int main() {
    int alt_a, larg_a, alt_n, larg_n;
    string pixel_l, pixel_a, linha;
    while(cin >> alt_a >> larg_a){;
      if(alt_a != 0 || larg_a != 0){
        char matriz_input[alt_a][larg_a];
      
        for(int i = 0; i < alt_a; i++){
            cin >> linha;
            for(int j = 0; j < larg_a; j++){
              matriz_input[i][j] = linha[j];
            }
        }
      
        cin >> alt_n >> larg_n;
        int px_i = 0, px_j = 0;
      
        for(int i = 1; i <= alt_n; i++){
            for(int j = 1; j <= larg_n; j++){
                printf("%c", matriz_input[px_i][px_j]);
                if(j%(larg_n/larg_a) == 0){
                    px_j ++;
                    //printf("px_j:%d\n",px_j);
                }
            }
            px_j = 0;
            printf("\n");
            if(i%(alt_n/alt_a) == 0){
                px_i ++;
            }
        }
        printf("\n");
      }
    }   
  }

