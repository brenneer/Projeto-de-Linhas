#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
using namespace std;

int main (){
    setlocale(LC_ALL, "Portuguese");
    printf ("Sabendo o impedancia caracteristica -> Zo, espessura do substrato -> h e permissividade relativa do substratato -> pr, será encontrato a largura da linha -> w, a permissividade relativa efetiva ->pre e a velocidade de propagação ->vp \n");
    //definição de variáveis
    float zo, h, er, w, pre, vp;

    // inserção de dos dados de largura, espessura e perm. relat. do sub.
    printf ("Insira a largura da linha:");
    scanf ("%f",&w);
    
    printf ("\n Insira a espessura do substrato:");
    scanf ("%f",&h);

    printf ("\n Insira a permissividade relativa do substrato:");
    scanf ("%f",&er);

    // cálculo para perm. relativa efetiva

    float numero,raiz;
    numero =(1+12*(h/w));
    raiz == sqrt(numero);
    
    pre = ((er+1)/2 +(er-1)/(2*numero));
    
    // cálculo para velocidade de propagação

    vp = pow(2.998,8)/sqrt(pre);

    int pi;
    pi=3,14159;

    if((w/h) < 1|| (w/h)==1){

     zo= (60 * log(8*(h/w)+(w/(4*h))))/ (sqrt(pre))  ;
     }
        else if ((w/h) > 1){

            zo = (120*pi)/(sqrt(pre)) * ((w/h)+1.393+0.667*log((w/h)+1.444));//olhar os parenteses depoois
        }

    //Apresentação de resultados

    printf(" Permissividade relativa efetiva %0.2f \n",pre );

    printf(" Velocidade de Propagação %0.2fms \n",vp );
    
    printf(" Impedancia caracteristica %0.2fohms",zo );

    printf ("Obrigado po usar o programa!");
    

    return 0;
}