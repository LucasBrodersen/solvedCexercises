#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
//struct ex1
struct aluno {
    int id;
    char nome[50];
    float notas[2];


}; */

/*
// struct e funcao ex3

struct cadastro {
        char nome[50], endereco[50];
        int idade;

    };
// funcao que retorna um ponteiro do tipo !cadastro! alocado dinamicamente a partir de um int
struct cadastro* iniciar(int n) {

    struct cadastro *aux;
    aux = (struct cadastro *) malloc(n*sizeof(struct cadastro)); // forcando para retornar um ponteiro do tipo cadastro com type cast struct
    if (aux == NULL) {
        printf("Erro! N foi possivel alocar memoria\n");
        exit(1);
    }

    for (int i=0; i< n; i++)
    {
        setbuf(stdin,NULL); //SET BUFF !!IMPORTANTE!! PARA N BUGAR O PRINTF
        printf("Digite o nome:\n");
        fgets(aux[i].nome,50, stdin);
        printf("Digite a idade\n");
        scanf("%d", &aux[i].idade);
        setbuf(stdin,NULL);
        printf("Digite o endereco");
        fgets(aux[i].endereco,50,stdin);

    }

    return aux;

}

*/
/*
// funcao ex:6

int checkValue(int **pointer, int linha, int coluna, int valor) { // funcao que recebe a matriz (ponteiro ponteiro), qnt linhas e colunas e o random valor pra chechar se esta contido na matriz
    for (int i=0;i<linha; i++)
        for (int j=0; j<coluna;j++)
            if (pointer[i][j] == valor)
                return 1;
    return 0;


}
*/
/*
//Funcao Ex7:
int* criarVetor(int valor) { / /funcao que retorna um ponteiro de int
    int *p2;
    p2 = (int*) malloc(valor*sizeof(int));
    if (p2==NULL) {
        printf("Nao foi possivel alocar memoria \n");
        exit(1);

    }
    for (int i =0;i<valor; i++)
        p2[i] = rand()%valor;
    return p2;
};
*/

/*
//Funcao ex8
int *criarVetor (int valor) {
    int *p2;
    if (valor <= 0)
        return NULL;
    p2 = (int*) malloc(valor*sizeof(int));
    if (p2==NULL) {
        printf("Nao foi possivel alocar memoria \n");
        exit(1);
        }
    for (int i=0; i<valor; i++)
        p2[i]=i;
    return p2;

}
*/
/*
//Funcoes Ex9:
int tamanhoStr (char *str) {

    int c = 0;
    for (int i =0; str[i] != '\0'; i++)
        c++;
    return c -1; // Tirar o \n
}

char* strInvertida(char *str) {
    char *pp;
    int tamanho = tamanhoStr(str);
    pp = (char *) malloc(tamanho * sizeof(char));
    if (pp ==NULL) {
        printf("Nao foi possivel alocar memoria \n");
        exit(1);
    }
    for (int i = 0 ;i <=tamanho; i++) {
        pp[i] = str[tamanho - i];
    }
    return pp;

}
*/
/*
// funcao Ex10:

int *criarVetor (int valor) {
    int *p2;
    if (valor <= 0)
        return NULL;
    p2 = (int*) malloc(valor*sizeof(int));
    if (p2==NULL) {
        printf("Nao foi possivel alocar memoria \n");
        exit(1);
        }
    for (int i=0; i<valor; i++) {
        printf("Insira o valor para a posicao %d\n", i);
        scanf("%d",&p2[i]);
    }

    return p2;

}
*/

