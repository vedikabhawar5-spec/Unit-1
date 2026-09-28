#include <stdio.h>
int main()
{
    int age;
    float height;
    double salary;
    char grade;
    printf("enter age:");
    scanf("%d",&age);
    printf("enter height:");
    scanf("%f",&height);
    printf("enter salary:");
    scanf("%lf",&salary);
    printf("enter grade:");
    scanf(" %c",&grade);
    printf("---Details---\n");
    printf("Age=%d\n",age);
    printf("Height=%.2f\n",height);
    printf("salary=%.2lf\n",salary);
    printf("grade=%c\n",grade);
    return 0;
}
