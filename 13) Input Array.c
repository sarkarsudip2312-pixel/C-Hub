#include <stdio.h>
int main(){
    
    int marks[10];
    int i;
    
    for(i=0; i<=10; i++){
        scanf("%d", &marks[i]);
    }
    
    for(i=0; i<=10; i++){
        printf("%d\n", marks[i]);
    }
    return 0;
}