#include <stdio.h>
#include <Windows.h>
#include <conio.h>
#include <stdlib.h>

int main(void){
    int number=0,count=0,maxNum=0,minNum=1001;
    int evenCount=0,maxEvenStreak=0,currentEvenStreak=0,maxEven=0,minEven=1001;
    int oddCount=0,maxOddStreak=0,currentOddStreak=0,maxOdd=0,minOdd=1001;
    int maxRepeatStrak=1,currentRepeatStreak=1,lastNum=0;

    printf("          ***This is a number tracking application***\n\nKeep record of all your numbers\n\nPress any key to continue...");
    getch();
    system("cls");

    printf("Enter '-1' anytime to exit the app.\n\n");
    printf("Current Number : Yet to be given\n\n");
    printf("Numbers Count : 0\n\n");
    printf("Largest Number : Not determined yet\n\n");
    printf("Smallest Number : Not determined yet\n\n");
    printf("Even Numbers Count : Not determined yet\n");
    printf("Largest Even Number : Not determined yet\n");
    printf("Smallest Even Number : Not determined yet\n");
    printf("Current Even Numbers Streak : Not determined yet\n");
    printf("Maximum Even Numbers Streak : Not determined yet\n\n");
    printf("Odd Numbers Count : Not determined yet\n");
    printf("Largest Odd Number : Not determined yet\n");
    printf("Smallest Odd Number : Not determined yet\n");
    printf("Current Odd Numbers Streak : Not determined yet\n");
    printf("Maximum Odd Numbers Streak : Not determined yet\n\n");
    printf("Current Number Repeating Streak : 0\n");
    printf("Maximum Number Repeating Streak : 0\n\n");

    for(;count<1000;){
        printf("Insert a number between 1 to 1000 : ");
        scanf("%d",&number);
        system("cls");
        if(number == -1){
            break;
        }
        for(;number<1 || number>1000;){
            printf("Enter '-1' anytime to exit the app.\n\n");
            printf("Number must be between 1 to 1000 : ");
            scanf("%d",&number);
            system("cls");
            if(number == -1){
                break;
            }
        }
        if(number == -1){
            break;
        }
        system("cls");
        count++;
        printf("Enter '-1' anytime to exit the app.\n\n");
        printf("Current Number : %d\n\n",number);
        printf("Numbers Count : %d\n\n",count);
        if(number>maxNum){
            maxNum=number;
        }
        printf("Largest Number : %d\n\n",maxNum);
        if(number<minNum){
            minNum=number;
        }
        printf("Smallest Number : %d\n\n",minNum);
        if(number%2==0){
            evenCount++;
            currentEvenStreak++;
            if(number>maxEven){
                maxEven=number;
            }
            if(number<minEven){
                minEven=number;
            }
            if(currentEvenStreak>maxEvenStreak){
                maxEvenStreak=currentEvenStreak;
            }
            currentOddStreak=0;
        }
        else{
            oddCount++;
            currentOddStreak++;
            if(number>maxOdd){
                maxOdd=number;
            }
            if(number<minOdd){
                minOdd=number;
            }
            if(currentOddStreak>maxOddStreak){
                maxOddStreak=currentOddStreak;
            }
            currentEvenStreak=0;
        }
        printf("Even Numbers Count : %d\n",evenCount);
        if(maxEven>0){
            printf("Largest Even Number : %d\n",maxEven);
        }
        else{
            printf("Largest Even Number : Not determined yet\n");
        }
        if(minEven<1001){
            printf("Smallest Even Number : %d\n",minEven);
        }
        else{
            printf("Smallest Even Number : Not determined yet\n");
        }
        printf("Current Even Numbers Streak : %d\n",currentEvenStreak);
        printf("Maximum Even Numbers Streak : %d\n\n",maxEvenStreak);
        printf("Odd Numbers Count : %d\n",oddCount);
        if(maxOdd>0){
            printf("Largest Odd Number : %d\n",maxOdd);
        }
        else{
            printf("Largest Odd Number : Not determined yet\n");
        }
        if(minOdd<1001){
            printf("Smallest Odd Number : %d\n",minOdd);
        }
        else{
            printf("Smallest Odd Number : Not determined yet\n");
        }
        printf("Current Odd Numbers Streak : %d\n",currentOddStreak);
        printf("Maximum Odd Numbers Streak : %d\n\n",maxOddStreak);
        if(number==lastNum){
            currentRepeatStreak++;
            if(currentRepeatStreak>maxRepeatStrak){
                maxRepeatStrak=currentRepeatStreak;
            }
        }
        else{
            lastNum=number;
            currentRepeatStreak=1;
        }
        printf("Current Number Repeating Streak : %d\nMaximum Number Repeating Streak : %d\n\n",currentRepeatStreak,maxRepeatStrak);
    }

    printf("\n\n             Thanks for using our app...\n\n");
    getch();
    return 0;

}
