#include <stdio.h>

void calculoValorLucro (){
    float custo, venda, lucro;

    printf("=====Valor do Lucro=====\n");
    printf("Digite o valor do custo: \n");
    scanf("%f", &custo);

    printf("Digite o valor do venda: \n");
    scanf("%f", &venda);
  
    lucro = venda - custo;
    printf("O valor de lucro é de %.3f", lucro);
    return 0;
}

void calculoPrecoVenda(){
    float precoDeCusto, precoVenda;
    #define PRECENTURAL_DE_LUCRO 0.2

    printf("=====Preco de Venda=====\n");

    printf("Preco de custo: \n");
    scanf("%d", &precoDeCusto);

    precoVenda = precoDeCusto + ((precoDeCusto * (PRECENTURAL_DE_LUCRO))/ 100);
    printf("O valor de venda é de: %.3f", precoVenda);
}

void calculoPercentualLucro(){
    float precoVenda, precoCusto, percentualDeLucro;
    printf("==== Percentual de lucro ====\n");

    printf("Preco de custo: \n");
    scanf("%f", &precoCusto);

    printf("Preco de venda: \n");
    scanf("%f", &precoVenda);

    percentualDeLucro = (precoVenda - precoCusto) / precoCusto * 100;
    printf("O prencentual de lucro é: %f", percentualDeLucro);

}



int main(){
    int opcao;

do{

    printf("\n=====Calculo Financeiro=====\n");
    printf("1 - calcular o valor de lucro\n");
    printf("2 - calcular o preco de venda\n");
    printf("3 - calcular o percentual de lucro\n");
    
    
    printf("   \nOpcao: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        calculoValorLucro();
        break;
    case 2:
        calculoPrecoVenda();
        break;
    case 3:
        calculoPercentualLucro(); 
        break;    

    default:
        printf(">>>Opcao invalida<<<");
        break;
    }

    if (opcao == 0){
        printf("==== Programa encerrado ====");
        break;
    }

} while (1);


    return 0;
}