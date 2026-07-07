#include<stdio.h>
void checkaddress(int* p){
    *p=*p*10;
    printf("ADRESS OF POINTER IS %u\n ",p);
    printf("value is %d\n ",*p);
    //*p=*p*10;
}
int main(){
    int i=9;
    
    printf("Adress of the variable i is %u\n",&i);
    checkaddress(&i);
    printf(" now value of the variable i is %u\n",i);
    

    //checkaddress(i);
    return 0;


}
