main()
{
    int i,large,small;
    int a[7];
    for(i=1;i<5;i++)
    {
    printf("enter any number");
    scanf("%d",&a[i]);
        }
        small=a[0];
        large=a[0];
        for(i=1;i<5;i++)
        {
            if(a[i]<small)
                small=a[i];
            if(a[i]>large)
                large=a[i];
        }
        printf("small number is=%d",small);
        printf("large number is=%d",large);
}
