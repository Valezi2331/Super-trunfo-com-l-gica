#include <stdio.h>

int main(){

char estado1;
char cod1[10];
char cidade1[10];
unsigned int populacao1;
float area1;
float pib1;
unsigned int turistico1;

char estado2;
char cod2[10];
char cidade2[50];
unsigned int populacao2;
float area2;
float pib2;
unsigned int turistico2;

printf("Vamos introudzir os dados da carta 1\n");

printf("Insira o estado(A a H) \n");
scanf(" %c", &estado1);

printf("Insira o código da carta \n");
scanf("%s", cod1);

printf("Insira a cidade \n");
scanf("%s", cidade1);

printf("Insira a população \n");
scanf("%d", &populacao1);

printf("Insira a área da cidade \n");
scanf("%f", &area1);

printf("Insira o PIB \n");
scanf("%f", &pib1);

printf("Insira a quantidade de pontos turísticos \n");
scanf("%d", &turistico1);

printf("Agora vamos fazer a carta 2 \n");

printf("Insira o estado(A a H) \n");
scanf(" %c", &estado2);

printf("Insira o código da carta \n");
scanf(" %s", cod2);

printf("Insira a cidade \n");
scanf("%s", cidade2);

printf("Insira a população \n");
scanf("%d", &populacao2);

printf("Insira a área da cidade \n");
scanf("%f", &area2);

printf("Insira o PIB \n");
scanf("%f", &pib2);

printf("Insira a quantidade de pontos turísticos \n");
scanf("%d", &turistico2);



float densidade1;
float densidade2;

densidade1= (populacao1 / area1);
densidade2= (populacao2 / area2);



float pibcapita1;
float pibcapita2;

pibcapita1= (pib1 / populacao1);
pibcapita2= (pib2 / populacao2);    



int a = 1;
float inversodensidade1 = a / densidade1;
float inversodensidade2 = a / densidade2;
float superpoder1 =(populacao1 + area1 + pib1 + turistico1 + pibcapita1 + inversodensidade1);
float superpoder2 =(populacao2 + area2 + pib2 + turistico2 + pibcapita2 + inversodensidade2);



printf("Informações da carta 1 \n");
printf("Estado: %c \n", estado1);
printf("Código: %s \n", cod1);
printf("Cidade: %s \n", cidade1);
printf("População: %d \n", populacao1);
printf("Área: %f \n", area1);
printf("PIB: %f \n", pib1);
printf("Quantidade de pontos turísticos: %d \n", turistico1);
printf("Densidade populacional: %f \n", densidade1);
printf("Pib per Capita: %f \n ", pibcapita1);
printf ("Super poder: %f \n ", superpoder1);
printf("\n"); 

printf("Informações da carta 2 \n");
printf("Estado: %c \n", estado2);
printf("Código: %s \n", cod2);
printf("Cidade: %s \n", cidade2);
printf("População: %d \n", populacao2);
printf("Área: %f \n", area2);
printf("PIB: %f \n", pib2);
printf("Quantidade de pontos turísticos: %d \n", turistico2);
printf("Densidade populacional: %f \n", densidade2);
printf("Pib per Capita: %f \n ", pibcapita2);
printf ("Super poder: %f \n  \n \n", superpoder2);

int menu1, menu2;
printf("Qual o valor que vai ser comparado entre as duas cartas? \n");
printf("1: População \n");
printf("2: Área \n");
printf("3: PIB \n");
printf("4: Pontos turísticos \n");
printf("5: Densidade demográfica \n");
printf("6: PIB per capita \n");
printf("7: Super poder \n");
scanf("%d", &menu1);

switch(menu1){

	case 1:
	printf("Carta 1: %s \n", cidade1);
	printf("Carta 2: %s \n", cidade2);
	printf("Valor comparado: População \n");
		if(populacao1 > populacao2){
			printf("População da carta 1 vence");
		} else if(populacao1 = populacao2){
			printf("Empate");
		} else (populacao1 < populacao2);{
			printf("População da carta 2 vence");
		}
	break;

	case 2:
	printf("Carta 1: %s \n", cidade1);
	printf("Carta 2: %s \n", cidade2);
	printf("Valor comparado: Área \n");
		if(area1 > area1){
			printf("Área da carta 1 vence");
		} else if(area1 = area2){
			printf("Empate");
		} else (area1 < area1);{
			printf("Área da carta 2 vence");
		}
	break;

	case 3:
	printf("Carta 1: %s \n", cidade1);
	printf("Carta 2: %s \n", cidade2);
	printf("Valor comparado: PIB \n");
		if(pib1 > pib2){
			printf("PIB da carta 1 vence");
		} else if(pib1 = pib2){
			printf("Empate");
		} else (pib1 < pib2);{
			printf("PIB da carta 2 vence");
		}
	break;

	case 4:
	printf("Carta 1: %s \n", cidade1);
	printf("Carta 2: %s \n", cidade2);
	printf("Valor comparado: Pontos turísticos  \n");
		if(turistico1 > turistico2){
			printf("Pontos turísticos da carta 1 vence");
		} else if(turistico1 = turistico2){
			printf("Empate");
		} else (turistico1 < turistico2);{
			printf("Pontos turísticos da carta 2 vence");
		}
	break;

	case 5:
	printf("Carta 1: %s \n", cidade1);
	printf("Carta 2: %s \n", cidade2);
	printf("Valor comparado: Densidade demográfica  \n");
		if(densidade1 < densidade2){
			printf("Densidade demográfica da carta 1 vence");
		} else if(densidade1 = densidade2){
			printf("Empate");
		} else (densidade1 > densidade2);{
			printf("Densidade demográfica da carta 2 vence");
		}
	break;

	case 6:
	printf("Carta 1: %s \n", cidade1);
	printf("Carta 2: %s \n", cidade2);
	printf("Valor comparado: PIB per capita  \n");
		if(pibcapita1 > pibcapita2){
			printf("PIB per capita da carta 1 vence");
		} else if(pibcapita1 = pibcapita2){
			printf("Empate");
		} else (pibcapita1 < pibcapita2);{
			printf("PIB per capita da carta 2 vence");
		}
	break;

	case 7:
	printf("Carta 1: %s \n", cidade1);
	printf("Carta 2: %s \n", cidade2);
	printf("Valor comparado: Super poder  \n");
		if(superpoder1 > superpoder2){
			printf("Super poder da carta 1 vence");
		} else if(superpoder1 = superpoder2){
			printf("Empate");
		} else (superpoder1 < superpoder2);{
			printf("Super poder da carta 2 vence");
		}
	break;

}

printf("Selecione outro atributo");
printf("Qual o valor que vai ser comparado entre as duas cartas? \n");
printf("1: População \n");
printf("2: Área \n");
printf("3: PIB \n");
printf("4: Pontos turísticos \n");
printf("5: Densidade demográfica \n");
printf("6: PIB per capita \n");
printf("7: Super poder \n");
scanf("%d", &menu2);

if (menu2 = menu1);{

printf("Atributo já selecionado anteriormente, relecione outro");
scanf("%d", &menu2);

}

switch(menu2){

	case 1:
	printf("Carta 1: %s \n", cidade1);
	printf("Carta 2: %s \n", cidade2);
	printf("Valor comparado: População \n");
		if(populacao1 > populacao2){
			printf("População da carta 1 vence");
		} else if(populacao1 = populacao2){
			printf("Empate");
		} else (populacao1 < populacao2);{
			printf("População da carta 2 vence");
		}
	break;

	case 2:
	printf("Carta 1: %s \n", cidade1);
	printf("Carta 2: %s \n", cidade2);
	printf("Valor comparado: Área \n");
		if(area1 > area1){
			printf("Área da carta 1 vence");
		} else if(area1 = area2){
			printf("Empate");
		} else (area1 < area1);{
			printf("Área da carta 2 vence");
		}
	break;

	case 3:
	printf("Carta 1: %s \n", cidade1);
	printf("Carta 2: %s \n", cidade2);
	printf("Valor comparado: PIB \n");
		if(pib1 > pib2){
			printf("PIB da carta 1 vence");
		} else if(pib1 = pib2){
			printf("Empate");
		} else (pib1 < pib2);{
			printf("PIB da carta 2 vence");
		}
	break;

	case 4:
	printf("Carta 1: %s \n", cidade1);
	printf("Carta 2: %s \n", cidade2);
	printf("Valor comparado: Pontos turísticos  \n");
		if(turistico1 > turistico2){
			printf("Pontos turísticos da carta 1 vence");
		} else if(turistico1 = turistico2){
			printf("Empate");
		} else (turistico1 < turistico2);{
			printf("Pontos turísticos da carta 2 vence");
		}
	break;

	case 5:
	printf("Carta 1: %s \n", cidade1);
	printf("Carta 2: %s \n", cidade2);
	printf("Valor comparado: Densidade demográfica  \n");
		if(densidade1 < densidade2){
			printf("Densidade demográfica da carta 1 vence");
		} else if(densidade1 = densidade2){
			printf("Empate");
		} else (densidade1 > densidade2);{
			printf("Densidade demográfica da carta 2 vence");
		}
	break;

	case 6:
	printf("Carta 1: %s \n", cidade1);
	printf("Carta 2: %s \n", cidade2);
	printf("Valor comparado: PIB per capita  \n");
		if(pibcapita1 > pibcapita2){
			printf("PIB per capita da carta 1 vence");
		} else if(pibcapita1 = pibcapita2){
			printf("Empate");
		} else (pibcapita1 < pibcapita2);{
			printf("PIB per capita da carta 2 vence");
		}
	break;

	case 7:
	printf("Carta 1: %s \n", cidade1);
	printf("Carta 2: %s \n", cidade2);
	printf("Valor comparado: Super poder  \n");
		if(superpoder1 > superpoder2){
			printf("Super poder da carta 1 vence");
		} else if(superpoder1 = superpoder2){
			printf("Empate");
		} else (superpoder1 < superpoder2);{
			printf("Super poder da carta 2 vence");
		}
	break;

}




}
