/*
Program: Use of typedef in structure
Language: C
Author: Nabiha Wasim
Description: This program uses typedef in structures.
*/
#include<stdio.h>
#include<string.h>
int main(){
    typedef struct pokemon{
        char name[20];
        int hp;
        int attack;
        char type[10];
    }pokemon;
    pokemon arr[3];
    strcpy(arr[0].name,"Snivy");
    arr[0].hp=200;
    arr[0].attack=140;
    strcpy(arr[0].type,"Grass");
    strcpy(arr[1].name,"Greninja");
    arr[1].hp=470;
    arr[1].attack=450;
    strcpy(arr[1].type,"Water");
    strcpy(arr[2].name,"Arceus");
    arr[2].hp=500;
    arr[2].attack=500;
    strcpy(arr[2].type,"Normal");
    printf("PRESENTING THE AMAZING POKEMONS:\n");
    for(int i=0;i<=2;i++){
        printf("%s\n",arr[i].name);
        printf("%d\n",arr[i].hp);
        printf("%d\n",arr[i].attack);
        printf("%s\n",arr[i].type);

    }


    return 0;
}    