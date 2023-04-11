#include<stdio.h>
int main()
{
    int n,i;
    int *p;
    printf("Enter value of n\n");
    scanf("%d",&n);
    p=(int*)calloe(n,size of list);
    printf("Enter %d values\n",n);
    for(i=0;i<n;i++)
    {
        printf("%d",*(p+i));
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int n,i;
    int *p,float avg=0;
    printf("Enter number of values you want to enter\n");
    scanf("%d",p[i]);
}
int sum=0;
for(i=0;i<n;i++)
{
    sum=sum+p[i];
}
avg=sum\n;
printf("Average = %f\n",avg);

 return 0;
 }

 #include<stdio.h>
 int main()
 {
     int n,i;
     int *p;
     float avg=sum\n;
     printf("Average =%f,avg");
     return 0;
 }

 #include<stdio.h>
 #include<stdlib.h>
 int main()
 {
     int n;
     char *text;
     printf("Enter limit of the text : ");
     scanf("%d",&n);
     text=(char*)malloc(n*sizeof(char));
     printf("Enter text : ");
     scanf(" ");
     gets(text);
     printf("Inputted text is : %s\n",text);
     free(text);
     return 0;
 }

 #include<stdio.h>
 int main()
 {
     int n,i;
     int*p;
     sum=0;
     printf("Enter the value\n\n");
     scanf("%d",&n);
     p=(int*)malloc(n.sizeof(int));
     printf("Enter %d numbers\n,n");
     for(i=0;i<n;i++)
     {

         scanf("%d",p+i)
         }
         for(i=0;i<n;i++)
         {
             sum=sum+p[i];
         }
         printf("%d\n",sum);
 }
 return 0;
 }

 #include<sdio.h>
 voidfindLarget(int*arr,int N)
 {
     int i;
     for(i=1;i<N;i++)
     {
         if(*arr<*(arr+i);
         }
         }
         printf("%d",*arr);
         }
         int main()
         {
             int i,N=4;
             int *arr;
             arr=(int*)calloc(N,sizeof(int));
             findLargest(arr,N);
             return 0;
         }

         #include<stdio.h>
         #include<stdlib.h>
         int main()
         {
             int *ptr=15;
             printf("%d\n",*ptr);
             ptr=NULL;
             return 0;
         }

         #include<stdio.h>
         int main()
         {

             int *ptr=(int*)malloc(sizeof(int));
             int a=560;
             ptr=&a;
             free(ptr);
             return 0;
         }

         #include<stdio.h>
         int main()
         {
             int n,i;
             int *p,float avg=0;
             printtf("Enter number of value you want to enter\n");
             scanf("%d",&n);
             p=(int*)malloc(n);
             if(p==NULL)
             {
                 printf("Memory allocation failed");
                 return 0;
             }
             printf("Enter %d values\n",n);
             for(i=0;i<n;i++)
             {
                 scanf("%d",p[i]);
             }
             int sum=0;
             for(i=0;i<n;i++)
             {
                 sum=sum+p[i];
             }
             avg=sum/n;

             printf("Average=%f\n",avg);
             }

             #include<stdio.h>
             int main()
             {
                 int n,i;
                 int *p,max,min;
                 printf("Enter the no.\n");
                 scanf("%d",p++)
             }
             if(a[i]>max)
                a[i]==max;
             printf("%d\n",max);
             else(aa[i]<min)
                a[i]=min;
             printf("%d\n",min);
             return 0;
             }
