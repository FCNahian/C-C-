#include <stdio.h>
#include <Windows.h>
#include <conio.h>
#include <stdlib.h>

int main(void)
{
    int hour=24,min=60,second=60;
    printf("          ***This is a clock application***\n\nPlease insert following informations about current time.\n\nPress any key to continue...");
    getch();
    system("cls");
    printf("Please insert hour value (24 hour format) : ");
    for(;hour>23 || hour<0;){
        scanf("%d",&hour);
        system("cls");
        if(hour>23 || hour<0){
            printf("Hour value must be between 0 to 23\n\n");
            printf("Please insert hour value again (24 hour format) : ");
        }
    }
    system("cls");
    if(hour%12==0){
        printf("Hour: 12");
        if(hour>11){
            printf(" PM\n\n");
        }
        else{
            printf(" AM\n\n");
        }
    }
    else if(hour%12<10){
        printf("Hour: 0%d",hour%12);
        if(hour>11){
            printf(" PM\n\n");
        }
        else{
            printf(" AM\n\n");
        }
    }
    else{
        printf("Hour: %d",hour%12);
        if(hour>11){
            printf(" PM\n\n");
        }
        else{
            printf(" AM\n\n");
        }
    }
    printf("Please insert minute value : ");
    for(;min>59 || min<0;){
        scanf("%d",&min);
        system("cls");
        if(min>59 || min<0){
            if(hour%12==0){
                printf("Hour: 12");
                if(hour>11){
                    printf(" PM\n\n");
                }
                else{
                    printf(" AM\n\n");
                }
            }
            else if(hour%12<10){
                printf("Hour: 0%d",hour%12);
                if(hour>11){
                    printf(" PM\n\n");
                }
                else{
                    printf(" AM\n\n");
                }
            }
            else{
                printf("Hour: %d",hour%12);
                if(hour>11){
                    printf(" PM\n\n");
                }
                else{
                    printf(" AM\n\n");
                }
            }
            printf("Minute value must be between 0 to 59\n\n");
            printf("Please insert minute value again : ");
        }
    }
    if(hour%12==0){
        printf("Hour: 12");
        if(hour>11){
            printf(" PM");
        }
        else{
            printf(" AM");
        }
    }
    else if(hour%12<10){
        printf("Hour: 0%d",hour%12);
        if(hour>11){
            printf(" PM");
        }
        else{
            printf(" AM");
        }
    }
    else{
        printf("Hour: %d",hour%12);
        if(hour>11){
            printf(" PM");
        }
        else{
            printf(" AM");
        }
    }
    if(min<10){
        printf("    Minute: 0%d\n\n",min);
    }
    else{
        printf("    Minute: %d\n\n",min);
    }
    printf("Please insert second value : ");
    for(;second>59 || second<0;){
        scanf("%d",&second);
        system("cls");
        if(second>59 || second<0){
            if(hour%12==0){
                printf("Hour: 12");
                if(hour>11){
                    printf(" PM");
                }
                else{
                    printf(" AM");
                }
            }
            else if(hour%12<10){
                printf("Hour: 0%d",hour%12);
                if(hour>11){
                    printf(" PM");
                }
                else{
                    printf(" AM");
                }
            }
            else{
                printf("Hour: %d",hour%12);
                if(hour>11){
                    printf(" PM");
                }
                else{
                    printf(" AM");
                }
            }
            if(min<10){
                printf("    Minute: 0%d\n\n",min);
            }
            else{
                printf("    Minute: %d\n\n",min);
            }
            printf("Second value must be between 0 to 59\n\n");
            printf("Please insert second value again : ");
        }
    }
    printf("Starting time is set to ");
    if(hour%12==0){
        printf("12:");
    }
    else if(hour%12<10){
        printf("0%d:",hour%12);
    }
    else{
        printf("%d:",hour%12);
    }
    if(min<10){
        printf("0%d:",min);
    }
    else{
        printf("%d:",min);
    }
    if(second<10){
        printf("0%d",second);
    }
    else{
        printf("%d",second);
    }
    if(hour>11){
        printf(" PM");
    }
    else{
        printf(" AM");
    }
    Sleep(3000);
    system("cls");
    for(;;){
        if(hour%12==0){
            printf("\n\n             12:");
        }
        else if(hour%12<10){
            printf("\n\n             0%d:",hour%12);
        }
        else{
            printf("\n\n             %d:",hour%12);
        }
        if(min<10){
            printf("0%d:",min);
        }
        else{
            printf("%d:",min);
        }
        if(second<10){
            printf("0%d",second);
        }
        else{
            printf("%d",second);
        }
        if(hour>11){
            printf(" PM\n\n\nTerminate the console to close the app.");
        }
        else{
            printf(" AM\n\n\nTerminate the console to close the app.");
        }
        Sleep(1000);
        system("cls");
        second++;
        if(second==60){
            second=0;
            min++;
            if(min==60){
                min=0;
                hour++;
                if(hour==24){
                    hour=0;
                }
            }
        }
    }
    return 0;
}
