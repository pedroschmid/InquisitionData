#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define T 255
#define TS 60

typedef char STRING[T];

struct INQUISICAO
{
    STRING Datas, Generos, Punicoes;
};

void lerArquivoDatas(FILE* arquivo, struct INQUISICAO inquisicao[TS]);
void lerArquivoGeneros(FILE* arquivo, struct INQUISICAO inquisicao[TS]);
void lerArquivoPunicoes(FILE* arquivo, struct INQUISICAO inquisicao[TS]);

void exibirArquivoDatas(struct INQUISICAO inquisicao[TS]);
void exibirArquivoGeneros(struct INQUISICAO inquisicao[TS]);
void exibirArquivoPunicoes(struct INQUISICAO inquisicao[TS]);

void ordenarPessoasDatas(struct INQUISICAO inquisicao[TS]);
void ordenarPessoasSexoMasculino(struct INQUISICAO inquisicao[TS]);
void ordenarPessoasSexoFeminino(struct INQUISICAO inquisicao[TS]);
void ordenarPessoasPunicoes(struct INQUISICAO inquisicao[TS]);

int contarPalavrasDatas(struct INQUISICAO inquisicao[TS], int palavra);
int contarPalavrasGeneros(struct INQUISICAO inquisicao[TS], STRING palavra);
int contarPalavrasPunicoes(struct INQUISICAO inquisicao[TS], STRING palavra);

void menuPrincipal();
void menuExibir();
void menuOrdenacao();
void menuContadora();

int main()
{
    // Definindo a struct
    struct INQUISICAO inquisicao[TS];

    // FILE de leitura
    FILE* arquivoDatas = fopen("D:\\Development\\Codes\\Vanilla\\C\\Anderson\\TxT\\Datas.txt", "r");
    FILE* arquivoGeneros = fopen("D:\\Development\\Codes\\Vanilla\\C\\Anderson\\TxT\\Generos.txt", "r");
    FILE* arquivoPuncioes = fopen("D:\\Development\\Codes\\Vanilla\\C\\Anderson\\TxT\\Punicoes.txt", "r");

    int escolhaPrincipal, escolhaExibir, escolhaOrdenacao, escolhaContadora, palavraDatas;
    STRING palavraGeneros, palavraPunicoes;

    menuPrincipal:
    menuPrincipal(); scanf("%i", &escolhaPrincipal);
    switch (escolhaPrincipal) // swtich menu principal
    {
        case 1:
        menuLeitura:
            printf("LENDO TXT...\n");
            lerArquivoDatas(arquivoDatas, inquisicao);
            lerArquivoGeneros(arquivoGeneros, inquisicao);
            lerArquivoPunicoes(arquivoPuncioes, inquisicao);
            printf("TXT LIDO COM SUCESSO!\n");
            goto menuPrincipal;
        case 2:
        menuExibir:
            menuExibir(); scanf("%i", &escolhaExibir);
            switch (escolhaExibir) // swtich menu exibir
            {
                case 1:
                    exibirArquivoDatas(inquisicao);
                    goto menuExibir;
                case 2:
                    exibirArquivoGeneros(inquisicao);
                    goto menuExibir;
                case 3:
                    exibirArquivoPunicoes(inquisicao);
                    goto menuExibir;
                case 0:
                    printf("SAINDO DO MENU DE EXIBICAO...\n");
                    goto menuPrincipal;
                default:
                    printf("ESCOLHA INVALIDA,TENTE NOVAMENTE...\n");
                    goto menuExibir;
            }
        case 3:
        menuOrdenacao:
            menuOrdenacao(); scanf("%i", &escolhaOrdenacao);
            switch (escolhaOrdenacao) // switch menu ordenacao
            {
                case 1:
                    ordenarPessoasDatas(inquisicao);
                    goto menuOrdenacao;
                case 2:
                    ordenarPessoasSexoMasculino(inquisicao);
                    goto menuOrdenacao;
                case 3:
                    ordenarPessoasSexoFeminino(inquisicao);
                    goto menuOrdenacao;
                case 4:
                    ordenarPessoasPunicoes(inquisicao);
                    goto menuOrdenacao;
                case 0:
                    printf("SAINDO DO MENU DE ORDENACAO...\n");
                    goto menuPrincipal;
                default:
                    printf("ESCOLHA INVALIDA,TENTE NOVAMENTE...\n");
                    goto menuOrdenacao;
            }
        case 4:
        menuContadora:
            menuContadora(); scanf("%i", &escolhaContadora);
            switch (escolhaContadora)
            {
                case 1:
                    printf("DIGITE A DATA QUE DESEJA CONTAR:"); scanf("%i", &palavraDatas);
                    printf("A DATA [%i] APARECEU: %i VEZES!\n", palavraDatas, contarPalavrasDatas(inquisicao, palavraDatas));
                    goto menuContadora;
                case 2:
                    printf("DIGITE O GENERO QUE DESEJA CONTAR:"); scanf("%s", palavraGeneros);
                    printf("A O GENERO [%s] APARECEU: %i VEZES!\n", palavraGeneros, contarPalavrasGeneros(inquisicao, palavraGeneros));
                    goto menuContadora;
                case 3:
                    printf("DIGITE A PUNICAO QUE DESEJA CONTAR:"); scanf("%s", palavraPunicoes);
                    printf("A PUNICAO [%s] APARECEU: %i VEZES!\n", palavraPunicoes, contarPalavrasPunicoes(inquisicao, palavraPunicoes));
                    goto menuContadora;
                case 0:
                    printf("SAINDO DO MENU DE CONTADORA...\n");
                    goto menuPrincipal;
                default:
                    printf("ESCOLHA INVALIDA,TENTE NOVAMENTE...\n");
                    goto menuContadora;
            }
        case 0:
            printf("SAINDO DO PROGRAMA...\n");
            break;
        default:
            printf("ESCOLHA INVALIDA, TENTE NOVAMENTE...\n");
    }

    return 0;
}

