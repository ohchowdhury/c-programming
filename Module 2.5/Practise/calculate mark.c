
// 12. Write a C program to read the roll no, name and marks of three subjects and calculate the total, percentage and division.
// Test Data :
// Input the Roll Number of the student :784
// Input the Name of the Student :James
// Input the marks of phy, chem and com Application : 70 80 90
// Expected Output :
// Roll No : 784
// Name of Student : James
// Marks in phy : 70
// Marks in chem : 80
// Marks in com Application : 90
// Total Marks = 240
// Percentage = 80.00
// Division = First

#include<stdio.h>
int main()
{
    int Roll,phy,chem,com,Totall;
    char Name[100], Division[10];

    printf("Enter The Roll:");
    scanf("%d",&Roll);

    printf("Enter Student Name:");
    scanf("%c", &Name);

    printf("phy:");
    scanf("%d", & phy);

    printf("chem:");
    scanf("%d",&chem);

    prinf("com Application:");
    scanf("%d",&com);

    Totall = phy+chem+com;
    printf("Total Marks = %d", Totall);

    float Per = Totall / 3.0;
    printf("Percentage is:%d",Per);

    if (Per >= 80)
    {
        printf("First Class");
    }
    else if (Per>=50)
    {
        printf("Second Class");
    }
    else
    {
        printf(" Third Class");
    }


    return 0;
}
