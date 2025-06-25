#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char linha[1001];
    
  
    scanf("%d", &n);
    getchar(); 
    
    
    for (int caso = 0; caso < n; caso++) {
        
        fgets(linha, sizeof(linha), stdin);
        
       
        int tamanho = strlen(linha);
        if (tamanho > 0 && linha[tamanho - 1] == '\n') {
            linha[tamanho - 1] = '\0';
            tamanho--;
        }
        
        
        for (int i = 0; i < tamanho; i++) {
            if ((linha[i] >= 'A' && linha[i] <= 'Z') || (linha[i] >= 'a' && linha[i] <= 'z')) {
                linha[i] = linha[i] + 3;
            }
        }
        
        
        for (int i = 0; i < tamanho / 2; i++) {
            char temp = linha[i];
            linha[i] = linha[tamanho - 1 - i];
            linha[tamanho - 1 - i] = temp;
        }
        
        
        int metade = tamanho / 2;
        for (int i = metade; i < tamanho; i++) {
            linha[i] = linha[i] - 1;
        }
        
        
        printf("%s\n", linha);
    }
    
    return 0;
}
