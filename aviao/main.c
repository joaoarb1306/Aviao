#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char matricula[30];
    char empresa[30];
    char modelo[30];
} Aeroporto;



Aeroporto fila[10];
int cc=0;

void cadastraaviao()
{
    Aeroporto cadastro;
    printf("Digite a matricula do aviao: ");
    scanf("%s",&cadastro.matricula);
    printf("Digite o nome da empresa: ");
    scanf("%s",&cadastro.empresa);
    printf("Digite o nome do modelo: ");
    scanf("%s",&cadastro.modelo);
    fila[cc]=cadastro;
    cc++;
}
void pousaraviao()
{

    int i;
    for (i=0; i<cc; i++)
    {
        fila[i]=fila[i+1];
    }
    cc--;
}
void listarfila()
{
    for (int i=0;i<cc;i++)
    {
        printf("%d da fila : %s\n",i+1,fila[i].modelo);
    }
}
int main()
{
    int op=0;
    while (1)
    {
        printf("Opcoes: \n\n0------Sair\n1------ Adicionar aviao na lista de pouso.\n2------ Pousar aviao\n3------Listar fila de pouso.\n");
        scanf("%d",&op);
        system("cls");
        switch(op)
        {
        case 0:
            printf("Ate breve.");
            exit(0);
            break;
        case 1:
            cadastraaviao();
            break;
        case 2:
            pousaraviao();
            break;
        case 3:
            listarfila();
            break;
        }
    }
}
