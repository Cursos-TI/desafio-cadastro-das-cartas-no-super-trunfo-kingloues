#include <stdio.h>

int main (){

 //declaração de variáveis

 int A, A1, A2, A3, A4;
    int B, B1, B2, B3, B4;
    int C, C1, C2, C3, C4;
    int D, D1, D2, D3, D4;
    int E, E1, E2, E3, E4;
    int F, F1, F2, F3, F4;
    int G, G1, G2, G3, G4;
    int H, H1, H2, H3, H4;


char nome_A[100];
char nome_A1[100];
char nome_A2[100];
char nome_A3[100];
char nome_A4[100];


char nome_B[100];
char nome_B1[100];
char nome_B2[100];
char nome_B3[100];
char nome_B4[100];


char nome_C[100];
char nome_C1[100];
char nome_C2[100];
char nome_C3[100];
char nome_C4[100];


char nome_D[100];
char nome_D1[100];
char nome_D2[100];
char nome_D3[100];
char nome_D4[100];


char nome_E[100];
char nome_E1[100];
char nome_E2[100];
char nome_E3[100];
char nome_E4[100];


char nome_F[100];
char nome_F1[100];
char nome_F2[100];
char nome_F3[100];
char nome_F4[100];


char nome_G[100];
char nome_G1[100];
char nome_G2[100];
char nome_G3[100];
char nome_G4[100];


char nome_H[100];
char nome_H1[100];
char nome_H2[100];
char nome_H3[100];
char nome_H4[100];

int populacao_A, populacao_A1, populacao_A2, populacao_A3, populacao_A4;
int area_A, area_A1, area_A2, area_A3, area_A4;
int PIB_A, PIB_A1, PIB_A2, PIB_A3, PIB_A4;
int pontos_A, pontos_A1, pontos_A2, pontos_A3, pontos_A4;

int populacao_B, populacao_B1, populacao_B2, populacao_B3, populacao_B4;
int area_B, area_B1, area_B2, area_B3, area_B4;
int PIB_B, PIB_B1, PIB_B2, PIB_B3, PIB_B4;
int pontos_B, pontos_B1, pontos_B2, pontos_B3, pontos_B4;

int populacao_C, populacao_C1, populacao_C2, populacao_C3, populacao_C4;
int area_C, area_C1, area_C2, area_C3, area_C4;
int PIB_C, PIB_C1, PIB_C2, PIB_C3, PIB_C4;
int pontos_C, pontos_C1, pontos_C2, pontos_C3, pontos_C4;

int populacao_D, populacao_D1, populacao_D2, populacao_D3, populacao_D4;
int area_D, area_D1, area_D2, area_D3, area_D4;
int PIB_D, PIB_D1, PIB_D2, PIB_D3, PIB_D4;
int pontos_D, pontos_D1, pontos_D2, pontos_D3, pontos_D4;

int populacao_E, populacao_E1, populacao_E2, populacao_E3, populacao_E4;
int area_E, area_E1, area_E2, area_E3, area_E4;
int PIB_E, PIB_E1, PIB_E2, PIB_E3, PIB_E4;
int pontos_E, pontos_E1, pontos_E2, pontos_E3, pontos_E4;

int populacao_F, populacao_F1, populacao_F2, populacao_F3, populacao_F4;
int area_F, area_F1, area_F2, area_F3, area_F4;
int PIB_F, PIB_F1, PIB_F2, PIB_F3, PIB_F4;
int pontos_F, pontos_F1, pontos_F2, pontos_F3, pontos_F4;

int populacao_G, populacao_G1, populacao_G2, populacao_G3, populacao_G4;
int area_G, area_G1, area_G2, area_G3, area_G4;
int PIB_G, PIB_G1, PIB_G2, PIB_G3, PIB_G4;
int pontos_G, pontos_G1, pontos_G2, pontos_G3, pontos_G4;

int populacao_H, populacao_H1, populacao_H2, populacao_H3, populacao_H4;
int area_H, area_H1, area_H2, area_H3, area_H4;
int PIB_H, PIB_H1, PIB_H2, PIB_H3, PIB_H4;
int pontos_H, pontos_H1, pontos_H2, pontos_H3, pontos_H4;


//entrada de dados

printf("Digite o nome do Estado A: ");
scanf("%s", nome_A);
printf("Digite o nome da cidade A1: ");
scanf("%s", nome_A1);
printf("Digite a população da cidade A1: ");
scanf("%d", &populacao_A1);
printf("Digite a área da cidade A1: ");
scanf("%d", &area_A1);
printf("Digite o PIB da cidade A1: ");
scanf("%d", &PIB_A1);
printf("Digite o número de pontos turísticos da cidade A1: ");
scanf("%d", &pontos_A1);

printf("Digite o nome da cidade A2: ");
scanf("%s", nome_A2);
printf("Digite a população da cidade A2: ");
scanf("%d", &populacao_A2);
printf("Digite a área da cidade A2: ");
scanf("%d", &area_A2);
printf("Digite o PIB da cidade A2: ");
scanf("%d", &PIB_A2);
printf("Digite o número de pontos turísticos da cidade A2: ");
scanf("%d", &pontos_A2);

printf("Digite o nome da cidade A3: ");
scanf("%s", nome_A3);
printf("Digite a população da cidade A3: ");
scanf("%d", &populacao_A3);
printf("Digite a área da cidade A3: ");
scanf("%d", &area_A3);
printf("Digite o PIB da cidade A3: ");
scanf("%d", &PIB_A3);
printf("Digite o número de pontos turísticos da cidade A3: ");
scanf("%d", &pontos_A3);

printf("Digite o nome da cidade A4: ");
scanf("%s", nome_A4);
printf("Digite a população da cidade A4: ");
scanf("%d", &populacao_A4);
printf("Digite a área da cidade A4: ");
scanf("%d", &area_A4);
printf("Digite o PIB da cidade A4: ");
scanf("%d", &PIB_A4);
printf("Digite o número de pontos turísticos da cidade A4: ");
scanf("%d", &pontos_A4);

printf("Digite o nome do Estado B: ");
scanf("%s", nome_B);
printf("Digite o nome da cidade B1: ");
scanf("%s", nome_B1);
printf("Digite a população da cidade B1: ");
scanf("%d", &populacao_B1);
printf("Digite a área da cidade B1: ");
scanf("%d", &area_B1);
printf("Digite o PIB da cidade B1: ");
scanf("%d", &PIB_B1);
printf("Digite o número de pontos turísticos da cidade B1: ");
scanf("%d", &pontos_B1);

printf("Digite o nome da cidade B2: ");
scanf("%s", nome_B2);
printf("Digite a população da cidade B2: ");
scanf("%d", &populacao_B2);
printf("Digite a área da cidade B2: ");
scanf("%d", &area_B2);
printf("Digite o PIB da cidade B2: ");
scanf("%d", &PIB_B2);
printf("Digite o número de pontos turísticos da cidade B2: ");
scanf("%d", &pontos_B2);

printf("Digite o nome da cidade B3: ");
scanf("%s", nome_B3);
printf("Digite a população da cidade B3: ");
scanf("%d", &populacao_B3);
printf("Digite a área da cidade B3: ");
scanf("%d", &area_B3);
printf("Digite o PIB da cidade B3: ");
scanf("%d", &PIB_B3);
printf("Digite o número de pontos turísticos da cidade B3: ");
scanf("%d", &pontos_B3);

printf("Digite o nome da cidade B4: ");
scanf("%s", nome_B4);
printf("Digite a população da cidade B4: ");
scanf("%d", &populacao_B4);
printf("Digite a área da cidade B4: ");
scanf("%d", &area_B4);
printf("Digite o PIB da cidade B4: ");
scanf("%d", &PIB_B4);
printf("Digite o número de pontos turísticos da cidade B4: ");
scanf("%d", &pontos_B4);

printf("Digite o nome do Estado C: ");
scanf("%s", nome_C);
printf("Digite o nome da cidade C1: ");
scanf("%s", nome_C1);
printf("Digite a população da cidade C1: ");
scanf("%d", &populacao_C1);
printf("Digite a área da cidade C1: ");
scanf("%d", &area_C1);
printf("Digite o PIB da cidade C1: ");
scanf("%d", &PIB_C1);
printf("Digite o número de pontos turísticos da cidade C1: ");
scanf("%d", &pontos_C1);

printf("Digite o nome da cidade C2: ");
scanf("%s", nome_C2);
printf("Digite a população da cidade C2: ");
scanf("%d", &populacao_C2);
printf("Digite a área da cidade C2: ");
scanf("%d", &area_C2);
printf("Digite o PIB da cidade C2: ");
scanf("%d", &PIB_C2);
printf("Digite o número de pontos turísticos da cidade C2: ");
scanf("%d", &pontos_C2);

printf("Digite o nome da cidade C3: ");
scanf("%s", nome_C3);
printf("Digite a população da cidade C3: ");
scanf("%d", &populacao_C3);
printf("Digite a área da cidade C3: ");
scanf("%d", &area_C3);
printf("Digite o PIB da cidade C3: ");
scanf("%d", &PIB_C3);
printf("Digite o número de pontos turísticos da cidade C3: ");
scanf("%d", &pontos_C3);

printf("Digite o nome da cidade C4: ");
scanf("%s", nome_C4);
printf("Digite a população da cidade C4: ");
scanf("%d", &populacao_C4);
printf("Digite a área da cidade C4: ");
scanf("%d", &area_C4);
printf("Digite o PIB da cidade C4: ");
scanf("%d", &PIB_C4);
printf("Digite o número de pontos turísticos da cidade C4: ");
scanf("%d", &pontos_C4);

printf("Digite o nome do Estado D: ");
scanf("%s", nome_D);
printf("Digite o nome da cidade D1: ");
scanf("%s", nome_D1);
printf("Digite a população da cidade D1: ");
scanf("%d", &populacao_D1);
printf("Digite a área da cidade D1: ");
scanf("%d", &area_D1);
printf("Digite o PIB da cidade D1: ");
scanf("%d", &PIB_D1);
printf("Digite o número de pontos turísticos da cidade D1: ");
scanf("%d", &pontos_D1);

printf("Digite o nome da cidade D2: ");
scanf("%s", nome_D2);
printf("Digite a população da cidade D2: ");
scanf("%d", &populacao_D2);
printf("Digite a área da cidade D2: ");
scanf("%d", &area_D2);
printf("Digite o PIB da cidade D2: ");
scanf("%d", &PIB_D2);
printf("Digite o número de pontos turísticos da cidade D2: ");
scanf("%d", &pontos_D2);

printf("Digite o nome da cidade D3: ");
scanf("%s", nome_D3);
printf("Digite a população da cidade D3: ");
scanf("%d", &populacao_D3);
printf("Digite a área da cidade D3: ");
scanf("%d", &area_D3);
printf("Digite o PIB da cidade D3: ");
scanf("%d", &PIB_D3);
printf("Digite o número de pontos turísticos da cidade D3: ");
scanf("%d", &pontos_D3);

printf("Digite o nome da cidade D4: ");
scanf("%s", nome_D4);
printf("Digite a população da cidade D4: ");
scanf("%d", &populacao_D4);
printf("Digite a área da cidade D4: ");
scanf("%d", &area_D4);
printf("Digite o PIB da cidade D4: ");
scanf("%d", &PIB_D4);
printf("Digite o número de pontos turísticos da cidade D4: ");
scanf("%d", &pontos_D4);

printf("Digite o nome do Estado E: ");
scanf("%s", nome_E);
printf("Digite o nome da cidade E1: ");
scanf("%s", nome_E1);
printf("Digite a população da cidade E1: ");
scanf("%d", &populacao_E1);
printf("Digite a área da cidade E1: ");
scanf("%d", &area_E1);
printf("Digite o PIB da cidade E1: ");
scanf("%d", &PIB_E1);
printf("Digite o número de pontos turísticos da cidade E1: ");
scanf("%d", &pontos_E1);

printf("Digite o nome da cidade E2: ");
scanf("%s", nome_E2);
printf("Digite a população da cidade E2: ");
scanf("%d", &populacao_E2);
printf("Digite a área da cidade E2: ");
scanf("%d", &area_E2);
printf("Digite o PIB da cidade E2: ");
scanf("%d", &PIB_E2);
printf("Digite o número de pontos turísticos da cidade E2: ");
scanf("%d", &pontos_E2);

printf("Digite o nome da cidade E3: ");
scanf("%s", nome_E3);
printf("Digite a população da cidade E3: ");
scanf("%d", &populacao_E3);
printf("Digite a área da cidade E3: ");
scanf("%d", &area_E3);
printf("Digite o PIB da cidade E3: ");
scanf("%d", &PIB_E3);
printf("Digite o número de pontos turísticos da cidade E3: ");
scanf("%d", &pontos_E3);

printf("Digite o nome da cidade E4: ");
scanf("%s", nome_E4);
printf("Digite a população da cidade E4: ");
scanf("%d", &populacao_E4);
printf("Digite a área da cidade E4: ");
scanf("%d", &area_E4);
printf("Digite o PIB da cidade E4: ");
scanf("%d", &PIB_E4);
printf("Digite o número de pontos turísticos da cidade E4: ");
scanf("%d", &pontos_E4);

printf("Digite o nome do Estado F: ");
scanf("%s", nome_F);
printf("Digite o nome da cidade F1: ");
scanf("%s", nome_F1);
printf("Digite a população da cidade F1: ");
scanf("%d", &populacao_F1);
printf("Digite a área da cidade F1: ");
scanf("%d", &area_F1);
printf("Digite o PIB da cidade F1: ");
scanf("%d", &PIB_F1);
printf("Digite o número de pontos turísticos da cidade F1: ");
scanf("%d", &pontos_F1);

printf("Digite o nome da cidade F2: ");
scanf("%s", nome_F2);
printf("Digite a população da cidade F2: ");
scanf("%d", &populacao_F2);
printf("Digite a área da cidade F2: ");
scanf("%d", &area_F2);
printf("Digite o PIB da cidade F2: ");
scanf("%d", &PIB_F2);
printf("Digite o número de pontos turísticos da cidade F2: ");
scanf("%d", &pontos_F2);

printf("Digite o nome da cidade F3: ");
scanf("%s", nome_F3);
printf("Digite a população da cidade F3: ");
scanf("%d", &populacao_F3);
printf("Digite a área da cidade F3: ");
scanf("%d", &area_F3);
printf("Digite o PIB da cidade F3: ");
scanf("%d", &PIB_F3);
printf("Digite o número de pontos turísticos da cidade F3: ");
scanf("%d", &pontos_F3);

printf("Digite o nome da cidade F4: ");
scanf("%s", nome_F4);
printf("Digite a população da cidade F4: ");
scanf("%d", &populacao_F4);
printf("Digite a área da cidade F4: ");
scanf("%d", &area_F4);
printf("Digite o PIB da cidade F4: ");
scanf("%d", &PIB_F4);
printf("Digite o número de pontos turísticos da cidade F4: ");
scanf("%d", &pontos_F4);

printf("Digite o nome do Estado G: ");
scanf("%s", nome_G);
printf("Digite o nome da cidade G1: ");
scanf("%s", nome_G1);
printf("Digite a população da cidade G1: ");
scanf("%d", &populacao_G1);
printf("Digite a área da cidade G1: ");
scanf("%d", &area_G1);
printf("Digite o PIB da cidade G1: ");
scanf("%d", &PIB_G1);
printf("Digite o número de pontos turísticos da cidade G1: ");
scanf("%d", &pontos_G1);

printf("Digite o nome da cidade G2: ");
scanf("%s", nome_G2);
printf("Digite a população da cidade G2: ");
scanf("%d", &populacao_G2);
printf("Digite a área da cidade G2: ");
scanf("%d", &area_G2);
printf("Digite o PIB da cidade G2: ");
scanf("%d", &PIB_G2);
printf("Digite o número de pontos turísticos da cidade G2: ");
scanf("%d", &pontos_G2);

printf("Digite o nome da cidade G3: ");
scanf("%s", nome_G3);
printf("Digite a população da cidade G3: ");
scanf("%d", &populacao_G3);
printf("Digite a área da cidade G3: ");
scanf("%d", &area_G3);
printf("Digite o PIB da cidade G3: ");
scanf("%d", &PIB_G3);
printf("Digite o número de pontos turísticos da cidade G3: ");
scanf("%d", &pontos_G3);

printf("Digite o nome da cidade G4: ");
scanf("%s", nome_G4);
printf("Digite a população da cidade G4: ");
scanf("%d", &populacao_G4);
printf("Digite a área da cidade G4: ");
scanf("%d", &area_G4);
printf("Digite o PIB da cidade G4: ");
scanf("%d", &PIB_G4);
printf("Digite o número de pontos turísticos da cidade G4: ");
scanf("%d", &pontos_G4);

printf("Digite o nome do Estado H: ");
scanf("%s", nome_H);
printf("Digite o nome da cidade H1: ");
scanf("%s", nome_H1);
printf("Digite a população da cidade H1: ");
scanf("%d", &populacao_H1);
printf("Digite a área da cidade H1: ");
scanf("%d", &area_H1);
printf("Digite o PIB da cidade H1: ");
scanf("%d", &PIB_H1);
printf("Digite o número de pontos turísticos da cidade H1: ");
scanf("%d", &pontos_H1);

printf("Digite o nome da cidade H2: ");
scanf("%s", nome_H2);
printf("Digite a população da cidade H2: ");
scanf("%d", &populacao_H2);
printf("Digite a área da cidade H2: ");
scanf("%d", &area_H2);
printf("Digite o PIB da cidade H2: ");
scanf("%d", &PIB_H2);
printf("Digite o número de pontos turísticos da cidade H2: ");
scanf("%d", &pontos_H2);

printf("Digite o nome da cidade H3: ");
scanf("%s", nome_H3);
printf("Digite a população da cidade H3: ");
scanf("%d", &populacao_H3);
printf("Digite a área da cidade H3: ");
scanf("%d", &area_H3);
printf("Digite o PIB da cidade H3: ");
scanf("%d", &PIB_H3);
printf("Digite o número de pontos turísticos da cidade H3: ");
scanf("%d", &pontos_H3);

printf("Digite o nome da cidade H4: ");
scanf("%s", nome_H4);
printf("Digite a população da cidade H4: ");
scanf("%d", &populacao_H4);
printf("Digite a área da cidade H4: ");
scanf("%d", &area_H4);
printf("Digite o PIB da cidade H4: ");
scanf("%d", &PIB_H4);
printf("Digite o número de pontos turísticos da cidade H4: ");
scanf("%d", &pontos_H4);

//resultado do jogo

printf("Estado A\n");
printf("Cidade A1\n");
printf("População: %d\n", populacao_A1);
printf("Área: %d\n", area_A1);
printf("PIB: %d\n", PIB_A1);
printf("Pontos turísticos: %d\n", pontos_A1);

printf("Cidade A2\n");
printf("População: %d\n", populacao_A2);
printf("Área: %d\n", area_A2);
printf("PIB: %d\n", PIB_A2);
printf("Pontos turísticos: %d\n", pontos_A2);

printf("Cidade A3\n");
printf("População: %d\n", populacao_A3);
printf("Área: %d\n", area_A3);
printf("PIB: %d\n", PIB_A3);
printf("Pontos turísticos: %d\n", pontos_A3);

printf("Cidade A4\n");
printf("População: %d\n", populacao_A4);
printf("Área: %d\n", area_A4);
printf("PIB: %d\n", PIB_A4);
printf("Pontos turísticos: %d\n", pontos_A4);

printf("Estado B\n");
printf("Cidade B1\n");
printf("População: %d\n", populacao_B1);
printf("Área: %d\n", area_B1);
printf("PIB: %d\n", PIB_B1);
printf("Pontos turísticos: %d\n", pontos_B1);

printf("Cidade B2\n");
printf("População: %d\n", populacao_B2);
printf("Área: %d\n", area_B2);
printf("PIB: %d\n", PIB_B2);
printf("Pontos turísticos: %d\n", pontos_B2);

printf("Cidade B3\n");
printf("População: %d\n", populacao_B3);
printf("Área: %d\n", area_B3);
printf("PIB: %d\n", PIB_B3);
printf("Pontos turísticos: %d\n", pontos_B3);

printf("Cidade B4\n");
printf("População: %d\n", populacao_B4);
printf("Área: %d\n", area_B4);
printf("PIB: %d\n", PIB_B4);
printf("Pontos turísticos: %d\n", pontos_B4);

printf("Estado C\n");
printf("Cidade C1\n");
printf("População: %d\n", populacao_C1);
printf("Área: %d\n", area_C1);
printf("PIB: %d\n", PIB_C1);
printf("Pontos turísticos: %d\n", pontos_C1);

printf("Cidade C2\n");
printf("População: %d\n", populacao_C2);
printf("Área: %d\n", area_C2);
printf("PIB: %d\n", PIB_C2);
printf("Pontos turísticos: %d\n", pontos_C2);

printf("Cidade C3\n");
printf("População: %d\n", populacao_C3);
printf("Área: %d\n", area_C3);
printf("PIB: %d\n", PIB_C3);
printf("Pontos turísticos: %d\n", pontos_C3);

printf("Cidade C4\n");
printf("População: %d\n", populacao_C4);
printf("Área: %d\n", area_C4);
printf("PIB: %d\n", PIB_C4);
printf("Pontos turísticos: %d\n", pontos_C4);

printf("Estado D\n");
printf("Cidade D1\n");
printf("População: %d\n", populacao_D1);
printf("Área: %d\n", area_D1);
printf("PIB: %d\n", PIB_D1);
printf("Pontos turísticos: %d\n", pontos_D1);

printf("Cidade D2\n");
printf("População: %d\n", populacao_D2);
printf("Área: %d\n", area_D2);
printf("PIB: %d\n", PIB_D2);
printf("Pontos turísticos: %d\n", pontos_D2);

printf("Cidade D3\n");
printf("População: %d\n", populacao_D3);
printf("Área: %d\n", area_D3);
printf("PIB: %d\n", PIB_D3);
printf("Pontos turísticos: %d\n", pontos_D3);

printf("Cidade D4\n");
printf("População: %d\n", populacao_D4);
printf("Área: %d\n", area_D4);
printf("PIB: %d\n", PIB_D4);
printf("Pontos turísticos: %d\n", pontos_D4);

printf("Estado E\n");
printf("Cidade E1\n");
printf("População: %d\n", populacao_E1);
printf("Área: %d\n", area_E1);
printf("PIB: %d\n", PIB_E1);
printf("Pontos turísticos: %d\n", pontos_E1);

printf("Cidade E2\n");
printf("População: %d\n", populacao_E2);
printf("Área: %d\n", area_E2);
printf("PIB: %d\n", PIB_E2);
printf("Pontos turísticos: %d\n", pontos_E2);

printf("Cidade E3\n");
printf("População: %d\n", populacao_E3);
printf("Área: %d\n", area_E3);
printf("PIB: %d\n", PIB_E3);
printf("Pontos turísticos: %d\n", pontos_E3);

printf("Cidade E4\n");
printf("População: %d\n", populacao_E4);
printf("Área: %d\n", area_E4);
printf("PIB: %d\n", PIB_E4);
printf("Pontos turísticos: %d\n", pontos_E4);

printf("Estado F\n");
printf("Cidade F1\n");
printf("População: %d\n", populacao_F1);
printf("Área: %d\n", area_F1);
printf("PIB: %d\n", PIB_F1);
printf("Pontos turísticos: %d\n", pontos_F1);

printf("Cidade F2\n");
printf("População: %d\n", populacao_F2);
printf("Área: %d\n", area_F2);
printf("PIB: %d\n", PIB_F2);
printf("Pontos turísticos: %d\n", pontos_F2);

printf("Cidade F3\n");
printf("População: %d\n", populacao_F3);
printf("Área: %d\n", area_F3);
printf("PIB: %d\n", PIB_F3);
printf("Pontos turísticos: %d\n", pontos_F3);

printf("Cidade F4\n");
printf("População: %d\n", populacao_F4);
printf("Área: %d\n", area_F4);
printf("PIB: %d\n", PIB_F4);
printf("Pontos turísticos: %d\n", pontos_F4);

printf("Estado G\n");
printf("Cidade G1\n");
printf("População: %d\n", populacao_G1);
printf("Área: %d\n", area_G1);
printf("PIB: %d\n", PIB_G1);
printf("Pontos turísticos: %d\n", pontos_G1);

printf("Cidade G2\n");
printf("População: %d\n", populacao_G2);
printf("Área: %d\n", area_G2);
printf("PIB: %d\n", PIB_G2);
printf("Pontos turísticos: %d\n", pontos_G2);

printf("Cidade G3\n");
printf("População: %d\n", populacao_G3);
printf("Área: %d\n", area_G3);
printf("PIB: %d\n", PIB_G3);
printf("Pontos turísticos: %d\n", pontos_G3);

printf("Cidade G4\n");
printf("População: %d\n", populacao_G4);
printf("Área: %d\n", area_G4);
printf("PIB: %d\n", PIB_G4);
printf("Pontos turísticos: %d\n", pontos_G4);

printf("Estado H\n");
printf("Cidade H1\n");
printf("População: %d\n", populacao_H1);
printf("Área: %d\n", area_H1);
printf("PIB: %d\n", PIB_H1);
printf("Pontos turísticos: %d\n", pontos_H1);

printf("Cidade H2\n");
printf("População: %d\n", populacao_H2);
printf("Área: %d\n", area_H2);
printf("PIB: %d\n", PIB_H2);
printf("Pontos turísticos: %d\n", pontos_H2);

printf("Cidade H3\n");
printf("População: %d\n", populacao_H3);
printf("Área: %d\n", area_H3);
printf("PIB: %d\n", PIB_H3);
printf("Pontos turísticos: %d\n", pontos_H3);

printf("Cidade H4\n");
printf("População: %d\n", populacao_H4);
printf("Área: %d\n", area_H4);
printf("PIB: %d\n", PIB_H4);
printf("Pontos turísticos: %d\n", pontos_H4);


 return 0;
}
