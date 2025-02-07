#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    for (int i=0; i<a; i++){
        for (int j=0; j<a; j++){
            if (i==j||i==0||j==0||j==i)
                printf("* ");
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}