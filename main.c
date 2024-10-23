#include <stdio.h>

void main()
{
    printf("\t \t GIC\n");
    printf("\t \t ALLD\n");
    printf("--------------------------------------------------- \n");
    char name[20], f_name[20], m_name[20], division[20];
    int roll_no, hindi, eng, math, chem, phys, total;
    float percentage;
    printf("Student Name : ");
    scanf("%s", name);
    printf("Father's Name : ");
    scanf("%s", f_name);
    printf("Mother's Name : ");
    scanf("%s", m_name);
    printf("--------------------------------------------------- \n");
    printf("Subject Name \t Max/Min \t Obtain \n");
    printf("Hindi \t \t \t 100/33 \t ");
    scanf("%d", &hindi);
    printf("English \t \t 100/33 \t ");
    scanf("%d", &eng);
    printf("Math \t \t \t 100/33 \t ");
    scanf("%d", &math);
    printf("Chemistry \t \t 100/33 \t ");
    scanf("%d", &chem);
    printf("Physcis \t \t 100/33 \t ");
    scanf("%d", &phys);
    total = hindi + eng + math + chem + phys;
    percentage = (float) total / 500 * 100;
    printf("--------------------------------------------------- \n");
    printf("Marks Obtained : %d \n", total);
    printf("Percentage Obtained : %f \n", percentage);
    printf("--------------------------------------------------- \n");
    if (hindi < 34 || eng < 34 || math < 34 || chem < 34 || phys < 34){
        printf("Fail");
    }
    else if (percentage < 40) {
        printf("Third Division");
    } else if (percentage < 60) {
        printf("Second Division");
    } else {
        printf("First Division");
    }
}