#include<stdio.h>
void main(void){
    for(int i=1; i<=4; i++){
        if(i%2!=0){
            for(int j=0; j<1; j++){
                printf("*");
            }
            printf("\n");
            for(int k=0; k<4*i; k++){
                printf("*");
            }
            printf("\n");
        }
        else{
            for(int j=0; j<3; j++){
                printf("*");
                printf("\n");
            }
            for(int k=0; k<4*i; k++){
                printf("*");
            }
            printf("\n");
        }
    }
}
