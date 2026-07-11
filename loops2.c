#include<stdio.h>
int main(){
   /**int i,n;
    printf("THE NUMBER IS:");
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        if(i==8){
            continue;
        }
        printf("YOUR LOOP IS AT %d\n",i);
    }
    */
   /*int n=10;
  // scanf("%d",&n);
   for(int i=10;i>=0;i--){
       printf("%d x %d is %d \n",n,i,n*i);

   }
   
  int i=1,sum=0;
  do{
    sum=sum+i;
    
    i++;
    
  }
  while(i<=10);
  printf("sum is %d\n",sum);
  int i,sum=0,n=8;
  for(i=1;i<=10;i++){
    sum+=(n*i);
    
  }
  printf("The sum is %d\n",sum);*/

  int n,i,factorial=1;
  printf("ENTER THE NUMBER FOR FACTORIAL:");
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    factorial*=i;
    

  }
  printf("FACTORIAL IS %d\n:",factorial);

  

  return 0;
}