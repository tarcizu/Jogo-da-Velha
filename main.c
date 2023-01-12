// 1 - Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include <conio.h>
#include <locale.h>

// 2- Código 
void main()
{
    setlocale(LC_ALL,"Portuguese");
    int A1 = 0;
    int A2 = 0;
    int A3 = 0;
    int A4 = 0;
    int A5 = 0;
    int A6 = 0;
    int A7 = 0;
    int A8 = 0;
    int A9 = 0;

    for (int c = 1; c <= 9; c++)
    {
        Resultado(A1, A2, A3, A4, A5, A6, A7, A8, A9);

        while (0 == 0)
        {
            system("cls");
            Logo();
            DesenharJogo(A1, A2, A3, A4, A5, A6, A7, A8, A9);
            int Token = 0;
            if (c % 2 == 1)
            {
                printf("Jogador 1 (X) escolha o Slot (1-9): ");
                Token = 1;
            }
            else
            {
                printf("Jogador 2 (O) escolha o Slot (1-9): ");
                Token = 2;
            }

            char Escolha;
            scanf("%c", &Escolha);
            switch (Escolha)
            {
            case '1':
                if (A1 != 0)
                {
                    continue;
                }
                else
                {
                    A1 = Token;
                }
                break;
            case '2':
                if (A2 != 0)
                {
                    continue;
                }
                else
                {
                    A2 = Token;
                }
                break;
            case '3':
                if (A3 != 0)
                {
                    continue;
                }
                else
                {
                    A3 = Token;
                }
                break;
            case '4':
                if (A4 != 0)
                {
                    continue;
                }
                else
                {
                    A4 = Token;
                }
                break;
            case '5':
                if (A5 != 0)
                {
                    continue;
                }
                else
                {
                    A5 = Token;
                }
                break;
            case '6':
                if (A6 != 0)
                {
                    continue;
                }
                else
                {
                    A6 = Token;
                }
                break;
            case '7':
                if (A7 != 0)
                {
                    continue;
                }
                else
                {
                    A7 = Token;
                }
                break;
            case '8':
                if (A8 != 0)
                {
                    continue;
                }
                else
                {
                    A8 = Token;
                }
                break;
            case '9':
                if (A9 != 0)
                {
                    continue;
                }
                else
                {
                    A9 = Token;
                }
                break;
            default:
                continue;
                break;
            }
            break;
        }
    }
    system("cls");
    Logo();
    printf("\t\t\tO jogo deu Velha!\n");
    DesenharJogo(A1, A2, A3, A4, A5, A6, A7, A8, A9);

    system("pause");
}
void DesenharJogo(int S1, int S2, int S3, int S4, int S5, int S6, int S7, int S8, int S9)
{
    printf("\t\t\t\t     |     |     \n\t\t\t\t  ");
    Marcar(S1, 1);
    printf("  |  ");
    Marcar(S2, 2);
    printf("  |  ");
    Marcar(S3, 3);
    printf("  \n\t\t\t\t_____|_____|_____\n\t\t\t\t     |     |     \n\t\t\t\t  ");
    Marcar(S4, 4);
    printf("  |  ");
    Marcar(S5, 5);
    printf("  |  ");
    Marcar(S6, 6);
    printf("  \n\t\t\t\t_____|_____|_____\n\t\t\t\t     |     |     \n\t\t\t\t  ");
    Marcar(S7, 7);
    printf("  |  ");
    Marcar(S8, 8);
    printf("  |  ");
    Marcar(S9, 9);
    printf("  \n\t\t\t\t     |     |     \n\t\t\t");
}

