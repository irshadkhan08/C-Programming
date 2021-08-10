#include<stdio.h>
int get_number_of_digits(int n)
{
    int count =0;
    while(n>0)
    {         
             count ++;
             n = n/10;
    }
    return count;
}
int get_sum_of_number(int n)
{
    int sum,rem;
    while(n>0)
    {         
             rem = n%10;
             sum = sum+rem;
             n = n/10;
    }
    return sum;
}
int get_reverse_of_number(int n)
{
    int rem,rev = 0;
    while(n>0)
    {         
             rem = n%10;
             rev = (rev*10)+rem;
             n= n/10;
    }
    return rev;
}
int main()
{   
    int n;
    printf("Enter the number of n :");
    scanf("%d",&n);
    int count =  get_number_of_digits( n);
    printf("get_number_of_digits = %d\n",count);
     
    int sum = get_sum_of_number(n);
    printf("get_sum_of_number = %d\n",sum);
   
    int rev = get_reverse_of_number(n);
    printf("get_reverse_of_number = %d\n",rev);
    return 0;
}
