#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "mainheader.h"

int main()
{
    int i;
    printf("\n\b>>WELCOME TO STUDENT'S DATABASE MANAGEMENT SYSTEM<<\n");
    printf("\t\t***Main Menu***\n");
    printf("\t\t===============\n");
    printf("\t\t1.Add student's info\n");
    printf("\t\t2.View all student's info\n");
    printf("\t\t3.Search student's info\n");
    printf("\t\t4.Edit info\n");
    printf("\t\t5.Recycle Bin\n");
    printf("\t\t6.Exit\n");
    printf("\t\t===============\n");
    printf("\n\t\tSelect an option: ");
    scanf("%d",&i);

    switch (i)
    {
    case 1:
        system("cls");
        add();
        break ;
    case 2:
        system("cls");
        view();
        break ;
    case 3:
        system("cls");
        printf("\n\t\t1.Search by name\n");
        printf("\t\t2.Search by roll\n");
        printf("\t\t3.Search by department\n");
        int c;
        printf("\n\t\tSelect any option : ");
        scanf("%d",&c);
        switch (c)
        {
        case 1:
            byname();
            break ;
        case 2:
            byroll();
            break ;
        case 3:
            bydept();
            break;
        default :
            break ;
        }
    case 4:
        system("cls");
        printf("\t\t1.Update info\n");
        printf("\t\t2.Delete info\n\n");
        int d;
        printf("\t\tSelect any option : ");
        scanf("%d",&d);
        switch (d)
        {
        case 1:
            update();
            break ;
        case 2:
            del();
            break ;
        default :
            break ;
        }
    case 5:
        system("cls");
        recycle();
        break;
    case 6:
        break;
    default :
        break ;
    }
    return 0;
}
