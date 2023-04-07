#include <stdio.h>

int main(){
    /*Faça um programa que calcule o maior número palíndromo feito a partir do produto de
dois números de 3 dígitos.*/
    int a = 100,b = 100;
    int produto = a*b; //10.000
    int uni,dez,cem,mil,dezmil,cemmil,palindromo,result = 1;
    while (a<= 1000)
    {
        while (b<=1000)
        {        
        produto = a*b;
        cemmil = produto/100000;
        dezmil = (produto%100000)/10000;
        mil = (produto%10000)/1000;
        cem = (produto%1000)/100;
        dez = (produto/10)%10;
        uni = produto%10;
        if ((cemmil == uni) && (dez == dezmil) && (mil == cem))
        {
            //condicional para verificar se o numero é palindromo
            palindromo = produto;
        }
        b++;
        }
        if (result < palindromo)
        { //condicional para achar o maior valor de palindromos.
            result = palindromo;
        }
        b = 100;
        a++;
    }
    printf("O maior palindromo feito a partir do produto de 2 numeros de 3 digitos: %i\n",result);
    return 0; 
}