#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

//Não é possível usar rho com o método da bisseção.

int main (){

setlocale(LC_ALL, "Portuguese_Brazil");

    double A, inf, sup, D, media, media1, F, f1, x1, y1, f2, f3, tecla, fmedia, fmedia1;

    int B;

    printf("C�lculo da raiz quadrada de um n�mero\n\n");

    printf("Digite o n�mero ao qual se deseja encontrar a raiz:\n");
    scanf("%lf", &A);
    fflush(stdin);

    double rho;

    sup=1+A;
    inf=1;
    f1=(inf*inf)-A;
    f2=(sup*sup)-A;
    D=f1*f2;


            if(D<0){

                printf("Temos uma raiz no intervalo (%lf, %lf).\n", inf, sup);
                printf("Continuando... Pelo m�todo da bissec��oo, considere o ponto m�dio desse intervalo:\n" );

                media=(inf+sup)/2;
                fmedia=(media*media)-A;
                x1=fmedia*f1;
                y1=fmedia*f2;

                printf("O valor do ponto m�dio �: %lf.\n", media);

                if(fmedia==0){
                    printf("A raiz �: %lf.", media);
                }else{

                while(x1<0 || y1<0){

                    if(fmedia=0){
                    printf("O valor da raiz �:%lf.\n", media );
                    }else{
                         if(x1<0){
                    printf("A raiz est� no intervalo: (%lf, %lf).\n", inf, media);
                    sup=media;
                    }
                         if(y1<0){
                    printf("A raiz est� no intervalo: (%lf, %lf).\n", media, sup);
                    inf=media;
                         }

                    }



                media=(inf+sup)/2;
                fmedia=(media*media)-A;
                x1=fmedia*f1;
                y1=fmedia*f2;


                }}


                return 0;
            }


}