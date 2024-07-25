#include <stdio.h>

int main()
{
    float marks;
    printf("Please enter the marks: ");
    scanf("%f", &marks);

    if(marks > 75) {
        printf("Grade A");
    } else if(marks >= 60) {
        printf("Grade B");
    } else if(marks >= 50) {
        printf("Grade C");
    } else if(marks >= 40) {
        printf("Grade D");
    } else {
        printf("Grade E");
    }

    // int marks;
    // printf("Please enter the marks: ");
    // scanf("%d", &marks);

    // switch (marks)
    // {
    // case 76 ... 100:
    //     printf("Grade A");
    //     break;
    // case 60 ... 75:
    //     printf("Grade B");
    //     break;
    // case 50 ... 59:
    //     printf("Grade C");
    //     break;
    // case 40 ... 49:
    //     printf("Grade D");
    //     break;
    // default:
    //     printf("Grade E");
    //     break;
    // }

    return 0;
}