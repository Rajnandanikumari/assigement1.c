#include<stdio.h>
struct Employee
{
    char name[20];
    int salary;
    int id;
};
int main()
{

    struct Employee={"prateek",100,20};
    printf("\nName=%s\n",e.name);
    printf("salary=%d\n",e.salary);
    printf("id=%d\n",id);
    return 0;
}
#include<stdio.h>
struct Employee
{
    int id;
    char name[20];
    int salary;
};
void input(struct Employee *e)
{
    printf("Enter Employee Id\n");
    scanf("%d",&e->id);
    printf("Enter Empolyee Name\n");
    fflush(stdin);
    scanf("%s",e->name);
    printf("Enter Employee salary\n");
    scanf("%d",&e->salary);
}
#include<stdio.h>
struct time
{
    int hourse;
    int minutes;
    int seconds;
};
int main()
{
    struct time start,stop,diff;
    printf("Enter hours,minutes and seconds of start time:");
    scanf("%d%d%d",&start.hours,&start.minutes,&start.seconds);
    printf("Enter hours,minutes and seconds of stop time:");
    if(start.seconds>stop.seconds)
    {
        stop.seconds+=60;
        --stop.minutes;
    }
    if(start.minutes>stop.minutes)
    {
        stop.minutes+=60;
        --stop.hours;
    }
    diff.seconds=stop.seconds-start.seconds;
    diff.minutes=stop.minutes-start.minutes;
    diff.minutes=stop.hours-start.hours;
    printf("Difference=%d:%d:%d",diff.hours,diff.minutes,diff.seconds);
    return 0;
}

};

#include<stdio.h>
struct Employee
{
    int id;
    char name[20];
    int salary;
};
void input(struct Employee *e)
{

    printf("Enter Employee Id\n");
    scanf("%d",&e->Id\n);
    printf("Enter Employee Name\n");
    fflush(stdin);
    scanf("%s",e->name);
    printf("Enter Employee salary\n");
    scanf("%d",&e->salary\n);
}
void display(struct Employee e)
{
    printf("Employee Id=%d",e.id);
    printf("Employee Name =%s\n",e.name);
    printf("Employee salary = %d\n",e.salary);
}

#include<stdio.h>
struct Employee
{
    int id;
    char name[20];
    int salary;
};
void display(struct Employee e)
{
    printf("Employee Id=%d\n",e.id);
    printf("Employee Name=%s\n",e.name);
    printf("employee salary=%d\n",e.salary);
}
int maxsalary(struct Employee e[],int size)
{
    int max=-1,i;
    fo(i=0;i<size;i++)
    {
        if(e[i].salary>max)
            max=e[i].salary;
    }
    return max;
    }

    #include<stdio.h>
    struct Employee
    {
        char name[20];
    };
    void input(struct Employee *e)
    {
        printf("Enter Employee\n")
        scanf("%d",&e->name);
    }
    void sortEmployee(struct Employee *e,int size)
    {
        int i,j;
        struct Employee temp;
        for(i=0;i<size-1;i++)
        {
            for(j=i+1;j<size;j++)
            {
                if(e[i].salary>e[j].salary)
                {
                    temp=e[i];
                    e[i]=e[j];
                    e[j]=temp;
                }

                #include<stdio.h>
                struct student;
                {
                    int id;
                    char name[20];
                    int rollno.;
                };
                void input(struct student*s)
                {
                    printf("Enter name\n");
                    scanf("%d",&e->name);
                    printf("Enter id\n");
                    fflush(stdin);
                    scanf("%s,e->id");
                    printf("Enter rollno.);
                    scanf(%d;&rollno);
                }
                return 0;
            }
            #include<stdio.h>
            struct student *s;
            {
                int id;
                char name[n];
                int roll no.;
            };
            void input(struct student *s)
            int i;
            {
                for(i=1;i<n;i++)
                    scanf("%d\n"&n);
            }
            void sortStudent(struct student *s,int size)
            {
                int i,j;
                struct Employee temp;
                for(i=0;i<size;i++)
                {
                    for(j=0;j<size;j++)
                    {
                        if(e[i].salary>e[j].salary)
                        {
                            temp=e[i];
                            e[i]=e[j];
                            e[j]=temp;
                        }

                        #include<stdio.h>
                        struct student *s;
                        {
                            struct Marks;
                            {
                                int rollno.;
                                char name[20];
                                int chem_marks;
                                int math_marks;
                                int physics_marks;
                            };
                            void input(struct student *s)
                            {
                                printf("Enter student rollno.\n")
                                scanf("%d",&e->r.n);
                                printf("Enter student Name\n");
                                fflush(stdin);
                                scanf("%s",e->name);
                                printf("Enter chem_marks\n");
                                scanf("%d",&e->chem_masrks);
                                printf("Enter math_marks);
                                scanf("%d",e->math_marks);
                                printf("Enter physics_marks\n");
                                percentage=(physics+chemistry+maths)/300)*100;
                                printf("percentage of total marks is %d\n");
                                scanf("%d",e->physics_marks);
                            }
                            void display(struct Student s)
                            {
                                printf("Student rollno=%d",r.n);
                                printf("percentage of total marks is %d\n");
                            }
