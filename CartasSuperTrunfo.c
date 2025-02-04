#include <stdio.h>
#include <stdlib.h>

int main() {

 char pais[20];//nome do pais 

  int estado1, estado2, estado3, estado4, estado5, estado6, estado7, estado8;//estados
char cidade1[100], cidade2[100], cidade3[100], cidade4[100];//cidades do estado 1
char cidade5[100], cidade6[100], cidade7[100], cidade8[100];//cidades do estado 2
char cidade9[100], cidade10[100], cidade11[100], cidade12[100];//cidades do estado 3
char cidade13[100], cidade14[100], cidade15[100], cidade16[100];//cidades do estado 4
char cidade17[100], cidade18[100], cidade19[100], cidade20[100];//cidades do estado 5
char cidade21[100], cidade22[100], cidade23[100], cidade24[100];//cidades do estado 6
char cidade25[100], cidade26[100], cidade27[100], cidade28[100];//cidades do estado 7
char cidade29[100], cidade30[100], cidade31[100], cidade32[100];//cidades do estado 8



long long int populacao1, populacao2, populacao3, populacao4;//populacao das cidades do estado 1
long long int populacao5, populacao6, populacao7, populacao8;//populacao das cidades do estado 2 
long long int populacao9, populacao10, populacao11, populacao12;//populacao das cidades do estado 3
long long int populacao13, populacao14, populacao15, populacao16;//populacao das cidades do estado 4
long long int populacao17, populacao18, populacao19, populacao20;//populacao das cidades do estado 5   
long long int populacao21, populacao22, populacao23, populacao24;//populacao das cidades do estado 6
long long int populacao25, populacao26, populacao27, populacao28;//populacao das cidades do estado 7
long long int populacao29, populacao30, populacao31, populacao32;//populacao das cidades do estado 8



float area1, area2, area3, area4;//area das cidades do estado 1
float area5, area6, area7, area8;//area das cidades do estado 2
float area9, area10, area11, area12;//area das cidades do estado 3 
float area13, area14, area15, area16;//area das cidades do estado 4
float area17, area18, area19, area20;//area das cidades do estado 5
float area21, area22, area23, area24;//area das cidades do estado 6
float area25, area26, area27, area28;//area das cidades do estado 7
float area29, area30, area31, area32;//area das cidades do estado 8



int turismo1, turismo2, turismo3, turismo4;//turismo das cidades do estado 1
int turismo5, turismo6, turismo7, turismo8;//turismo das cidades do estado 2
int turismo9, turismo10, turismo11, turismo12;//turismo das cidades do estado 3
int turismo13, turismo14, turismo15, turismo16;//turismo das cidades do estado 4
int turismo17, turismo18, turismo19, turismo20;//turismo das cidades do estado 5
int turismo21, turismo22, turismo23, turismo24;//turismo das cidades do estado 6
int turismo25, turismo26, turismo27, turismo28;//turismo das cidades do estado 7
int turismo29, turismo30, turismo31, turismo32;//turismo das cidades do estado 8


long long int PIB1, PIB2, PIB3, PIB4;//PIB das cidades do estado 1
long long int PIB5, PIB6, PIB7, PIB8;//PIB das cidades do estado 2
long long int PIB9, PIB10, PIB11, PIB12;//PIB das cidades do estado 3
long long int PIB13, PIB14, PIB15, PIB16;//PIB das cidades do estado 4
long long int PIB17, PIB18, PIB19, PIB20;//PIB das cidades do estado 5
long long int PIB21, PIB22, PIB23, PIB24;//PIB das cidades do estado 6
long long int PIB25, PIB26, PIB27, PIB28;//PIB das cidades do estado 7
long long int PIB29, PIB30, PIB31, PIB32;//PIB das cidades do estado 8



 printf("           SUPER TRUNFO\n");

printf("Bem vindo ao jogo super trunfo\n");

 printf("Para inciar o jogo primeiro vamos cadastrar suas cartas\n");
    printf("voce precisara cadatrastar cartas de um país que será dividido em oito estados, identificados pelas letras de A a H.\n");
    printf("Cada estado terá quatro cidades, identificadas pelos números de 1 a 4.\n");
    printf("Cada cidade terá quatro características: população, PIB, área e turismo.\n");

printf("      vamos comecar escolhendo o pais\n");
 scanf("%s", pais);

  printf("     Vamos começar cadastrando as cartas do estado A\n");
printf("  Digite o nome da cidade 1\n");
getchar();//limpar o buffer do teclado
 fgets(cidade1, sizeof(cidade1), stdin); //fgets lê strings com espaços

printf("Digite a população da cidade 1\n");
scanf("%lld", &populacao1);
while (getchar() != '\n'); // Limpa o buffer corretamente

printf("Digite a área da cidade 1\n");
scanf("%f", &area1);
while (getchar() != '\n'); // Limpa o buffer

printf("Digite o turismo da cidade 1\n");
scanf("%d", &turismo1);
while (getchar() != '\n'); // Limpa o buffer

printf("Digite o PIB da cidade 1\n");
scanf("%lld", &PIB1);
while (getchar() != '\n'); // Limpa o buffer

printf("  Digite o nome da cidade 2\n");
getchar();//limpar o buffer do teclado
 fgets(cidade2, sizeof(cidade2), stdin); //fgets lê strings com espaços

printf("Digite a população da cidade 2\n");
scanf("%lld", &populacao2);
while (getchar() != '\n'); // Limpa o buffer corretamente

printf("Digite a área da cidade 2\n");
scanf("%f", &area2);
while (getchar() != '\n'); // Limpa o buffer

printf("Digite o turismo da cidade 2\n");
scanf("%d", &turismo2);
while (getchar() != '\n'); // Limpa o buffer

printf("Digite o PIB da cidade 2\n");
scanf("%lld", &PIB2);
while (getchar() != '\n'); // Limpa o buffer
  

 printf(" Agora Digite o nome da cidade 3\n");
getchar();//limpar o buffer do teclado
 fgets(cidade3, sizeof(cidade3), stdin); //fgets lê strings com espaços

printf("Digite a população da cidade 3\n");
scanf("%lld", &populacao3);
while (getchar() != '\n'); // Limpa o buffer corretamente

printf("Digite a área da cidade 3\n");
scanf("%f", &area3);
while (getchar() != '\n'); // Limpa o buffer

printf("Digite o turismo da cidade 3\n");
scanf("%d", &turismo3);
while (getchar() != '\n'); // Limpa o buffer

printf("Digite o PIB da cidade 3\n");
scanf("%lld", &PIB3);
while (getchar() != '\n'); // Limpa o buffer
  

   printf("  Digite o nome da cidade 4\n");
getchar();//limpar o buffer do teclado
 fgets(cidade4, sizeof(cidade4), stdin); //fgets lê strings com espaços

printf("Digite a população da cidade 4\n");
scanf("%lld", &populacao4);
while (getchar() != '\n'); // Limpa o buffer corretamente

printf("Digite a área da cidade 4\n");
scanf("%f", &area4);
while (getchar() != '\n'); // Limpa o buffer

printf("Digite o turismo da cidade 4\n");
scanf("%d", &turismo4);
while (getchar() != '\n'); // Limpa o buffer

printf("Digite o PIB da cidade 4\n");
scanf("%lld", &PIB4);
while (getchar() != '\n'); // Limpa o buffer
  
  printf("Vamos cadastrar as cartas do estado B\n"); // Estado B
    printf("Digite o nome da cidade 5:\n");
    getchar(); // Limpa o buffer do teclado
    fgets(cidade5, sizeof(cidade5), stdin); // Lê o nome da cidade

    printf("Digite a população da cidade 5:\n");
    scanf("%lld", &populacao5);
    while (getchar() != '\n'); // Limpa o buffer corretamente

    printf("Digite a área da cidade 5:\n");
    scanf("%f", &area5);
    while (getchar() != '\n'); // Limpa o buffer corretamente

    printf("Digite o turismo da cidade 5:\n");
    scanf("%d", &turismo5);
    while (getchar() != '\n'); // Limpa o buffer corretamente

    printf("Digite o PIB da cidade 5:\n");
    scanf("%lld", &PIB5);
    while (getchar() != '\n'); // Limpa o buffer corretamente

printf("Digite o nome da cidade 6:\n");
getchar(); // Limpa o buffer do teclado
fgets(cidade6, sizeof(cidade6), stdin); // Lê o nome da cidade

printf("Digite a população da cidade 6:\n");
scanf("%lld", &populacao6);
while (getchar() != '\n'); // Limpa o buffer corretamente

printf("Digite a área da cidade 6:\n");
scanf("%f", &area6);
while (getchar() != '\n'); // Limpa o buffer corretamente

printf("Digite o turismo da cidade 6:\n");
scanf("%d", &turismo6);
while (getchar() != '\n'); // Limpa o buffer corretamente

printf("Digite o PIB da cidade 6:\n");
scanf("%lld", &PIB6);
while (getchar() != '\n'); // Limpa o buffer corretamente

printf("Digite o nome da cidade 7:\n");
getchar(); // Limpa o buffer do teclado
fgets(cidade7, sizeof(cidade7), stdin); // Lê o nome da cidade

printf("Digite a população da cidade 7:\n");
scanf("%lld", &populacao7);
while (getchar() != '\n'); // Limpa o buffer corretamente

printf("Digite a área da cidade 7:\n");
scanf("%f", &area7);
while (getchar() != '\n'); // Limpa o buffer corretamente

printf("Digite o turismo da cidade 7:\n");
scanf("%d", &turismo7);
while (getchar() != '\n'); // Limpa o buffer corretamente

printf("Digite o PIB da cidade 7:\n");
scanf("%lld", &PIB7);
while (getchar() != '\n'); // Limpa o buffer corretamente

printf("Digite o nome da cidade 8:\n");
getchar(); // Limpa o buffer do teclado
fgets(cidade8, sizeof(cidade8), stdin); // Lê o nome da cidade

printf("Digite a população da cidade 8:\n");
scanf("%lld", &populacao8);
while (getchar() != '\n'); // Limpa o buffer corretamente

printf("Digite a área da cidade 8:\n");
scanf("%f", &area8);
while (getchar() != '\n'); // Limpa o buffer corretamente

printf("Digite o turismo da cidade 8:\n");
scanf("%d", &turismo8);
while (getchar() != '\n'); // Limpa o buffer corretamente

printf("Digite o PIB da cidade 8:\n");
scanf("%lld", &PIB8);

    printf("Agora as cartas do estado C\n"); // Estado C
    printf("Digite o nome da cidade 9:\n");
    getchar();
    fgets(cidade9, sizeof(cidade9), stdin);

    printf("Digite a população da cidade 9:\n");
    scanf("%lld", &populacao9);
    while (getchar() != '\n');

    printf("Digite a área da cidade 9:\n");
    scanf("%f", &area9);
    while (getchar() != '\n');

    printf("Digite o turismo da cidade 9:\n");
    scanf("%d", &turismo9);
    while (getchar() != '\n');

    printf("Digite o PIB da cidade 9:\n");
    scanf("%lld", &PIB9);
    while (getchar() != '\n');

    printf("Digite o nome da cidade 10:\n");
    getchar();
    fgets(cidade10, sizeof(cidade10), stdin);

    printf("Digite a população da cidade 10:\n");
    scanf("%lld", &populacao10);
    while (getchar() != '\n');

    printf("Digite a área da cidade 10:\n");
    scanf("%f", &area10);
    while (getchar() != '\n');

    printf("Digite o turismo da cidade 10:\n");
    scanf("%d", &turismo10);
    while (getchar() != '\n');

    printf("Digite o PIB da cidade 10:\n");
    scanf("%lld", &PIB10);
    while (getchar() != '\n');

    printf("Digite o nome da cidade 11:\n");
    getchar();
    fgets(cidade11, sizeof(cidade11), stdin);

    printf("Digite a população da cidade 11:\n");
    scanf("%lld", &populacao11);
    while (getchar() != '\n');

    printf("Digite a área da cidade 11:\n");
    scanf("%f", &area11);
    while (getchar() != '\n');

    printf("Digite o turismo da cidade 11:\n");
    scanf("%d", &turismo11);
    while (getchar() != '\n');

    printf("Digite o PIB da cidade 11:\n");
    scanf("%lld", &PIB11);
    while (getchar() != '\n');

    printf("Digite o nome da cidade 12:\n");
    getchar();
    fgets(cidade12, sizeof(cidade12), stdin);

    printf("Digite a população da cidade 12:\n");
    scanf("%dll", &populacao12);
    while (getchar() != '\n');

    printf("Digite a área da cidade 12:\n");
    scanf("%f", &area12);
    while (getchar() != '\n');

    printf("Digite o turismo da cidade 12:\n");
    scanf("%d", &turismo12);
    while (getchar() != '\n');

    printf("Digite o PIB da cidade 12:\n");
    scanf("%lld", &PIB12);
    while (getchar() != '\n');

    printf("Vamos cadastrar as cartas do estado D\n"); // Estado D
    printf("Digite o nome da cidade 13:\n");
    getchar();
    fgets(cidade13, sizeof(cidade13), stdin);

    printf("Digite a população da cidade 13:\n");
    scanf("%lld", &populacao13);
    while (getchar() != '\n');

    printf("Digite a área da cidade 13:\n");
    scanf("%f", &area13);
    while (getchar() != '\n');

    printf("Digite o turismo da cidade 13:\n");
    scanf("%d", &turismo13);
    while (getchar() != '\n');

    printf("Digite o PIB da cidade 13:\n");
    scanf("%lld", &PIB13);
    while (getchar() != '\n');

    printf("Digite o nome da cidade 14:\n");
    getchar();
    fgets(cidade14, sizeof(cidade14), stdin);

    printf("Digite a população da cidade 14:\n");
    scanf("%lld", &populacao14);
    while (getchar() != '\n');

    printf("Digite a área da cidade 14:\n");
    scanf("%f", &area14);
    while (getchar() != '\n');

    printf("Digite o turismo da cidade 14:\n");
    scanf("%d", &turismo14);
    while (getchar() != '\n');

    printf("Digite o PIB da cidade 14:\n");
    scanf("%lld", &PIB14);
    while (getchar() != '\n');

    printf("Digite o nome da cidade 15:\n");
    getchar();
    fgets(cidade15, sizeof(cidade15), stdin);

    printf("Digite a população da cidade 15:\n");
    scanf("%lld", &populacao15);
    while (getchar() != '\n');

    printf("Digite a área da cidade 15:\n");
    scanf("%f", &area15);
    while (getchar() != '\n');

    printf("Digite o turismo da cidade 15:\n");
    scanf("%d", &turismo15);
    while (getchar() != '\n');

    printf("Digite o PIB da cidade 15:\n");
    scanf("%lld", &PIB15);
    while (getchar() != '\n');

    printf("Digite o nome da cidade 16:\n");
    getchar();
    fgets(cidade16, sizeof(cidade16), stdin);

    printf("Digite a população da cidade 16:\n");
    scanf("%lld", &populacao16);
    while (getchar() != '\n');

    printf("Digite a área da cidade 16:\n");
    scanf("%f", &area16);
    while (getchar() != '\n');

    printf("Digite o turismo da cidade 16:\n");
    scanf("%d", &turismo16);
    while (getchar() != '\n');

    printf("Digite o PIB da cidade 16:\n");
    scanf("%lld", &PIB16);
    while (getchar() != '\n');

    printf("Agora as cartas do estado E\n"); // Estado E
    printf("Digite o nome da cidade 17:\n");
    getchar();
    fgets(cidade17, sizeof(cidade17), stdin);

    printf("Digite a população da cidade 17:\n");
    scanf("%lld", &populacao17);
    while (getchar() != '\n');

    printf("Digite a área da cidade 17:\n");
    scanf("%f", &area17);
    while (getchar() != '\n');

    printf("Digite o turismo da cidade 17:\n");
    scanf("%d", &turismo17);
    while (getchar() != '\n');

    printf("Digite o PIB da cidade 17:\n");
    scanf("%lld", &PIB17);
    while (getchar() != '\n');

    printf("Digite o nome da cidade 18:\n");
    getchar();
    fgets(cidade18, sizeof(cidade18), stdin);

    printf("Digite a população da cidade 18:\n");
    scanf("%lld", &populacao18);
    while (getchar() != '\n');

    printf("Digite a área da cidade 18:\n");
    scanf("%f", &area18);
    while (getchar() != '\n');

    printf("Digite o turismo da cidade 18:\n");
    scanf("%d", &turismo18);
    while (getchar() != '\n');

    printf("Digite o PIB da cidade 18:\n");
    scanf("%lld", &PIB18);
    while (getchar() != '\n');

    printf("Digite o nome da cidade 19:\n");
    getchar();
    fgets(cidade19, sizeof(cidade19), stdin);

    printf("Digite a população da cidade 19:\n");
    scanf("%lld", &populacao19);
    while (getchar() != '\n');

    printf("Digite a área da cidade 19:\n");
    scanf("%f", &area19);
    while (getchar() != '\n');

    printf("Digite o turismo da cidade 19:\n");
    scanf("%d", &turismo19);
    while (getchar() != '\n');

    printf("Digite o PIB da cidade 19:\n");
    scanf("%lld", &PIB19);
    while (getchar() != '\n');

    printf("Digite o nome da cidade 20:\n");
    getchar();
    fgets(cidade20, sizeof(cidade20), stdin);

    printf("Digite a população da cidade 20:\n");
    scanf("%lld", &populacao20);
    while (getchar() != '\n');

    printf("Digite a área da cidade 20:\n");
    scanf("%f", &area20);
    while (getchar() != '\n');

    printf("Digite o turismo da cidade 20:\n");
    scanf("%d", &turismo20);
    while (getchar() != '\n');

    printf("Digite o PIB da cidade 20:\n");
    scanf("%lld", &PIB20);
    while (getchar() != '\n');

    printf("Agora as cartas do estado F\n"); // Estado F
    printf("Digite o nome da cidade 21:\n");
    getchar();
    fgets(cidade21, sizeof(cidade21), stdin);

    printf("Digite a população da cidade 21:\n");
    scanf("%lld", &populacao21);
    while (getchar() != '\n');

    printf("Digite a área da cidade 21:\n");
    scanf("%f", &area21);
    while (getchar() != '\n');

    printf("Digite o turismo da cidade 21:\n");
    scanf("%d", &turismo21);
    while (getchar() != '\n');

    printf("Digite o PIB da cidade 21:\n");
    scanf("%lld", &PIB21);
    while (getchar() != '\n');

    printf("Digite o nome da cidade 22:\n");
    getchar();
    fgets(cidade22, sizeof(cidade22), stdin);

    printf("Digite a população da cidade 22:\n");
    scanf("%lld", &populacao22);
    while (getchar() != '\n');

    printf("Digite a área da cidade 22:\n");
    scanf("%f", &area22);
    while (getchar() != '\n');

    printf("Digite o turismo da cidade 22:\n");
    scanf("%d", &turismo22);
    while (getchar() != '\n');

    printf("Digite o PIB da cidade 22:\n");
    scanf("%lld", &PIB22);
    while (getchar() != '\n');

    printf("Digite o nome da cidade 23:\n");
    getchar();
    fgets(cidade23, sizeof(cidade23), stdin);

    printf("Digite a população da cidade 23:\n");
    scanf("%lld", &populacao23);
    while (getchar() != '\n');

    printf("Digite a área da cidade 23:\n");
    scanf("%f", &area23);
    while (getchar() != '\n');

    printf("Digite o turismo da cidade 23:\n");
    scanf("%d", &turismo23);
    while (getchar() != '\n');

    printf("Digite o PIB da cidade 23:\n");
    scanf("%lld", &PIB23);
    while (getchar() != '\n');

    printf("Digite o nome da cidade 24:\n");
    getchar();
    fgets(cidade24, sizeof(cidade24), stdin);

    printf("Digite a população da cidade 24:\n");
    scanf("%lld", &populacao24);
    while (getchar() != '\n');

    printf("Digite a área da cidade 24:\n");
    scanf("%f", &area24);
    while (getchar() != '\n');

    printf("Digite o turismo da cidade 24:\n");
    scanf("%d", &turismo24);
    while (getchar() != '\n');

    printf("Digite o PIB da cidade 24:\n");
    scanf("%lld", &PIB24);
    while (getchar() != '\n');

    printf("Agora as cartas do estado G\n"); // Estado G
    printf("Digite o nome da cidade 25:\n");
    getchar();
    fgets(cidade25, sizeof(cidade25), stdin);

    printf("Digite a população da cidade 25:\n");
    scanf("%lld", &populacao25);
    while (getchar() != '\n');

    printf("Digite a área da cidade 25:\n");
    scanf("%f", &area25);
    while (getchar() != '\n');

    printf("Digite o turismo da cidade 25:\n");
    scanf("%d", &turismo25);
    while (getchar() != '\n');

    printf("Digite o PIB da cidade 25:\n");
    scanf("%lld", &PIB25);
    while (getchar() != '\n');

    printf("Digite o nome da cidade 26:\n");
    getchar();
    fgets(cidade26, sizeof(cidade26), stdin);

    printf("Digite a população da cidade 26:\n");
    scanf("%lld", &populacao26);
    while (getchar() != '\n');

    printf("Digite a área da cidade 26:\n");
    scanf("%f", &area26);
    while (getchar() != '\n');

    printf("Digite o turismo da cidade 26:\n");
    scanf("%d", &turismo26);
    while (getchar() != '\n');

    printf("Digite o PIB da cidade 26:\n");
    scanf("%lld", &PIB26);
    while (getchar() != '\n');

    printf("Digite o nome da cidade 27:\n");
    getchar();
    fgets(cidade27, sizeof(cidade27), stdin);

    printf("Digite a população da cidade 27:\n");
    scanf("%lld", &populacao27);
    while (getchar() != '\n');

    printf("Digite a área da cidade 27:\n");
    scanf("%f", &area27);
    while (getchar() != '\n');

    printf("Digite o turismo da cidade 27:\n");
    scanf("%d", &turismo27);
    while (getchar() != '\n');

    printf("Digite o PIB da cidade 27:\n");
    scanf("%lld", &PIB27);
    while (getchar() != '\n');

    printf("Digite o nome da cidade 28:\n");
    getchar();
    fgets(cidade28, sizeof(cidade28), stdin);

    printf("Digite a população da cidade 28:\n");
    scanf("%lld", &populacao28);
    while (getchar() != '\n');

    printf("Digite a área da cidade 28:\n");
    scanf("%f", &area28);
    while (getchar() != '\n');

    printf("Digite o turismo da cidade 28:\n");
    scanf("%d", &turismo28);
    while (getchar() != '\n');

    printf("Digite o PIB da cidade 28:\n");
    scanf("%lld", &PIB28);
    while (getchar() != '\n');

    printf("Agora as cartas do estado H\n"); // Estado H
    printf("Digite o nome da cidade 29:\n");
    getchar();
    fgets(cidade29, sizeof(cidade29), stdin);

    printf("Digite a população da cidade 29:\n");
    scanf("%lld", &populacao29);
    while (getchar() != '\n');

    printf("Digite a área da cidade 29:\n");
    scanf("%f", &area29);
    while (getchar() != '\n');

    printf("Digite o turismo da cidade 29:\n");
    scanf("%d", &turismo29);
    while (getchar() != '\n');

    printf("Digite o PIB da cidade 29:\n");
    scanf("%lld", &PIB29);
    while (getchar() != '\n');

printf("Digite a população da cidade 30:\n");
scanf("%d", &populacao30);
while (getchar() != '\n'); // Limpa o buffer corretamente

printf("Digite a área da cidade 30:\n");
scanf("%f", &area30);
while (getchar() != '\n');

printf("Digite o turismo da cidade 30:\n");
scanf("%d", &turismo30);
while (getchar() != '\n');

printf("Digite o PIB da cidade 30:\n");
scanf("%lld", &PIB30);
while (getchar() != '\n');

printf("Digite a população da cidade 31:\n");
scanf("%lld", &populacao31);
while (getchar() != '\n');

printf("Digite a área da cidade 31:\n");
scanf("%f", &area31);
while (getchar() != '\n');

printf("Digite o turismo da cidade 31:\n");
scanf("%d", &turismo31);
while (getchar() != '\n');

printf("Digite o PIB da cidade 31:\n");
scanf("%lld", &PIB31);
while (getchar() != '\n');

printf("Digite a população da cidade 32:\n");
scanf("%lld", &populacao32);
while (getchar() != '\n');

printf("Digite a área da cidade 32:\n");
scanf("%f", &area32);
while (getchar() != '\n');

printf("Digite o turismo da cidade 32:\n");
scanf("%d", &turismo32);
while (getchar() != '\n');

printf("Digite o PIB da cidade 32:\n");
scanf("%lld", &PIB32);
while (getchar() != '\n');

printf("      Suas cartas foram cadastradas com sucesso\n");

printf("Suas cartas são:\n");

printf("A01: %s", cidade1);
printf("população: %lld\n", populacao1);
printf("área: %.2f\n", area1);
printf("turismo: %d\n", turismo1);  
printf("PIB: %lld\n", PIB1);

printf("A02: %s", cidade2);
printf("população: %lld\n", populacao2);
printf("área: %.2f\n", area2);
printf("turismo: %d\n", turismo2);  
printf("PIB: %lld\n", PIB2);

printf("A03: %s", cidade3);
printf("população: %lld\n", populacao3);
printf("área: %.2f\n", area3);
printf("turismo: %d\n", turismo3);  
printf("PIB: %lld\n", PIB3);

printf("A04: %s", cidade4);
printf("população: %lld\n", populacao4);
printf("área: %.2f\n", area4);
printf("turismo: %d\n", turismo4);  
printf("PIB: %lld\n", PIB4);

printf("B01: %s", cidade5);
printf("população: %lld\n", populacao5);
printf("área: %.2f\n", area5);
printf("turismo: %d\n", turismo5);  
printf("PIB: %lld\n", PIB5);

printf("B02: %s", cidade6);
printf("população: %lld\n", populacao6);  
printf("área: %.2f\n", area6);
printf("turismo: %d\n", turismo6);
printf("PIB: %lld\n", PIB6);

printf("B03: %s", cidade7);
printf("população: %lld\n", populacao7);
printf("área: %.2f\n", area7);
printf("turismo: %d\n", turismo7);
printf("PIB: %lld\n", PIB7);

printf("B04: %s", cidade8);
printf("população: %lld\n", populacao8);
printf("área: %.2f\n", area8);
printf("turismo: %d\n", turismo8);
printf("PIB: %lld\n", PIB8);

printf("C01: %s", cidade9); 
printf("população: %lld\n", populacao9);
printf("área: %.2f\n", area9);
printf("turismo: %d\n", turismo9);
printf("PIB: %lld\n", PIB9);

printf("C02: %s", cidade10);  
printf("população: %lld\n", populacao10);
printf("área: %.2f\n", area10);
printf("turismo: %d\n", turismo10);
printf("PIB: %lld\n", PIB10);

printf("C03: %s", cidade11);
printf("população: %lld\n", populacao11);
printf("área: %.2f\n", area11);
printf("turismo: %d\n", turismo11);
printf("PIB: %lld\n", PIB11);

printf("C04: %s", cidade12);
printf("população: %lld\n", populacao12);
printf("área: %.2f\n", area12);
printf("turismo: %d\n", turismo12);
printf("PIB: %lld\n", PIB12);

printf("D01: %s", cidade13);
printf("população: %lld\n", populacao13);
printf("área: %.2f\n", area13);
printf("turismo: %d\n", turismo13);
printf("PIB: %lld\n", PIB13);

printf("D02: %s", cidade14);
printf("população: %lld\n", populacao14);
printf("área: %.2f\n", area14);
printf("turismo: %d\n", turismo14);
printf("PIB: %lld\n", PIB14);

printf("D03: %s", cidade15);
printf("população: %lld\n", populacao15);
printf("área: %.2f\n", area15);
printf("turismo: %d\n", turismo15);
printf("PIB: %lld\n", PIB15);

printf("D04: %s", cidade16);
printf("população: %lld\n", populacao16); 
printf("área: %.2f\n", area16);
printf("turismo: %d\n", turismo16);
printf("PIB: %lld\n", PIB16);

printf("E01: %s", cidade17);
printf("população: %lld\n", populacao17);
printf("área: %.2f\n", area17);
printf("turismo: %d\n", turismo17);
printf("PIB: %lld\n", PIB17);

printf("E02: %s", cidade18);
printf("população: %lld\n", populacao18);
printf("área: %.2f\n", area18);
printf("turismo: %d\n", turismo18);
printf("PIB: %lld\n", PIB18);

printf("E03: %s", cidade19);  
printf("população: %lld\n", populacao19);
printf("área: %.2f\n", area19);
printf("turismo: %d\n", turismo19);
printf("PIB: %lld\n", PIB19);

printf("E04: %s", cidade20);
printf("população: %lld\n", populacao20);
printf("área: %.2f\n", area20);
printf("turismo: %d\n", turismo20);
printf("PIB: %lld\n", PIB20);

printf("F01: %s", cidade21);
printf("população: %lld\n", populacao21);
printf("área: %.2f\n", area21);
printf("turismo: %d\n", turismo21);
printf("PIB: %lld\n", PIB21);

printf("F02: %s", cidade22);
printf("população: %lld\n", populacao22);
printf("área: %.2f\n", area22);
printf("turismo: %d\n", turismo22);
printf("PIB: %lld\n", PIB22);

printf("F03: %s", cidade23);
printf("população: %lld\n", populacao23);
printf("área: %.2f\n", area23);
printf("turismo: %d\n", turismo23);
printf("PIB: %lld\n", PIB23);

printf("F04: %s", cidade24);
printf("população: %lld\n", populacao24);
printf("área: %.2f\n", area24);
printf("turismo: %d\n", turismo24);
printf("PIB: %lld\n", PIB24);

printf("G01: %s", cidade25);
printf("população: %lld\n", populacao25);
printf("área: %.2f\n", area25);
printf("turismo: %d\n", turismo25);
printf("PIB: %lld\n", PIB25);

printf("G02: %s", cidade26);
printf("população: %lld\n", populacao26);
printf("área: %.2f\n", area26);
printf("turismo: %d\n", turismo26);
printf("PIB: %lld\n", PIB26);

printf("G03: %s", cidade27);
printf("população: %lld\n", populacao27);
printf("área: %.2f\n", area27);
printf("turismo: %d\n", turismo27);
printf("PIB: %lld\n", PIB27);

printf("G04: %s", cidade28);
printf("população: %lld\n", populacao28);
printf("área: %.2f\n", area28);
printf("turismo: %d\n", turismo28);
printf("PIB: %lld\n", PIB28);

printf("H01: %s", cidade29);
printf("população: %lld\n", populacao29);
printf("área: %.2f\n", area29);
printf("turismo: %d\n", turismo29);
printf("PIB: %lld\n", PIB29);

printf("H02: %s", cidade30);
printf("população: %lld\n", populacao30);
printf("área: %.2f\n", area30);
printf("turismo: %d\n", turismo30);
printf("PIB: %lld\n", PIB30);

printf("H03: %s", cidade31);
printf("população: %lld\n", populacao31);
printf("área: %.2f\n", area31);
printf("turismo: %d\n", turismo31);
printf("PIB: %lld\n", PIB31);

printf("H04: %s", cidade32);
printf("população: %lld\n", populacao32);
printf("área: %.2f\n", area32);
printf("turismo: %d\n", turismo32);
printf("PIB: %lld\n", PIB32);   

system("pause");


    return 0;

}
  