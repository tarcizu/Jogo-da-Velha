// 1 - Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <windows.h>
#include <string.h>
#include <conio.h>
// 2 - Painel de Controle



// 3- Código
void main(){
int A1=0;
int A2=0;
int A3=0;
int A4=0;
int A5=0;
int A6=0;
int A7=0;
int A8=0;
int A9=0;






for(int c=1; c<=9; c++){
Resultado(A1, A2, A3, A4, A5, A6, A7, A8, A9);

while(0==0){
system("cls");
DesenharJogo(A1, A2, A3, A4, A5, A6, A7, A8, A9);
int Token=0;
if(c%2==1){    
printf("Jogador 1 (X) escolha o Slot (1-9): ");
Token=1;
}
else{
printf("Jogador 2 (O) escolha o Slot (1-9): "); 
Token=2;
}

char Escolha;
scanf("%c", &Escolha); 
switch(Escolha){
case '1':
if(A1!=0){
continue;
}
else{
A1=Token;
}
break;
case '2':
if(A2!=0){
continue;
}
else{
A2=Token;
}
break;
case '3':
if(A3!=0){
continue;
}
else{
A3=Token;
}
break;
case '4':
if(A4!=0){
continue;
}
else{
A4=Token;
}
break;
case '5':
if(A5!=0){
continue;
}
else{
A5=Token;
}
break;
case '6':
if(A6!=0){
continue;
}
else{
A6=Token;
}
break;
case '7':
if(A7!=0){
continue;
}
else{
A7=Token;
}
break;
case '8':
if(A8!=0){
continue;
}
else{
A8=Token;
}
break;
case '9':
if(A9!=0){
continue;
}
else{
A9=Token;
}
break;
default:
continue;
break;
}
break;
}


}
system("pause");
}
void DesenharJogo(int S1,int S2,int S3, int S4, int S5, int S6, int S7, int S8, int S9){
printf("     |     |     \n  ");
Marcar(S1);
printf("  |  ");
Marcar(S2);
printf("  |  ");
Marcar(S3);
printf("  \n_____|_____|_____\n     |     |     \n  ");
Marcar(S4);
printf("  |  ");
Marcar(S5);
printf("  |  ");
Marcar(S6);
printf("  \n_____|_____|_____\n     |     |     \n  ");
Marcar(S7);
printf("  |  ");
Marcar(S8);
printf("  |  ");
Marcar(S9);
printf("  \n     |     |     \n");
}

void Marcar(int Simbolo){
if(Simbolo==1){
    printf("X");
}
else if (Simbolo==2){
    printf("O");

 }
else{
    printf(" ");
}    
}
void Resultado(int S1,int S2,int S3, int S4, int S5, int S6, int S7, int S8, int S9){

if((S1==1 && S2==1 && S3 ==1)||(S1==2 && S2==2 && S3 ==2)){
system("cls");
printf("Parabens Jogador %d VENCEU!\n", S1);
DesenharJogo(S1, S2, S3, S4, S5, S6, S7, S8, S9);
system("pause");
exit(0);
} 
if((S4==1 && S5==1 && S6 ==1)||(S4==2 && S5==2 && S6 ==2)){
system("cls");
printf("Parabens Jogador %d VENCEU!\n", S4);
DesenharJogo(S1, S2, S3, S4, S5, S6, S7, S8, S9);
system("pause");
exit(0);
} 
if((S7==1 && S8==1 && S9 ==1)||(S7==2 && S8==2 && S9 ==2)){
system("cls");
printf("Parabens Jogador %d VENCEU!\n", S7);
DesenharJogo(S1, S2, S3, S4, S5, S6, S7, S8, S9);
system("pause");
exit(0);
} 
if((S1==1 && S4==1 && S7 ==1)||(S1==2 && S4==2 && S7 ==2)){
system("cls");
printf("Parabens Jogador %d VENCEU!\n", S1);
DesenharJogo(S1, S2, S3, S4, S5, S6, S7, S8, S9);
system("pause");
exit(0);
} 
if((S2==1 && S5==1 && S8 ==1)||(S2==2 && S5==2 && S8 ==2)){
system("cls");
printf("Parabens Jogador %d VENCEU!\n", S2);
DesenharJogo(S1, S2, S3, S4, S5, S6, S7, S8, S9);
system("pause");
exit(0);
} 
if((S3==1 && S6==1 && S9 ==1)||(S3==2 && S6==2 && S9 ==2)){
system("cls");
printf("Parabens Jogador %d VENCEU!\n", S3);
DesenharJogo(S1, S2, S3, S4, S5, S6, S7, S8, S9);
system("pause");
exit(0);
} 
if((S1==1 && S5==1 && S9 ==1)||(S1==2 && S5==2 && S9 ==2)){
system("cls");
printf("Parabens Jogador %d VENCEU!\n", S1);
DesenharJogo(S1, S2, S3, S4, S5, S6, S7, S8, S9);
system("pause");
exit(0);
} 
if((S3==1 && S5==1 && S7 ==1)||(S3==2 && S5==2 && S7 ==2)){
system("cls");
printf("Parabens Jogador %d VENCEU!\n", S3);
DesenharJogo(S1, S2, S3, S4, S5, S6, S7, S8, S9);
system("pause");
exit(0);
} 



}