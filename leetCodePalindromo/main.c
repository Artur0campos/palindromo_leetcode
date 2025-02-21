//
//  main.c
//  leetCodePalindromo
//
//  Created by Artur Campos on 20/02/25.
//

#include <stdio.h>

int main(void) {
        int numero;
        printf("Digite um número: ");
        scanf("%d", &numero);
        
        // Contar quantos dígitos o número tem
        int temp = numero, qtd_digitos = 0;
        while (temp > 0) {
            temp /= 10;
            qtd_digitos++;
        }
        
        // Criar um array com o tamanho certo
        int digitos[qtd_digitos];
        
        // Preencher o array com os dígitos do número
        for (int i = qtd_digitos - 1; i >= 0; i--) {
            digitos[i] = numero % 10; // Pega o último dígito
            numero /= 10;             // Remove o último dígito
        }
        
        int num_elementos;
        num_elementos = sizeof(digitos) / sizeof(int);
        printf("%d", num_elementos);
}
