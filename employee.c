struct employee
{
    char name[20];
    int mobileno[10];
    float salary;
};
main()
{
    struct employee e;
    int i ,n;
    printf("enter number of employees");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       printf("\n name of employee=");
        scanf("%s",&e.name[20]);
        printf("\n mobileno of employee=");
        scanf("%d",&e.mobileno[10]);
        printf("\n salary of employee=");
        scanf("%f",&e.salary);
    }
}
