#include<stdio.h>
#include<stdlib.h>
//Programado por Hugo Rolón Acevedo Grupo 01 PAMN
//Menu de tortas con archivo
int impmearch(){

FILE *apmenu;
apmenu = fopen("menu.txt","r");
if (apmenu==NULL){
printf("Error de apertura del archivo");
}
char Menucom1 [40];
char Menucom2 [40];
char Menucom3 [40];
char Menucom4 [40];
char Menucom5 [40];
char Menucom6 [40];
fgets(Menucom1,40,apmenu);
printf("%s",Menucom1);
fgets(Menucom2,40,apmenu);
printf("%s",Menucom2);
fgets(Menucom3,40,apmenu);
printf("%s",Menucom3);
fgets(Menucom4,40,apmenu);
printf("%s",Menucom4);
fgets(Menucom5,40,apmenu);
printf("%s",Menucom5);
fgets(Menucom6,40,apmenu);
printf("%s",Menucom6);

fclose(apmenu);

}

int menuf()
{
int total=0;
struct {
int tipotortoref;//Variables necesarias para el programa
int efectivo;
int cambio;
int n;
int m;
int conttorts;
}menu;
menu.n=0;
menu.m=0;
menu.conttorts=0;
int tortas[menu.n];

while(menu.tipotortoref!=5){//While "infinito"

impmearch();

printf("\n\nIndique que desea ordenar:\n\n");
scanf("%d",&menu.tipotortoref);
    switch(menu.tipotortoref){//switch del menu
case 1:
total=total+40;
menu.m=40;
break;
case 2:
total=total+15;
menu.m=15;
break;
case 3:
total=total+55;
menu.m=55;
break;
case 4:
total=total+10;
menu.m=10;
break;
default: printf("\n\nProducto no registrado en el menu!!!");
    }

    tortas[menu.n]=menu.m;
    menu.n=menu.n+1;
    menu.conttorts=menu.conttorts+1;
getchar();

printf("\n\nEl subtotal de su cuenta es: %d",total);//Imprime el subtotal de la cuenta
printf("\n\nøDesea ordenar algo mas del menu?\nSi no desea ordenar algo mas oprima 5.\n\n");
}

for(menu.n=0; menu.n<=menu.conttorts-2 ;menu.n++){
        menu.n=menu.n+1;
        printf("\nProducto %d",menu.n);
        menu.n=menu.n-1;
        printf("\n%d--->", tortas[menu.n]);
        switch(tortas[menu.n]){
case 40:printf("Torta cubana");
break;
case 15:printf("Torta de jamon");
break;
case 55:printf("Torta especial");
break;
case 10:printf("Refresco");
break;
default: printf("ESTO NO EJECUTA NADA");
        }
}

printf("\n\nEl total a pagar es %d\n",total);
getchar();
printf("\nIntroduzca el monto de efectivo con el que pagara\nel total de la cuenta:\n\n");
scanf("%d",&menu.efectivo);//Lectura del efectivo con el cual se paga el total
menu.cambio=menu.efectivo-total;//Operacion para obtener el cambio
if (menu.cambio<0){
printf("\n\nNo se haga menso no le alcanza el dinero para pagar\n");
return 0;}
printf("\n\nSu cambio es de: $%d\n\nQue tenga un buen dia, lo esperamos pronto por otra torta.",menu.cambio);
//Le da al usuario su cambio
getchar();
}

int main(){

menuf();

}
