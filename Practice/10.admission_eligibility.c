// //10. Write a C program to determine eligibility for admission to a professional course based on the following criteria: Go to the editor
// //Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks in Chem>=50 and Total in all three subject >=190 or Total in Maths and Physics >=140 ------------------------------------- Input the marks obtained in Physics :65 Input the marks obtained in Chemistry :51 Input the marks obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry : 188 Total marks of Maths and Physics : 137 The candidate is not eligible.
// Expected Output :
// The candidate is not eligible for admission.

#include <stdio.h>
int main()
{
    int Maths, Phy, Chem;
    scanf("%d%d%d", &Maths, &Phy, &Chem);

    int Total = Maths + Phy + Chem;

    if (Maths >= 65)
    {
        if (Phy >= 55)
        {
            if (Maths + Phy >= 140)
            {
                if (Total >= 190)
                {
                    printf("Eligible for Admission");
                }
                else
                {
                    printf("Not Eligible for Admission");
                }
            }
            else
            {
                printf("Not Eligible");
            }
        }
        else
        {
            printf("Not Eligible");
        }
    }
    else
    {
        printf("Not Eligible for admission");
    }

    return 0;
}
