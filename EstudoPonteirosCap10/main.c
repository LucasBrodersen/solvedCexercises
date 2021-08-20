#include <stdio.h>
#include <stdlib.h>

/* //funcao ex 7
int verifica(char *string1, char *string2){
    int i, j, auxiliar = 0;
    printf("\nteste valor 3 da string1 %c", string1[3]);
    printf("\nteste valor 3 da string2 %c", string2[3]);
    for(i = 0, j = 0; string1[i]!= '\0'; i++){
        // enquanto as posicoes das strings forem iguais
        while( string1[i] == string2[j] ){
            i++;
            j++;
            // se acabou a segunda string
            if( string2[j] == '\n' || string2[j] == '\0') // \n nova linha \0 end of line
                return 1;
            // se nao eh mais igual, faz auxiliar ser 0
            else if( string1[i] != string2[j])
                auxiliar = 0;
        }
    }
    return auxiliar;
}
*/

/* //funcao ex 8
void preencherVetor(int *vetor, int valor){
	int i;
	// preenche o vetor com o valor
	for(i = 0; i < 10; i++)
		*(vetor + i) = valor; // nesa linha estamos usando aritmetica de ponteiros
	// imprime os valores do vetor
	for(i = 0; i < 10; i++)
		printf("%d ", vetor[i]); // nesta nao
	printf("\n");
}
*/
/*// funcao ex9
void printVector ( int *vetor)
    {
        for(int i = 0; i < 10; i++)
		printf("%d ", *(vetor + i)); // nesta nao
        printf("\n");

    }
*/


int main()
{

    //exercicio 10 - Considere a seguinte declaração: int a,*b,**c,***d. Escreva um programa que leia
    //a variável a e calcule e exiba o dobro, o triplo e o quádruplo desse valor utilizando
    // apenas os ponteiros b, c e d. O ponteiro b deve ser usado para calcular o dobro, c, o
    //triplo, e d, o quádruplo.
    /*int a,*b,**c,***d;
    printf("Insira um int");
    scanf("%d",&a);
    b = &a;
    c = &b;
    d = &c;
    printf("\nValor de a %d \nValor de b %d \nValor de c %d \nValor de d %d",a,*b*2,(**c)*3,(***d)*4);*/

    //exercicio 9 - Crie uma função que receba como parâmetro um vetor e o imprima. Não utilize
    //índices para percorrer o vetor, apenas aritmética de ponteiros.
    /*int vet[10] = {1,2,3,4,5,6,7,8,12,13};
    printVector(vet);
    */

    //exercicio 8 - Crie uma função que receba dois parâmetros: um vetor e um valor do mesmo tipo
    // do vetor. A função deverá preencher os elementos de vetor com esse valor. Não
    // utilize índices para percorrer o vetor, apenas aritmética de ponteiros.

    /*
    int valor, vetor[10];
	scanf("%d", &valor);

	preencherVetor(vetor, valor);
	return 0;
	*/

    //exercicio 7 - Elabore uma função que receba duas strings como parâmetros e verifique se a segunda string ocorre dentro da primeira.
    //Use aritmética de ponteiros para acessar os caracteres das strings.
    /*
    char str1[100], str2 [50];
    fgets(str1, 100, stdin);
    fgets(str2, 50, stdin);

    int retorno = verifica(str1,str2); //funcao verifica esta acima da main
    if (retorno == 1)
        printf("A segunda string esta contida na primera\n");
    else
        printf("A segunda string NAO esta contida na primera\n");

    */



    //exercicio 6 - um array contendo cinco elementos inteiros. Leia esse array do teclado e imprima o endereço das posições contendo valores
    /*
    int vet [5];
    int *p = &vet[0];
    for (int i = 0; i<5; i++)
    {
        printf("Insira %d dos 5 valores para vet\n", i+1);
        scanf("%d", &vet[i]);

    }
    for (int i = 0; i<5; i++)
    {
        if (p[i]%2 == 0)
        printf("Posicao %d  possui o endereco %p que é par \n", i+1 ,&p[i]);


    }*/



    //exercicio 5 - Crie um programa que contenha um array de inteiros contendo cinco elementos.
    //Utilizando apenas aritmética de ponteiros, leia esse array do teclado e imprima o dobro de cada valor lido.
    /*
    int vet[5];
    int *p = &vet[0];
    for (int i = 0; i<5; i++)
    {
        printf("Insira %d dos 5 valores para vet\n", i+1);
        scanf("%d", &vet[i]);

    }
     for (int i = 0; i<5; i++)
    {
        printf("Valor %d dobrado dos 5 valores para vet\n", p[i]*2);


    }
    */

    //exercicio 4 - contenha uma matriz de float contendo três linhas e três colunas. Imprima o endereço de cada posição dessa matriz.
    /*
    float vet[3][3];
    float *p = &vet[0][0];

        for (int i = 0; i<9; i++)
    {
        printf("%p\n",  &p[i]);

    }
        printf("----\n");

        for (int k = 0; k < 3; k++)
            for (int j = 0; j < 3; j++)
                printf("%p\n", &vet[k][j]);

        printf("----\n");
        */



    //Exercicio 3 - Contenha um array de float contendo 10 elementos. Imprima o endereço de cada posição desse array.
    /*
    float vet [10];

        for (int i = 0; i<10; i++)
    {
        printf("%p\n",  &vet[i]);

    }
    */




    //Exercicio 2 - Receba 2 valores, compare seus endereços e exiba o conteúdo do maior endereço.
    /*
    int x,y;
    printf("Entre o valor de X e Y");
    scanf( "%d%d",&x,&y);
    int *p1 =&x,*p2 =&y;
    if (p1 > p2)
    {
        printf("\nP1 eh maior que p2 -- P1: %d  \np2: %d",&p1,&p2);

    } else {
        printf("\n P2 eh maior que p1 -- P2: %d  \nP1:%d", &p1, &p2);
    } */


    //Anotaçoes sobre ponteiros
    /*int vet[5] = {1,2,3,4,5};
    int *p = vet;
    int *pp;
    int *ppp;
    int x= 99;
    for (int i = 0; i<5; i++)
    {
        printf("%d\n",  p[i]);

    }
    pp = &vet[1]; // aponta para o endereco da variavel
    p = &vet[2];
    ppp = &x;

    printf("\nImprime o valor de PP Vet2 %d",*pp);
    printf("\nImprime o valor na posição Vet 3 %d",*p);
    printf("\nImprime o valor de x %d",*ppp);*/
    return 0;
}
