#include <stdio.h>

int main()
{
    int op; 
    float a, b;
    char escolha;
    while(1){
    printf("===============================\nCalculadora Simples\n===============================\nSelecione uma operação:\n1. Adição\n2. Subtração\n3. Multiplicação\n4. Divisão\n5. Sair\nOpção: ");
    do{
    scanf("%d", &op);
    if(op < 1 || op > 5) {
    printf("Erro! Operação inexistente. Tente novamente.\n");
    }
    } while(op < 1 || op > 5);
    if(op==1){
        printf("Digite o primeiro número: ");
    scanf("%f", &a);
    printf("Digite o segundo número: ");
    scanf("%f", &b);
        printf("Resultado: %.2f + %.2f= %.2f", a, b, a+b);
    }
    else if(op==2){
        printf("Digite o primeiro número: ");
    scanf("%f", &a);
    printf("Digite o segundo número: ");
    scanf("%f", &b);
        printf("Resultado: %.2f - %.2f = %.2f", a, b, a-b);
    }
    else if(op==3){
        printf("Digite o primeiro número: ");
    scanf("%f", &a);
    printf("Digite o segundo número: ");
    scanf("%f", &b);
        printf("Resultado: %.2f * %.2f = %.2f", a, b, a*b);
    }
    else if(op==4){
        printf("Digite o primeiro número: ");
    scanf("%f", &a);
    printf("Digite o segundo número: ");
    scanf("%f", &b);
        if(b!=0){
        printf("Resultado: %.2f / %.2f = %.2f", a, b, a/b);
        }
        else{
            printf("Erro: Divisão por zero não é permitida.");
        }
    }
    else if(op==5){
        printf("Obrigado por usar a calculadora! Até a próxima.");
        break;
    }
    getchar();
    printf("\nDeseja realizar outra operação? (s/n): ");
    do{
        scanf("%c", &escolha);

        if(escolha != 's' && escolha != 'n'){
            printf("Resposta inválida. Por favor, digite 's' para sim ou 'n' para não.\n");
        }
        } while(escolha != 's' && escolha != 'n');

        if(escolha == 'n') {
            printf("Obrigado por usar a calculadora! Até a próxima.\n");
            break;
        }
    }
    return 0;
}
