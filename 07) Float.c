#include <stdio.h>
int main (){
    float a,b,x;
    
    printf("Enter Your HSC GPA: ");
    scanf("%f", &a);
    
    printf("Enter Your SSC GPA: ");
    scanf("%f", &b);
    
    x=a+b;
    
    printf("Your Totel GPA: %.2f", x);
    
    return 0;
}