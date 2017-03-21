
#include <iostream>
#include <vector>
#include <cmath>

std::vector<int> mochila(
    int *pesos,
    int *valores,
    int total,
    int capacidade)
{
    std::vector<int> resultado;
    int tabela[total+1][capacidade+1];

    int i;
    int b;
    int x;
    int x_aux;

    for(i=0;i<=total;i++) {

        for(b=0;b<=capacidade;b++) {
            
            if(i==0 || b==0) {
                // mochila vazia ou 0 itens

                tabela[i][b] = 0;
                
            } else if( pesos[i-1] <= b) {
                // ainda há espaço na mochila

                x = tabela[i-1][b];
                x_aux = valores[i-1] + tabela[i-1][b-pesos[i-1]];
                // lucro maior com ou sem pi?
                tabela[i][b] = std::max(x, x_aux);

            } else {
                // mochila cheia
                
                x = tabela[i-1][b];
                tabela[i][b] = x;
            }
            
        }
        
    }

    b = capacidade;
    for(i=total;i>=1;i--) {
        
        if(tabela[i][b] != tabela[i-1][b]) {
            resultado.push_back(i-1);
            b = b - pesos[i-1];
        }

    }

    return resultado;
}


int main() {

    int capacidade;
    int total;

    std::cin >> total >> capacidade;

    int pesos[total];
    int valores[total];

    for(int i=0;i<total;i++) {
        std::cin >> pesos[i];
    }
    for(int i=0;i<total;i++) {
        std::cin >> valores[i];
    }

    int valor = 0;
    std::vector<int> r = mochila(pesos, valores, total, capacidade);

    for(int i : r) {
        std::cout << i+1 << std::endl;
        valor += valores[i];
    }

    std::cout << "Valor: " << valor << std::endl;

    return 0;
}