#include<stdio.h>
struct hai{
   int coeff;
   int pow;
};
int main(){
   int n;
   printf("enter the no of coefficient");
   scanf("%d",&n);
   struct hai poly1[n],poly2[n],sum[n];
   int i;
   printf("enter the %d terms (coefficient and power)",n);
   for(i=0;i<n;i++){
   printf("enter the term%d",i+1);
   scanf("%d%d",&poly1[i].coeff,&poly1[i].pow);
   }
   printf("enter the %d terms (coefficient and power)",n);
   for(i=0;i<n;i++){
   printf("enter the term%d",i+1);
   scanf("%d%d",&poly2[i].coeff,&poly2[i].pow);
   }
   for(i=0;i<n;i++){
    if(poly1[i].pow==poly2[i].pow){
    sum[i].coeff=poly1[i].coeff+poly2[i].coeff;
    sum[i].pow=poly1[i].pow;
    }
    else{
    printf("the powers does not match");
    return 1;
    
    }
   } 
    for(i=0;i<n;i++){
    printf("+%dx^%d",sum[i].coeff,sum[i].pow);
    }
    printf("\n");
    return 0;
}
    
    
      
   
   
   
   
   
       
   
   
