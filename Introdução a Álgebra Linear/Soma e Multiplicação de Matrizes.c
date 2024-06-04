#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

#define N 20




int main (){
setlocale(LC_ALL, "Portuguese");

printf("---------- MATRIZES ----------\n\n");

int i, j;
int m, n;
int o, p;
int q, r;
char adc[N]={"somar"};
char subtr[N]={"subtrair"};
char mult[N]={"multiplicar"};
char digite[N];
int somar;
int subtrair;
int multiplicar;

printf("Insira o n�mero de linhas 'i' e o n�mero de colunas 'j' da matriz A:\n");
printf("N�mero de linhas i=");
scanf("%d", &i);
fflush(stdin);

printf("\nN�mero de colunas j=");
scanf("%d", &j);
fflush(stdin);


 int mat1[i][j];


 printf("\nAgora, preencha a matriz A.\n");

 for(m=0; m<i; m++){
    for(n=0; n<j; n++){
            printf("Digite o valor do elemento ij=%d%d: \n", m, n);
            scanf("%d", &mat1[m][n]);
            fflush(stdin);

    }
 }

  printf("Imprimindo a matriz A:\n");
  printf("A = \n");
    for(m=0; m<i; m++){
        for(n=0; n<j; n++){
            printf("%d ", mat1[m][n]);
        }
        printf("\n");
    }


printf("\n----------------------------------------------------\n");

printf("Agora, insira o n�mero de linhas 'm' e o n�mero de colunas 'n' da matriz B:\n");
printf("N�mero de linhas m=");
scanf("%d", &o);
fflush(stdin);

printf("\nN�mero de colunas n=");
scanf("%d", &p);
fflush(stdin);


 int mat2[o][p];


 printf("\nAgora, preencha a matriz B.\n");

 for(q=0; q<o; q++){
    for(r=0; r<p; r++){
            printf("Digite o valor do elemento ij=%d%d: \n", q, r);
            scanf("%d", &mat2[q][r]);
            fflush(stdin);

    }
 }

  printf("Imprimindo a matriz B:\n");
  printf("B = \n");
    for(q=0; q<o; q++){
        for(r=0; r<p; r++){
            printf("%d ", mat2[q][r]);
        }
        printf("\n");
    }
do{
printf("\n------------------------------------------------------------------\n");
printf("Voc� quer somar, subtrair ou multiplicar?\n");
scanf("%s", &digite);
fflush(stdin);

somar=strcmp(adc, digite);
subtrair=strcmp(subtr, digite);
multiplicar=strcmp(mult, digite);

int e, f, x, y;
int k=i;
int l=j;
int mat3[k][l];


if(somar==0){
    printf("\nEnt�o voc� quer somar.\n");


for(x=0; x<i; x++){
        for(y=0; y<j; y++){

    mat3[x][y]=mat1[x][y]+mat2[x][y];

        }
    }
    printf("\n---------------------------------------------\n");
    printf("\nEsta � a soma dessas duas matrizes:\n\n\n");

    printf("A + B = \n");
    for(x=0; x<i; x++){
        for(y=0; y<j; y++){
            printf("%d ", mat3[x][y]);
        }
        printf("\n");
    }

}
if(subtrair==0){
    printf("\nEnt�o voc� quer subtrair.\n");

    for(x=0; x<i; x++){
        for(y=0; y<j; y++){

    mat3[x][y]=mat1[x][y]-mat2[x][y];

        }
    }
    printf("\n---------------------------------------------\n");
    printf("\nEsta � a subtra��o dessas duas matrizes:\n\n\n");

    printf("A - B = \n");
    for(x=0; x<i; x++){
        for(y=0; y<j; y++){
            printf("%d ", mat3[x][y]);
        }
        printf("\n");
    }

}
if(multiplicar==0){
    if(j==o){
    printf("\n---------------------------------------------\n");
    printf("\nEsta � a multiplica��o dessas duas matrizes:\n\n\n");

    int v, w, y, z, al;
    int matmult[i][p];

     for(v=0; v<i; v++){
        for(w=0; w<j; w++){
                for(al=0; al<j; al++){

    matmult[v][w]+=mat1[v][al]*mat2[al][w];}

        }
    }

     for(x=0; x<i; x++){
        for(y=0; y<p; y++){
            printf("%d ", matmult[x][y]);
        }
        printf("\n");
    }

    }else{
    printf("O n�mero de colunas da matriz A n�o � igual ao n�mero de linhas da matriz B. Logo, � imposs��vel efetuar a multiplica��o.\n");
}
}
}while(i>0 && j>0);



return 0;}
