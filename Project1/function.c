#include<stdio.h>
/*void gm();
void ga();
void gn();

void gm(){
    printf("good morning\n");
}
void ga(){
    printf("good afternoon\n");
}
void gn(){
    printf("good night\n");
}
int main(){
    gm();
    gn();
    ga();
}
int factorial(int);
int factorial(int x){
    int f;
    if(x==0||x==1){
        return 1;
    }
    else{
        f=factorial(x-1)*x;
        printf("factorial is %d",f);
        return f;
    //printf("Factorail of the number %d is %d\n",x,f);
   // }
}
}
int main(){
    int x;
    printf("ENTER THE NUMBER;");
    scanf("%d",&x);
    //printf("Factorail of the number %d is %d\n",x,factorial(x));
    factorial(x);
    return 0;

float average(float,float,float);
float average(float x,float y,float z){
    float res;
    res=(x+y+z)/3;
    printf("AVERAGE OF THREE NUMBERS IS %.3f;",res);
    return res;
}
int main(){
    float a=3.6;
    float b=3.6;
    float c=3.6;
    average(a,b,c);
    return 0;
}
float ctof(int);
float ctof(int c){
    float res=(9/5*c)+32;
    return res;

}
int main(){
    int c;
    printf("ENTER TEMP IN CELCIUS-");
    scanf("%d",&c);
    ctof(c);
    printf("TEMP IN FAHRENHITE IS %.2f\n",ctof(c));
    return 0;
}
float attraction(float);
float attraction(float m){
    float result=9.8*m;
    return result;
}
int main(){
    float mass=1;
    attraction(mass);
     printf("FORCE OF ATTRACTION ON BODY OF MASS %.2f is %.1f\n",mass,attraction(mass));
     return 0;
}*/

int main(){
    int n=6;
    //printf("enter rows -");
     
    //scanf("%d",&n);
    /*printf("enter columns-");
    //scanf("%d",&j);
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;

    for(i=1;i<=n;i++){
      for(j=1;j<=n+1-i;j++){
        printf("8");
    }
      printf("\n");
  }
return 0;
}*/
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+2;j+=2){
            printf("%d",j);

        }
     printf("\n");
    }
    return 0;
}
