#include <stdio.h>
int main (){
    
    int a,b,c, sum;
    
    printf("Enter 1st Number: ");
    scanf("%d", &a);
    
    printf("Enter 2nd Number: ");
    scanf("%d", &b);
    
    printf("Enter 3rd Number: ");
    scanf("%d", &c);
    
    sum=a+b-c;
    
    printf("Your Answer:%d ", sum);
    
    return 0;
}