void Marcar(int Simbolo, int Numero)
{
    if (Simbolo == 1)
    {
        printf("X");
    }
    else if (Simbolo == 2)
    {
        printf("O");
    }
    else
    {
        printf("%d", Numero);
    }
}
void Resultado(int S1, int S2, int S3, int S4, int S5, int S6, int S7, int S8, int S9)
{

    if ((S1 == 1 && S2 == 1 && S3 == 1) || (S1 == 2 && S2 == 2 && S3 == 2))
    {
        system("cls");
        Logo();
        printf("\t\t\tParabens Jogador %d VENCEU!\n", S1);
        DesenharJogo(S1, S2, S3, S4, S5, S6, S7, S8, S9);
        system("pause");
        exit(0);
    }
    if ((S4 == 1 && S5 == 1 && S6 == 1) || (S4 == 2 && S5 == 2 && S6 == 2))
    {
        system("cls");
        Logo();
        printf("\t\t\tParabens Jogador %d VENCEU!\n", S4);
        DesenharJogo(S1, S2, S3, S4, S5, S6, S7, S8, S9);
        system("pause");
        exit(0);
    }
    if ((S7 == 1 && S8 == 1 && S9 == 1) || (S7 == 2 && S8 == 2 && S9 == 2))
    {
        system("cls");
        Logo();
        printf("\t\t\tParabens Jogador %d VENCEU!\n", S7);
        DesenharJogo(S1, S2, S3, S4, S5, S6, S7, S8, S9);
        system("pause");
        exit(0);
    }
    if ((S1 == 1 && S4 == 1 && S7 == 1) || (S1 == 2 && S4 == 2 && S7 == 2))
    {
        system("cls");
        Logo();
        printf("\t\t\tParabens Jogador %d VENCEU!\n", S1);
        DesenharJogo(S1, S2, S3, S4, S5, S6, S7, S8, S9);
        system("pause");
        exit(0);
    }
    if ((S2 == 1 && S5 == 1 && S8 == 1) || (S2 == 2 && S5 == 2 && S8 == 2))
    {
        system("cls");
        Logo();
        printf("\t\t\tParabens Jogador %d VENCEU!\n", S2);
        DesenharJogo(S1, S2, S3, S4, S5, S6, S7, S8, S9);
        system("pause");
        exit(0);
    }
    if ((S3 == 1 && S6 == 1 && S9 == 1) || (S3 == 2 && S6 == 2 && S9 == 2))
    {
        system("cls");
        Logo();
        printf("\t\t\tParabens Jogador %d VENCEU!\n", S3);
        DesenharJogo(S1, S2, S3, S4, S5, S6, S7, S8, S9);
        system("pause");
        exit(0);
    }
    if ((S1 == 1 && S5 == 1 && S9 == 1) || (S1 == 2 && S5 == 2 && S9 == 2))
    {
        system("cls");
        Logo();
        printf("\t\t\tParabens Jogador %d VENCEU!\n", S1);
        DesenharJogo(S1, S2, S3, S4, S5, S6, S7, S8, S9);
        system("pause");
        exit(0);
    }
    if ((S3 == 1 && S5 == 1 && S7 == 1) || (S3 == 2 && S5 == 2 && S7 == 2))
    {
        system("cls");
        Logo();
        printf("\t\t\tParabens Jogador %d VENCEU!\n", S3);
        DesenharJogo(S1, S2, S3, S4, S5, S6, S7, S8, S9);
        system("pause");
        exit(0);
    }
}
void Logo()
{

    printf("\n\t\t     ____.                          .___       \n");
    printf("\t\t    |    | ____   ____   ____     __| _/____   \n");
    printf("\t\t    |    |/  _ \\ / ___\\ /  _ \\   / __ |\\__  \\  \n");
    printf("\t\t/\\__|    (  <_> ) /_/  >  <_> ) / /_/ | / __ \\_\n");
    printf("\t\t\\________|\\____/\\___  / \\____/  \\____ |(____  /\n");
    printf("\t\t               /_____/               \\/     \\/ \n");
    printf("\t\t   ____   ____     .__  .__                    \n");
    printf("\t\t   \\   \\ /   /____ |  | |  |__ _____           \n");
    printf("\t\t    \\   Y   // __ \\|  | |  |  \\\\__  \\          \n");
    printf("\t\t     \\     /\\  ___/|  |_|   Y  \\/ __ \\_        \n");
    printf("\t\t      \\___/  \\___  >____/___|  (____  /        \n");
    printf("\t\t                 \\/          \\/     \\/         \n");
}