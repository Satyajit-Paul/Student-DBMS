
void update()
{
    FILE *fo,*fn;
    struct student s ;
    struct student up;
    int ch=1,var;
    while (ch){
        int i,select;
        fo=fopen("student.txt","r");
        fn=fopen("new.txt","w");
        printf("\n\t\tEnter a student's ID/roll whose info you want to change: ");
        scanf("%d",&up.roll);
        while (fscanf(fo,"%d %s %s %f",&s.roll,s.name,s.dept,&s.result)!=EOF){
            if (up.roll==s.roll){
                i=0;
                printf("\t\t\tID/Roll: %d\n",s.roll);
                printf("\t\t\tName: %s\n",s.name);
                printf("\t\t\tDepartment: %s\n",s.dept);
                printf("\t\t\tResult: %.2f\n",s.result);
                printf("\n\t\tWhich info do you want to modify?\n\t\t\t1.Name\n\t\t\t2.Department\n\t\t\t3.Result\n\n");
                printf("\t\tEnter your choice: ");
                scanf("%d",&select);
                if (select==1){
                    printf("\t\tEnter new name: ");
                    scanf("%s",up.name);
                    fprintf(fn,"\n%d %s %s %.2f\n",s.roll,up.name,s.dept,s.result);
                    printf("\n\t\tName has changed successfully...!\n");

                }
                else if (select==2){
                    printf("\t\tEnter new department: ");
                    scanf("%s",up.dept);
                    fprintf(fn,"\n%d %s %s %.2f\n",s.roll,s.name,up.dept,s.result);
                    printf("\n\t\tDepartment name has changed successfully...!\n");
                }
                else if (select==3){
                    printf("\t\tEnter new result (cgpa out of 4.00): ");
                    scanf("%f",&up.result);
                    fprintf(fn,"\n%d %s %s %.2f\n",s.roll,s.name,s.dept,up.result);
                    printf("\n\t\tResult has changed successfully...!\n");
                }

            }
            else {
                i++;
                fprintf(fn,"\n%d %s %s %.2f\n",s.roll,s.name,s.dept,s.result);
            }
    }
        if (i>1)
            printf("\n\t\tDidn't match with any record...!!!\n\n");

        fclose(fo);
        fclose(fn);
        remove("student.txt");
        rename("new.txt","student.txt");
        printf("\t\tTo update another enter 1 or for main menu enter 2 : ");
        scanf("%d",&ch);
        system("cls");
        if (ch==2){
            var=2;
            break ;
        }
}

    switch (var)
    {
    case 2:
        system("cls");
        main();
        break ;
    default :
        break ;
    }

}
//=============================================//

void del()
{
    system("cls");
    FILE *fo,*fn,*fr;
    struct student s ;
    struct student up;
    int ch=1,var;
    while (ch){
        int i;
        fo=fopen("student.txt","r");
        fn=fopen("new.txt","w");
        fr=fopen("recycle.txt","a+");
        printf("\n\tEnter a student's ID/roll whose info you want to delete: ");
        scanf("%d",&up.roll);

        printf("\n\tAre you sure you want to delete roll: %d's information??\n",up.roll);
        printf("\n\n\t\t1.Yes\n");
        printf("\t\t2.No\n");
        int p;
        printf("\n\tEnter your choice: ");
        scanf("%d",&p);
        if (p==1){
            while (fscanf(fo,"%d %s %s %f",&s.roll,s.name,s.dept,&s.result)!=EOF){
                if (up.roll==s.roll){
                    fprintf(fr,"\n%d %s %s %.2f\n",s.roll,s.name,s.dept,s.result);
                    i=0;

                }
                else {
                    i++;
                    fprintf(fn,"\n%d %s %s %.2f\n",s.roll,s.name,s.dept,s.result);
                }
            }
            if (i!=0)
                printf("\n\tDidn't match with any record...!!!\n\n");
            else if (i==0)
                printf("\tDelete successful..!!!\n");
            fclose(fo);
            fclose(fn);
            fclose(fr);
            remove("student.txt");
            rename("new.txt","student.txt");
        }
        else
            printf("\n\tDelete Unseccessfull..!!!\n");

        printf("\tTo delete again enter 1 or for main menu enter 2 : ");
        scanf("%d",&ch);
        system("cls");
        if (ch==2){
            var=2;
            break ;
        }
}

    switch (var)
    {
    case 2:
        system("cls");
        main();
        break ;
    default :
        break ;
    }

}
