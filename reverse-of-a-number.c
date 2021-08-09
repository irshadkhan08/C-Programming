#include<stdio.h>
int main(){
    
   int rev = 0, rem, n;
   printf("Enter the number of n");
   scanf("%d",&n);
   
   while(n){
         rem = n%10;
         rev = (rev*10) +rem;
         n/=10;      
   }
    
    
    printf("reverse of this number = %d",rev);
  
    
}
