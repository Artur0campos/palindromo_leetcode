//
//  main.c
//  leetCodePalindromo
//
//  Created by Artur Campos on 20/02/25.
//

#include <stdio.h>

_Bool isPalindrome(int x) {
    
    //verificação de caso base, para caso seja um numero nulo(zero) ou um numero negativo
    if (x == 0){
            printf("true");
            return 1;
        }

        if( x < 0){
            printf("false \n");
            return 0;
        }
        
        // Contar quantos dígitos o número tem
        int temp = x, qtd_digitos = 0;
        while (temp > 0) {
            temp /= 10;
            qtd_digitos++;
        }
        
        // Criar um array com o tamanho certo
        int digitos[qtd_digitos];
        
        // Preencher o array com os dígitos do número
        for (int i = qtd_digitos - 1; i >= 0; i--) {
            digitos[i] = x % 10; // Pega o último dígito
            x /= 10;             // Remove o último dígito
        }
        // descobrindo o tamanho do array, atraves da divisão entre bytes e o tamanho de cada elemento ocupa
        int num_elementos;
        num_elementos = (int) sizeof(digitos) / sizeof(int);
       
        //
        int pointer1 = 0, pointer2 = num_elementos - 1;
        while (pointer1 <=  pointer2 ) {
            if(digitos[pointer1] != digitos[pointer2] ){
                printf("false \n");
                return 0;
                break;
            }
            pointer1++;
            pointer2--;
            }
        printf("true \n");
        return 1;
}
   


int main(void) {
    isPalindrome(10);
    return 0;
}
