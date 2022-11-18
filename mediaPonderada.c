#include <stdio.h>

float media (float n1, float n2, int n3){
   float mediaPonderada;

    if (n1 < n2 && n1 < n3){
        if (n2 < n3){
            mediaPonderada = ((6 * n3) + (4 * n2)) / 10;
        }
        else{
            mediaPonderada = ((6 * n2) + (4 * n3)) / 10;
        }
    }

    if (n2 < n1 && n2 < n3){
        if (n1 < n3){
            mediaPonderada = ((6 * n3) + (4 * n1)) / 10; 
        }
        else{
            mediaPonderada = ((6 * n1) + (4 * n3)) / 10;
        }    
    }

    if (n3 < n2 && n3 < n1){
        if (n1 < n2){
            mediaPonderada = ((6 * n2) + (4 * n1)) / 10;
        }else{
            mediaPonderada = ((6 * n1) + (4 * n2)) / 10;
        }     
    }
    
    printf("MEDIA: %.2f\n", mediaPonderada);

    if(mediaPonderada > 7){
        printf("Aprovado\n");
    }else{
        printf("Reprovado\n");
    }

   return 0;

}

int main(){
    int resultado, i;
    int notas[2];

   for (i = 0; i <3; i++)
    {
        printf("Digite as tres notas");
        scanf("%d", &notas[i]);
    }

    resultado = media(notas[0], notas[1], notas[2]);


return 0;
}