/*
Program: Reverse of string
Language: C
Author: Nabiha Wasim
Description: This program checks if given string is palindrome
*/
#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    int ispalindrome=1;
    printf("Enter your string-");
    scanf("%s",str);
    int length=strlen(str);//to finalize final lenght of string provided
    //loop to chech each letter from beginning
    for(int i=0;i<length/2;i++){
        if(str[i]!=str[length-1-i]){
            ispalindrome=0;
            break;
        }
    }    
        if(ispalindrome==1){
            printf("yes %s is palindrome\n",str);
        }
        else{
            printf("no %s is not palindrome",str);

        }
    return 0;
}    