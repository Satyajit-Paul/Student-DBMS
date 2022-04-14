#include<stdio.h>
struct student
{
    int roll;
    char name[50],dept[50];
    float result;
};
void add()
{
    struct student s;

    FILE *fp ;
    system("cls");
    fp=fopen("student.txt","a");
    int ch=1,press;
    while(ch){
    printf("\nEnter Student's ID/roll: ");
    scanf("%d",&s.roll);

    printf("Enter name: ");
    scanf("%s",s.name);

    printf("Enter deptartment: ");
    scanf("%s",s.dept);

    printf("Enter result (CGPA out of 4.00): ");
    scanf("%f",&s.result);

    system("cls");
    printf("\nInfo added successfully...!!!\n");

    fprintf(fp,"\n\n%d %s %s %.2f\n",s.roll,s.name,s.dept,s.result);
    printf("Enter 1 to continue adding info or 2 for main menu: ");
    scanf("%d",&ch);
    if (ch==2){
        press=2;
        break ;
    }
    }
    fclose(fp);

    switch (press)
    {
    case 2:
        system("cls");
        main();
        break;
    default :
        break ;
    }
}
