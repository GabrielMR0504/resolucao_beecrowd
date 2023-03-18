#include <iostream>
using namespace std;
int main() {
  int quant_b, b, cont, prox;
  cin >> quant_b;
  int buracos[quant_b], tam_cam[quant_b];
  //cria array de buracos
  for(int i =0; i < quant_b; i++){
    cin >> b;
    buracos[i] = b - 1;
  }
  //salva para cada burado a quant. de movimentos para retornar a ele.
  cont = 1;
  for(int i =0; i < quant_b; i++){
      prox = buracos[i]; 
      
      for(int j = 0; j < quant_b; j++){
        cont++;
        prox = buracos[prox];
        
        if(prox == i){
          tam_cam[i] = cont;
          cont =1;
          break;
      }
    }
  }

  bool calculo = true, tem_div = false, todos_1 = true;
  int div =2, mmc = 1;
  // calcula o mmc do tamanho dos caminhos 
  while(calculo){
    for(int i = 0; i < quant_b; i++){
       if(tam_cam[i]%div == 0){
         tam_cam[i] = tam_cam[i]/div;
         tem_div = true;
       }

      if(tam_cam[i] == 1 && todos_1 != false){
        todos_1 = true;
      }
      else{
        todos_1 = false;
      }
    }

    if(tem_div){
      mmc *= div;
    }
    else{
      div++;
    }

    if(todos_1){
      calculo = false;
    }

    todos_1 = true;
    tem_div = false;
  }

  printf("%d\n", mmc);
  
  
}