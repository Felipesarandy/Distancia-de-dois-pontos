#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Prot�tipo
float distancia(float Px, float Py, float Qx, float Qy);

//Fun��o: dist�ncia entre os pontos
float distancia(float Px, float Py, float Qx, float Qy)
{
    float D;
    D = sqrt(pow(Px - Qx, 2) + pow(Py - Qy, 2));
    return D;
}

int main(void)
{
    int opcao;
    float Px, Qx, Qy, Py, D;
    printf("MENU\n");
    printf("1: CALCULAR E EXIBIR A DISTANCIA ENTRE P E Q\n");
    printf("0: SAIR\n");

    do{
        printf("SUA OP��O: ");
        scanf("%f", &opcao);
        if(opcao == 0) printf("FIM DO PROGAMA. \n");

        else if(opcao != 1)
            printf("ERRO: ESCOLHA DE NOVO\n");

        else{
            printf("DADOS DE ENTRADA: ");
            printf("COORDENADA X - PONTO P: ");
            scanf("%f", &Px);
            printf("COORDENADA Y - PONTO P: ");
            scanf("%f", &Py);
            printf("COORDENADA X - PONTO Q: ");
            scanf("%f", &Qx);
            printf("COORDENADA Y - PONTO Q: ");
            scanf("%f", &Qy);

            //Sem tratamento de erro

            //chamando a fun��o
            D = distancia(Px, Py, Qx, Qy);

            //sa�da
            printf("DISTANCIA ENTRE P(%.1f, %.1f) e Q(%.1f, %.1f) = %.1f\n\n",
                   Px, Py, Qx, Qy, D);
        }

    }while(opcao != 0);
    return 0;
}