/*
// funcao ex 11:
int** criarMatriz(int quantidade) { // retorna ponteiro para ponteiro
    // usando solucao 2 do livro, ponteiro para ponteiro
    int **p;
    p = (int **) calloc(quantidade,sizeof(int *)); // Nesse caso usamos o tamanho de ponteiro de int !Typecast Ponteiro Ponteiro into!
    for (int i=0; i<quantidade; i++)
        p[i] = (int **) calloc(quantidade,sizeof(int *));
    if (p==NULL) {
        printf("N foi possivel alocar memoria \n");
        exit(1);
    }
    for (int i=0; i<quantidade; i++)
        for (int j =0; j<quantidade; j++) {
            if (i==j)
                p[i][j] = 1;
        }

    return p;

}
*/
/*
// funcao ex 12:
int** criarMatriz(int quantidade) { // retorna ponteiro para ponteiro
    // usando solucao 2 do livro, ponteiro para ponteiro
    int **p;
    int c=0;
    p = (int **) calloc(quantidade,sizeof(int *)); // Nesse caso usamos o tamanho de ponteiro de int !Typecast Ponteiro Ponteiro into!
    for (int i=0; i<quantidade; i++)
        p[i] = (int **) calloc(quantidade,sizeof(int *));
    if (p==NULL) {
        printf("N foi possivel alocar memoria \n");
        exit(1);
    }
    for (int i=0; i<quantidade; i++)
        for (int j =0; j<quantidade; j++) {
            if (j+1 == quantidade-i) // imprimir 1 na linha secundaria, desenhar matriz
                p[i][j] = 1;
        //printf("Valor de i: %d\n", i);
        //printf("Valor de j: %d\n", j);
        }



    return p;

}
*/
/*
//Funca Ex:13
int** criarMatriz(int quantidade) { // retorna ponteiro para ponteiro
    // usando solucao 2 do livro, ponteiro para ponteiro
    int **p;
    p = (int **) calloc(quantidade,sizeof(int *)); // Nesse caso usamos o tamanho de ponteiro de int !Typecast Ponteiro Ponteiro into!
    for (int i=0; i<quantidade; i++)
        p[i] = (int **) calloc(quantidade,sizeof(int *));
    if (p==NULL) {
        printf("N foi possivel alocar memoria \n");
        exit(1);
    }
    for (int i=0; i<quantidade; i++)
        for (int j =0; j<quantidade; j++) {
            if (i==j)
                p[i][j] = 0;
            if (i<j)
                p[i][j] = 1;
            if (i>j)
                p[i][j] = -1;
        }

    return p;

}
*/
/*
//Funcao Ex 14& 15:
int* criarVetores(int *pointer1,int *pointer2, int qnt) {
    int *p;
    p = (int *) malloc(qnt*sizeof(int));
    for (int i=0; i<qnt; i++)
        p[i] = pointer1[i] * pointer2[i]; // para exercicio 14 somar
    return p;
};
*/
/*
//FuncaoEx17
int* criarVetorSomaColunas(int **matriz, int tamanho)
{
    int *p,buffr;
    p = (int *) malloc(tamanho*sizeof(int)); // Nesse caso usamos o tamanho de ponteiro de int !Typecast Ponteiro Ponteiro into!
    if (p==NULL) {
        printf("N foi possivel alocar memoria \n");
        exit(1);
    }
    for (int i=0; i<tamanho; i++){
        buffr=0;
        for (int j = 0; j<tamanho; j++) {
        buffr = buffr + matriz[j][i]; // inverti para somar as colunas
        }
        p[i]=buffr;

    }
    //teste
    //printf("Print Matriz01: %d\n", matriz[0][1]);
    return p;
}
*/
int main(){
    /*
    //Ex17: Escreva uma função que receba como parâmetro uma matriz A contendo N linhas
    //e N colunas. A função deve retornar o ponteiro para um vetor B de tamanho N
    //alocado dinamicamente, em que cada posição de B é a soma dos números daquela
    //coluna da matriz.
    int n,**p1,*p2;
    printf("Insira o valor de N\n");
    scanf("%d",&n);
    p1 = (int **) malloc(n*sizeof(int *)); // Nesse caso usamos o tamanho de ponteiro de int !Typecast Ponteiro Ponteiro into!
    for (int i=0; i<n; i++)
        p1[i] = (int **) malloc(n*sizeof(int *));
    if (p1==NULL) {
        printf("N foi possivel alocar memoria \n");
        exit(1);
    }
    for(int i =0;i<n;i++)
        for(int j =0; j<n;j++)
            {
                printf("Insira O valor %d%d\n",i,j);
                scanf("%d",&p1[i][j]);
            }

    for (int i=0; i<n; i++) { // Teste print valores

        for (int j =0; j<n; j++) {
        printf("%d",p1[i][j]);
        //printf("Valor de J:%d\n",i);
            }
        printf("\n"); // cada vez que soma 1 a i pulamos a linha
        }
    p2 = criarVetorSomaColunas(p1,n);
        for (int i = 0; i<n;i++)
        printf("Valor das colunas: %d",p2[i]);
    */


    /*
    //Ex 14 & 15: Escreva uma função que receba como parâmetro dois vetores, A e B, de tamanho
    //N cada. A função deve retornar o ponteiro para um vetor C de tamanho N aloca-
    //do dinamicamente, em que C[i] = A[i] + B[i]. 15) C[i] = A[i] * B[i].
    int *p1,*p2,*p3,n;
    printf("Insira um valor para o tamanho dos vetores\n");
    scanf("%d",&n);
    p1 = (int *) malloc(n*sizeof(int));
     if (p1==NULL) {
        printf("N foi possivel alocar memoria \n");
        exit(1);
    }
    p2 = (int *) malloc(n*sizeof(int));
     if (p2==NULL) {
        printf("N foi possivel alocar memoria \n");
        exit(1);
    }
    for (int i = 0; i<n; i++)
    {
        printf("Insira o Valor de A e B\n");
        scanf("%d%d",&p1[i],&p2[i]);

    }
    printf("Valor 2 de P1: %d\n",p1[1]);
    p3 = criarVetores(p1,p2,n);
    for (int i = 0; i<n;i++)
        printf("Valor da Soma dos Vetores: %d",p3[i]);
        */

    /*
    // Ex 13: Essa matriz deve conter o valor 0 na
    //diagonal principal, o valor 1 nos elementos acima da diagonal principal e o valor
    //−1 nos elementos abaixo da diagonal principal.
    int n,**pp; //ponteiro para ponteiro, matriz dimensao 2
    printf("Insira o valor N para linhas e colunas");
    scanf("%d",&n);
    pp = criarMatriz(n);
    for (int i=0; i<n; i++) { // Teste print valores

        for (int j =0; j<n; j++) {
        printf("%d",pp[i][j]);
        //printf("Valor de J:%d\n",i);
            }
        printf("\n"); // cada vez que soma 1 a i pulamos a linha
        }
*/

/*
    // Ex 12: Essa matriz deve conter o valor 1 na diagonal secundária e 0 nas demais posições.

        int n,**pp; //ponteiro para ponteiro, matriz dimensao 2
        printf("Insira o valor N para linhas e colunas");
        scanf("%d",&n);
        pp = criarMatriz(n);
        for (int i=0; i<n; i++) { // Teste print valores

            for (int j =0; j<n; j++) {
            printf("%d",pp[i][j]);
            //printf("Valor de J:%d\n",i);
            }
        printf("\n"); // cada vez que soma 1 a i pulamos a linha
        }
*/
    /*
    // Ex11: Escreva uma função que receba como parâmetro um valor N e retorne o ponteiro
    //para uma matriz alocada dinamicamente contendo N linhas e N colunas. Essa
    //matriz deve conter o valor 1 na diagonal principal e 0 nas demais posições.

    int n,**pp; //ponteiro para ponteiro, matriz dimensao 2
    printf("Insira o valor N para linhas e colunas");
    scanf("%d",&n);
    pp = criarMatriz(n);
    for (int i=0; i<n; i++) { // Teste print valores

            for (int j =0; j<n; j++) {
            printf("%d",pp[i][j]);
            //printf("Valor de I:%d\n",i);
            }
        printf("\n"); // cada vez que soma 1 a i pulamos a linha
        }
    */

    /*
    // Ex 10: Escreva uma função que receba um valor inteiro positivo N por parâmetro e re-
    // torne o ponteiro para um vetor de tamanho N alocado dinamicamente. Esse vetor
    // deverá ter os seus elementos preenchidos com certo valor, também passado por
    // parâmetro. Se N for negativo ou igual a zero, um ponteiro nulo deverá ser retornado.

    int n,*p;
    printf("Insira o tamanho do vetor");
    scanf("%d", &n);
    p = criarVetor(n);
    for (int i =0;i<n; i++)
        printf("Valor posicao %d = %d", i,p[i]);
    */




    /*
    // Ex 9: Crie uma função que receba uma string e retorne o ponteiro para essa string in-
    //vertida.

    char str[50],*p;
    int tamanho;
    printf("Insira uma string\n");
    fgets(str,50,stdin);
    //printf("A string eh: %s",str); // teste print string
    printf("O tamanho da str eh: %d", tamanhoStr(str));
    p = strInvertida(str);
    printf("A string invertida eh: %s",p);
    free(p);
    p = NULL;
    */

    /*
    //Ex 8: Escreva uma função que receba um valor inteiro positivo N por parâmetro e re-
    //torne o ponteiro para um vetor de tamanho N alocado dinamicamente. Se N for
    //negativo ou igual a zero, um ponteiro nulo deverá ser retornado.

    int n, *p;
    printf("Insira um valor para N\n");
    scanf("%d",&n);
    p = criarVetor(n);
    if (p==NULL)
        printf("Retornou Nulo");
    for (int i=0; i<n; i++)
        printf("Valor Vetor: %d", p[i]);
    free(p);
    p = NULL;
    */



    /*
    //Ex7: Faça uma função que retorne o ponteiro para um vetor de N elementos inteiros
    //alocados dinamicamente. O array deve ser preenchido com valores de 0 a N − 1.
    int *p, valor;
    srand(time(NULL));
    valor = rand()%11;

    printf("Valor:%d\n",valor);
    p = criarVetor(valor);
    for (int i =0;i<valor; i++)
        printf("Valor posicao %d = %d", i,p[i]);
    free(p);
    p = NULL;
    */


    /*
    //Ex6: Escreva um programa que aloque dinamicamente uma matriz de inteiros. As di-
    //mensões da matriz deverão ser lidas do usuário. Em seguida, escreva uma função
    //que receba um valor e retorne 1, caso o valor esteja na matriz, ou retorne 0, no
    //caso contrário.

    int lin,col,valorTeste;
    printf("Insira a quantidade de linhas e em seguida de colunas\n");
    scanf("%d%d",&lin,&col);
    // usando solucao 2 do livro, ponteiro para ponteiro
    int **p;
    p = (int **) malloc(lin*sizeof(int *)); // Nesse caso usamos o tamanho de ponteiro de int
    for (int i=0; i<lin; i++)
        p[i] = (int *) malloc(col*sizeof(int));
    if (p==NULL) {
        printf("N foi possivel alocar memoria \n");
        exit(1);
    }
    for (int i=0; i<lin; i++)
        for (int j =0; j<col; j++) {
            p[i][j]= rand() %10;
        }

       for (int i=0; i<lin; i++) // Teste print valores
            for (int j =0; j<col; j++) {
            printf("Valor i:%d\nValor j:%d\nValor Random:%d\n",i,j,p[i][j]);
        }

    valorTeste = rand() % 10;
    printf("Valor Teste: %d\n", valorTeste);
    if (checkValue(p,lin,col,valorTeste))
        printf("O valor esta na matriz\n");
    else
        printf("O valor nao esta na matriz\n");
    */


    /*
    //Ex5: Faça um programa que leia um valor inteiro N não negativo. Se o valor de N for
    //inválido, o usuário deverá digitar outro até que ele seja válido (ou seja, positivo).
    //Em seguida, leia um vetor V contendo N posições de inteiros, em que cada valor
    //deverá ser maior ou igual a 2. Esse vetor deverá ser alocado dinamicamente.

    int n;
    int *p;
    printf("Digite um inteiro nao negativo\n");
    scanf("%d",&n);
    if (n<0) {
        while(n<0) {
        printf("Valor invalido, insira um inteiro nao negativo");
        scanf("%d",&n);
        }

    }
    p = (int *) malloc(n*sizeof(int));
    if (p==NULL) {
        printf("Nao foi possivel alocar memoria \n");
        exit(1);

    }

    for (int i=0; i<n;i++)
        {
        setbuf(stdin,NULL);
        printf("Digite um valor >=2\n");
        scanf("%d", &p[i]);
        if (p[i]<2) {
            printf("Valor invalido\n");
            while (p[i]<2) {
            printf("Digite um valor >=2\n");
            scanf("%d", &p[i]);
            }
        }
    }
    for (int i = 0; i<n; i++) {
    printf("Posicao: %d\nValor: %d\n\n",i+1,p[i]);

    }
    */


    /*
    //Ex 4: Elabore um programa que leia do usuário o tamanho de um vetor a ser lido. Em
    //seguida, faça a alocação dinâmica desse vetor. Por fim, leia o vetor do usuário e o
    //imprima.

    int n;
    int *p;

    printf("Insira o valor do tamanho do vetor a ser alocado:\n");
    scanf("%d",&n);
    p = (int *) malloc(n*sizeof(int)); // alocando espaco dinamicamente
    if (p==NULL) {
        printf("Error: Insuficcient memory");
        exit(1);
    }
    for (int i=0; i<n; i++)
    {
        printf("Insira o valor %d do vetor:\n",i+1);
        scanf("%d",&p[i]);

    }
    for (int i = 0; i<n; i++) {
    printf("Posicao: %d\nValor: %d\n\n",i+1,p[i]);

    }
    */
    /*
    //Ex 3: Crie uma estrutura chamada Cadastro. Essa estrutura deve conter o nome, a idade
    //e o endereço de uma pessoa. Agora, escreva uma função que receba um inteiro
    //positivo N e retorne o ponteiro para um vetor de tamanho N, alocado dinamica-
    //mente, dessa estrutura. Solicite também que o usuário digite os dados desse vetor
    //dentro da função.
    int num;
    printf("Insert an integer\n");
    scanf("%d",&num);
    struct cadastro *p;
    p = iniciar(num);
    for (int i=0; i<num; i++) //printar o vetor p que recebeu o aux como retorno da funcao iniciar
    {
        printf("\nNome:%sIdade:%d\nEndereco:%s\n", p[i].nome,p[i].idade,p[i].endereco);
    }

    */



    /*
    // Ex2: Mostrar o tam da Struct Aluno
    printf("Size of Alunos: %d\n", sizeof(struct aluno));
    */

    /*
    // Ex1:
    printf("Tamanho char: %d\n",sizeof(char));
    printf("Tamanho int: %d\n",sizeof(int));
    printf("Tamanho float: %d\n",sizeof(float));
    printf("Tamanho double: %d\n",sizeof(double));
    */
    return 0;

    }





/*
//Uso da funcao sizeof();

struct ponto{
int x,y;
};

int main(){
    printf("Tamanho char: %d\n",sizeof(char));
    printf("Tamanho int: %d\n",sizeof(int));
    printf("Tamanho float: %d\n",sizeof(float));
    printf("Tamanho double: %d\n",sizeof(double));
    printf("Tamanho struct ponto: %d\n",sizeof(struct ponto)); // interassante analisar, o tamanho da struct é igual a soma do tamanho das variaveis
    int x;
    double y;
    printf("Tamanho da variavel x: %d\n",sizeof x);
    printf("Tamanho da variavel y: %d\n",sizeof y);

    return 0;
    }
*/
