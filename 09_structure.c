/*
Program: Creation of structure
Language: C
Author: Nabiha Wasim
Description: This program creates structure and declare 2 variable
and prints the name of first and age of others.
*/
#include<stdio.h>
#include<string.h>
int main(){
    struct Person{
        char name[50];
        int salary;
        int age;
    }A,B,C;
    A.age=32;
    A.salary=45000; //to copy the name into string
    strcpy(A.name,"Umaiza");
    B.age=34;
    B.salary=50000;
    strcpy(B.name,"Albert Guru");
    C.age=28;
    C.salary=55000;
    strcpy(C.name,"Harry");
    printf("%s\n",A.name);
    printf("%d\n",B.age);
    printf("%d\n",C.age);
    return 0;    
}