struct book
{
char name[20];
float price;
int pages;
};

void main()
{
struct book b[3];
int i;
for(i=0;i<3;i++)
{
printf("\n\nEnter details of book:\n");
printf("Enter name of book:");
scanf("%s",b[i].name);
printf("Enter book price:");
scanf("%f",&b[i].price);
printf("Enter book pages:");
scanf("%d",&b[i].pages);
}
}
