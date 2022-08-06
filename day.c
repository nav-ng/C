#include<stdio.h>
void main(void){
    int day;
    printf("\n 1.Sunday \n 2.Monday \n 3.Tuesday \n 4.Wednesday \n 5.Thursday \n 6.Friday \n 7.Saturday \n");
    printf("Book your slot:");
    scanf("%d",&day);
    switch(day){
        case 1:
            printf("Your slot is booked for Sunday");
        break;
        case 2:
            printf("Your slot is booked for Monday");
            break;
        case 3:
            printf("Your slot is booked for Tuesday");
            break;
        case 4:
            printf("Your slot is booked for Wednesday");
            break;
        case 5:
            printf ("Your slot is booked for Thursday");
            break;
        case 6:
            printf("Your slot is booked for Friday");
            break;
        case 7:
            printf("Your slot is booked for Saturday");
            break;
        default:
            printf("Invalid selection");
    }
}