void menuPrincipal()
{
    printf("\n|================================================================|\n");
    printf("| [1] - LER TXT                                                  |\n");
    printf("| [2] - EXIBIR TXT                                               |\n");
    printf("| [3] - MENU ORDENACAO                                           |\n");
    printf("| [4] - MENU CONTADORA                                           |\n");
    printf("| [0] - SAIR DO PROGRAMA                                         |\n");
    printf("|================================================================|\n");
    printf("\nRESPOSTA ==>");

}

void menuExibir()
{
    printf("\n|================================================================|\n");
    printf("| [1] - EXIBIR TXT DATAS                                         |\n");
    printf("| [2] - EXIBIR TXT GENEROS                                       |\n");
    printf("| [3] - EXIBIR TXT PUNICOES                                      |\n");
    printf("| [0] - SAIR DO MENU DE EXIBICAO                                 |\n");
    printf("|================================================================|\n");
    printf("\nRESPOSTA ==>");
}

void menuOrdenacao()
{
    printf("\n|================================================================|\n");
    printf("| [1] - ORDENAR POR DATAS                                        |\n");
    printf("| [2] - ORDENAR POR GENEROS (MASCULINO)                          |\n");
    printf("| [3] - ORDENAR POR GENEROS (FEMININO)                           |\n");
    printf("| [4] - ORDENAR POR PUNICOES                                     |\n");
    printf("| [0] - SAIR DO MENU DE ORDENACAO                                |\n");
    printf("|================================================================|\n");
    printf("\nRESPOSTA ==>");
}

void menuContadora()
{
    printf("\n|================================================================|\n");
    printf("| [1] - CONTAR POR DATAS                                         |\n");
    printf("| [2] - CONTAR POR GENEROS                                       |\n");
    printf("| [3] - CONTAR POR PUNICOES                                      |\n");
    printf("| [0] - SAIR DO MENU DE ORDENACAO                                |\n");
    printf("|================================================================|\n");
    printf("\nRESPOSTA ==>");
}

void lerArquivoDatas(FILE* arquivo, struct INQUISICAO inquisicao[TS])
{
    int i;

    if (arquivo == NULL)
        printf("ERRO AO ABRIR ARQUIVO!");
    else
    {
        i = 0; // reset i
        while (!feof(arquivo))
        {
            fgets(inquisicao[i].Datas, T, arquivo);
            i++; // i++ bitches
        }
    }
    fclose(arquivo);
}

void lerArquivoGeneros(FILE* arquivo, struct INQUISICAO inquisicao[TS])
{
    int i;

    if (arquivo == NULL)
        printf("ERRO AO ABRIR ARQUIVO!");
    else
    {
        i = 0; // reset i
        while (!feof(arquivo))
        {
            fgets(inquisicao[i].Generos, T, arquivo);
            i++; // i++ bitches
        }
    }
    fclose(arquivo);
}

