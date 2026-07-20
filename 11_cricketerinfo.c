/*
Program: Use of typedef and switch case in structure.
Language: C
Author: Nabiha Wasim
Description: This program uses typedef in structures to take user input and
prints the output as per users requirements.
*/
#include<stdio.h>
int main(){
    typedef struct cricketer{
        char name[20];
        int age;
        int nooftestmatch;
        int averageruns;
    }cricketer;
    cricketer arr[1];
    for(int i=0;i<=1;i++){
        printf("Enter the name of cricketer-");
        scanf("%s",arr[i].name);
        printf("enter age please-");
        scanf("%d",&arr[i].age);
        printf("Enter number of test match this player played-");
        scanf("%d",&arr[i].nooftestmatch);
        printf("Enter average run-");
        scanf("%d",&arr[i].averageruns);
    } 
    
    int choice;
    printf("\nEnter cricketer number (1-3) to see details, or 4 to see all: ");
    scanf("%d", &choice);

    switch (choice) {
     case 1:
     case 2:
     case 3:
        // Grouping 1, 2, and 3 together to use the dynamic index trick
        printf("\n--- Cricketer %d Details ---\n", choice);
        printf("Name: %s\nAge: %d\nTests: %d\nAvg: %d\n", 
               arr[choice - 1].name, 
               arr[choice - 1].age, 
               arr[choice - 1].nooftestmatch, 
               arr[choice - 1].averageruns);
        break;

    case 4:
        // Prints everyone at once
        printf("\n--- All Cricketers Data ---\n");
        for(int i = 0; i < 3; i++) {
            printf("Cricketer no %d\n",i+1);
            printf("Name-%s\n",arr[i].name);
            printf("Age-%d\n",arr[i].age);
            printf("Number of test matches-%d\n",arr[i].nooftestmatch);
            printf("Number of average runs-%d\n",arr[i].averageruns);
            
        }
    default:
        // Automatically catches any number that isn't 1, 2, 3, or 4
        printf("\nThis data has not been saved / Not Acceptable :( \n");
        break;
    }
   
    return 0;
}