#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;

    printf("Enter your current age:");
    scanf("%d", &age);

    if (age <= 0){
        printf("Invalid age");
    }
    else if (age >= 18){
        printf("You are eligible  to vote");
    }
    else {
       printf("Sorry,you are not eligible to vote");
    }


    return 0;
}
