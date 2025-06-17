//declare a structure named Student with members  name,roll no and marks //
struct student
{
    char name[20];
    int roll_no,marks;
};
void main()
{
    struct student s[70];
    int i,n;
    printf("number of students");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n STUDENT INFORMATION \n");
        printf("\n enter student name=");
        scanf("%s",&s[i].name);
        printf("\nenter student roll_no=");
        scanf("%d",&s[i].roll_no);
        printf("\n enter student marks=");
        scanf("%d",&s[i].marks);
        }
}