void lerArquivoPunicoes(FILE* arquivo, struct INQUISICAO inquisicao[TS])
{
    int i;

    if (arquivo == NULL)
        printf("ERRO AO ABRIR ARQUIVO!");
    else
    {
        i = 0; // reset i
        while (!feof(arquivo))
        {
            fgets(inquisicao[i].Punicoes, T, arquivo);
            i++; // i++ bitches
        }
    }
    fclose(arquivo);
}

void exibirArquivoDatas(struct INQUISICAO inquisicao[TS])
{
    int i;

    for (i = 0; i < TS; i++)
        printf("DATA: %s\n", inquisicao[i].Datas);
}

void exibirArquivoGeneros(struct INQUISICAO inquisicao[TS])
{
    int i;

    for (i = 0; i < TS; i++)
        printf("GENERO: %s\n", inquisicao[i].Generos);
}

void exibirArquivoPunicoes(struct INQUISICAO inquisicao[TS])
{
    int i;

    for (i = 0; i < TS; i++)
        printf("PUNICAO: %s\n", inquisicao[i].Punicoes);
}

void ordenarPessoasDatas(struct INQUISICAO inquisicao[TS])
{
    int i, j;
    struct INQUISICAO aux;

    for (i = 0; i < TS; i++)
    {
        for (j = 0; j < (TS - 1); j++)
        {
            if ( strtof(inquisicao[j].Datas, NULL) > strtof(inquisicao[j + 1].Datas, NULL) )
            {
                aux = inquisicao[j];
                inquisicao[j] = inquisicao[j + 1];
                inquisicao[j + 1] = aux;
            }
        }
    }
    exibirArquivoDatas(inquisicao);
}

void ordenarPessoasSexoMasculino(struct INQUISICAO inquisicao[TS])
{
    int i, j, compararStrings;
    struct INQUISICAO aux;

    for (i = 0; i < TS; i++)
    {
        for (j = i + 1; j < TS; j++)
        {
            compararStrings = strcmp(inquisicao[i].Generos, inquisicao[j].Generos);
            if (compararStrings <= 0)
            {
                aux = inquisicao[i];
                inquisicao[i] = inquisicao[j];
                inquisicao[j] = aux;
            }
        }
    }

    exibirArquivoGeneros(inquisicao);
}

void ordenarPessoasSexoFeminino(struct INQUISICAO inquisicao[TS])
{
    int i, j, compararStrings;
    struct INQUISICAO aux;

    for (i = 0; i < TS; i++)
    {
        for (j = i + 1; j < TS; j++)
        {
            compararStrings = strcmp(inquisicao[i].Generos, inquisicao[j].Generos);
            if (compararStrings > 0)
            {
                aux = inquisicao[i];
                inquisicao[i] = inquisicao[j];
                inquisicao[j] = aux;
            }
        }
    }

    exibirArquivoGeneros(inquisicao);
}

void ordenarPessoasPunicoes(struct INQUISICAO inquisicao[TS])
{
    int i, j, compararStrings;
    struct INQUISICAO aux;

    for (i = 0; i < TS; i++)
    {
        for (j = i + 1; j < TS; j++)
        {
            compararStrings = strcmp(inquisicao[i].Punicoes, inquisicao[j].Punicoes);
            if (compararStrings <= 0)
            {
                aux = inquisicao[i];
                inquisicao[i] = inquisicao[j];
                inquisicao[j] = aux;
            }
        }
    }
    exibirArquivoPunicoes(inquisicao);
}

int contarPalavrasDatas(struct INQUISICAO inquisicao[TS], int palavra)
{
    int contadoraPalavra = 0;
    int i;

    for (i = 0; i < TS; i++)
    {
        if (atoi(inquisicao[i].Datas) == palavra)
            contadoraPalavra++;
    }
    return contadoraPalavra;
}

int contarPalavrasGeneros(struct INQUISICAO inquisicao[TS], STRING palavra)
{
    int contadoraPalavra = 0;
    int i;

    for (i = 0; i < TS; i++)
    {
        if (inquisicao[i].Generos == palavra)
            contadoraPalavra++;
    }
    return contadoraPalavra;
}

int contarPalavrasPunicoes(struct INQUISICAO inquisicao[TS], STRING palavra)
{
    int contadoraPalavra = 0;
    int i;

    for (i = 0; i < TS; i++)
    {
        if (inquisicao[i].Punicoes == palavra)
            contadoraPalavra++;
    }
    return contadoraPalavra;
}