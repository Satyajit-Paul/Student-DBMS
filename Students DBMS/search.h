
void byroll()
{
    FILE *fp ;
    struct student s ;
    int ch=1,pres,roll;
    while (ch){
        int i;
        fp=fopen("student.txt","r");
        printf("\n\t\tEnter ID/roll: ");
        scanf("%d",&roll);
        while (!feof(fp)){
            i=0;
            fscanf(fp,"%d %s %s %f",&s.roll,s.name,s.dept,&s.result);

            if (roll==s.roll){
                printf("\n\t\tID/Roll: %d\n",s.roll);
                printf("\t\tName: %s\n",s.name);
                printf("\t\tDepartment: %s\n",s.dept);
                printf("\t\tResult: %.2f\n\n",s.result);
                break ;
            }
            else
                i++ ;
        }
            if (i!=0)
                printf("Didn't match with any record...!!!\n\n");
            printf("\t\tTo search again enter 1 or for main menu enter 2 : ");
            scanf("%d",&ch);
            system("cls");
            if (ch==2){
                pres=2;
                break ;
            }
    }
    fclose(fp);

    switch (pres)
    {
    case 2:
        system("cls");
        main();
        break;
    default :
        break ;
    }
}
//=====================================================//
void byname()
{
    FILE *fp ;
    struct student s ;
    int ch=1,press;
    char name[50];
    while (ch){
        int i;
        fp=fopen("student.txt","r");
        printf("\n\t\tEnter name: ");
        scanf("%s",name);
        while (!feof(fp)){
            i=0;
            fscanf(fp,"%d %s %s %f",&s.roll,s.name,s.dept,&s.result);

            if (strcmp(s.name,name)==0){
                printf("\n\t\tRoll: %d\n",s.roll);
                printf("\t\tName: %s\n",s.name);
                printf("\t\tDepartment: %s\n",s.dept);
                printf("\t\tResult: %.2f\n\n",s.result);
                break ;
            }
            else{
                i++ ;
            }
        }

            if (i!=0)
                printf("\t\tDidn't match with any record...!!!\n\n");
            printf("\t\tTo search again enter 1 or for main menu enter 2 : ");
            scanf("%d",&ch);
            system("cls");
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
//=============================================//

void bydept()
{
    FILE *fp ;
    struct student s ;
    int ch=1,press;
    char dept[50];
    while (ch){
        int i=0;
        fp=fopen("student.txt","r");
        printf("\n\t\tEnter a department name which you want to search : ");
        scanf("%s",dept);
        system("cls");
        while (fscanf(fp,"%d %s %s %f",&s.roll,s.name,s.dept,&s.result)!=EOF){
                if (strcmp(s.dept,dept)==0){
                    i=i+1;
                    printf("\n\t\tRoll: %d\n",s.roll);
                    printf("\t\tName: %s\n",s.name);
                    printf("\t\tDepartment: %s\n",s.dept);
                    printf("\t\tResult: %.2f\n\n",s.result);
                }
        }
        if (i==0)
            printf("\n\t\tSorry!Didn't match with any record...!!!\n\n");
            printf("\t\tTo search again enter 1 or for main menu enter 2 : ");
            scanf("%d",&ch);
            system("cls");
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

