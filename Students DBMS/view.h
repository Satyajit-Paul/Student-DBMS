void view()
{
    struct student s;

    FILE *fp ;
    system("cls");
    printf("\n\n");
    fp=fopen("student.txt","r+");
    //while (!feof(fp)){
       while( fscanf(fp,"%d %s %s %f",&s.roll,s.name,s.dept,&s.result)!=EOF){
        printf("\t\t\tID/Roll: %d\n",s.roll);
        printf("\t\t\tName: %s\n",s.name);
        printf("\t\t\tDepartment: %s\n",s.dept);
        printf("\t\t\tResult: %.2f\n",s.result);
        printf("\t\t\t______________________________\n");
    }
    fclose(fp);
    printf("\nEnter 1 for main menu or any key to exit: ");
    int press;
    scanf("%d",&press);
    switch (press)
    {
    case 1:
        system("cls");
        main();
        break;
    default :
        break ;
    }
}

//====================================//
void recycle()
{
    struct student s;

    FILE *fr ;
    system("cls");
    printf("\n\n");
    fr=fopen("recycle.txt","r+");
    while( fscanf(fr,"%d %s %s %f",&s.roll,s.name,s.dept,&s.result)!=EOF){
        printf("\t\t\tID/Roll: %d\n",s.roll);
        printf("\t\t\tName: %s\n",s.name);
        printf("\t\t\tDepartment: %s\n",s.dept);
        printf("\t\t\tResult: %.2f\n",s.result);
        printf("\t\t\t______________________________\n");
    }
    fclose(fr);
    printf("\nTo Empty recycle bin enter 1 or for main menu enter 2: ");
    int press;
    scanf("%d",&press);
    switch (press)
    {
    case 1:
        system("cls");
        fr=fopen("recycle.txt","w");
        char a=' ';
        fprintf(fr,"%c",a);
        fclose(fr);
        printf("\nRecycle Bin Erased Successfully!\n");
        main();
        break;
    case 2:
        system("cls");
        main();
        break;
    default :
        break ;
    }
}
