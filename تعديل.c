#include<stdio.h>
int main()
{
    char op;
    double the_first_n,the_second_n;
    printf("Choose the operator ");
    scanf("%c \n", &op);
    printf("/n enter the first number : ");
    scanf("%lf" , &the_first_n);
    printf("/n enter the second number : ");
    scanf("%lf" , &the_second_n);

    switch (op){
        case '+' :
          printf("%lf + %lf = %lf",the_first_n,the_second_n,the_first_n+the_second_n); 
          break;
        case '-' :
          printf("%lf - %lf = %lf",the_first_n,the_second_n,the_first_n-the_second_n); 
          break;  
        case '*' :
          printf("%lf * %lf = %lf",the_first_n,the_second_n,the_first_n*the_second_n); 
          break;
        case '/' :
          printf("%lf / %lf = %lf",the_first_n,the_second_n,the_first_n/the_second_n); 
          break;    
    }
}