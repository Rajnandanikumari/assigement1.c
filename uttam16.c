#include<stdio.h>
int main()
int a[2][2]={1,2,3,4};
int b[2][2]={2,1,4,3};
int c[2][2],sum,i,j,k;

for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {
        sum=0;
        for(k=0;k<2;k++)
    {
        sum=sum+a[i][k]+b[k][j];
    }
    c[i][j]=sum;
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d",c[i][j]);
        }
        printf("\n");
    }
    return 0;
        }

        #include<stdio.h>
        int a[2][2]={1,2,3,4,5,6,7,8,9,10};
        int b[2][2]={2,3,7,8,9,1,5,4};
        int c[2][2],i,j,k;
        for(i=0;i<=2;i++)
        {
            for(j=0;j<=2;j++)
            {
                for(k=0;k<=2;k++)
                {
                    c[i][k]=a[i][k]*b[j][k]+a[i][k]*b[j][k];
                    for(i=0;i<=2;i++)
                    {
                        for(k=0;k<=2;k++)
                        {
                            printf("%d\n",c[i][k]);
                            return 0;
                        }

                        #include<stdio.h>
                        int main()
                        {
                            int a[2][2],i,j;
                            for(i=0;i<5;i++)
                            {
                                for(j=0;j<4;j++)
                                {
                                    a[i][j]=a[j][i];
                                }
                            }
                            for(i=0;i<5;i++)
                            {
                                for(j=0;j<4;j++)
                                {
                                    printf("%d",a[i][j]);
                                }
                                printf("\n");
                                }
                                return 0;
                            }

                            #include<stdio.h>
                            int main()
                            {
                                int a[2][2],i,j,sum=0,n;
                                printf("Enter the size of square matrix");
                                scanf("%d",&n);
                                printf("Enter the elements in matrix");
                                for(i=0;i<n;i++)
                                {
                                    for(j=0;j<n;j++)
                                        if(i==j)
                                        sum=sum+a[i][j];
                                    printf("%f\n",a[i][j])
                                    return 0;
                                }

                               #include<stdio.h>
                               int main()
                               {
                                   int a[2][2],i,j,sum=0,n;
                                   printf("Enter the size of square matrix");
                                   scanf("%d",&n);
                                   printf("Enter the element in matrix");
                                   for(i=0;i<n;i++)
                                   {
                                       for(j=0;j<n;j++)
                                       {
                                           printf("element is %d, %d",i,j);
                                           scanf("%d",&a[i][j])
                                           if(i+j==2)
                                            printf("the matrix is \n");
                                           for(i=0;i<n;i++)
                                           {
                                               for(j=0;j<n;j++)
                                                printf("%d",a[i][j);
                                               printf("\n");
                                           }
                                       }

                                       #include<stdio.h>
                                       int main()
                                       {
                                           int a[10][10],i,j,m,n,sum=0;
                                           printf("Enter the order of the matrix\n");
                                           scanf("%d%d",&m,&n);
                                           printf("Enter the co-efficient of the matrix\n");
                                           for(i=0;i<m;i++)
                                           {
                                               for(j=0;j<n;j++)
                                               {
                                                   scanf("%d",&a[i][j]);
                                               }
                                           }
                                           for(i=0;i<m;i++)
                                           {
                                               for(j=0;j<n;j++)
                                               {
                                                   sum=sum+a[i][j];
                                               }
                                               printf("Sum of the %d row is = %d\n",i,sum);
                                               sum=0;
                                           }
                                           for(j=0;j<n;j++)
                                           {
                                               for(i=0;i<m;i++)
                                               {
                                                   sum=sum+a[i][j];
                                               }
                                               printf("Sum of %d column is =%d\n",j,sum);
                                               sum=0;
                                           }
                                               }

                                               #include<stdio.h>
                                               int main()
                                               {
                                                   int a[10][10],i,j,n,m,sum=0;
                                                   printf("Enter the number elements\n");
                                                   scanf("%d%d",&m,&n);
                                                   for(i=0;i<n;i++)
                                                   {
                                                       for(j=0;j<n;j++)
                                                        if(i>=j)
                                                        for(i=0;i<n;i++)
                                                       {
                                                           for(j=0;j<n;j++)
                                                           {
                                                               printf("%d\n",c[i][j]);
                                                           }
                                                           return 0;
                                                       }

                                                     #include<stdio.h>
                                                     int main()
                                                     {
                                                         int a[10][10],i,j,n,m;
                                                         printf("Enter a number\n");
                                                         scanf("%d%d",&n,&m);
                                                         printf("Enter the co-coefficient of the matrix\n");
                                                         for(i=0;i<n;i++)
                                                         {
                                                             for(j=0;j<m;j++)
                                                                printf("%d\n",a[i][j]);
                                                             return 0;
                                                         }

                                                         #include<stdio.h>
                                                         int main()
                                                         {
                                                             int a[10][10],i,j,m,n;
                                                             printf("Enter a number\n");
                                                             scanf("%d%d",&n,&m);
                                                             printf("Enter the co-efficient of the matrix\n");
                                                             for(i=0;i<n;i++)
                                                             {
                                                                 for(j=0;j<n;j++)
                                                                 {
                                                                     if(row==column)
                                                                        for(i=0;i<n;i++)
                                                                     {
                                                                         for(j=0;j<m;j++)
                                                                            printf("%d\n",a[i][j]);
                                                                         return o;
                                                                     }

                                                                     #include<stdio.h>
                                                                     int main()
                                                                     {
                                                                         int a[10][10],i,j,n,m;
                                                                         printf("Enter the number\n");
                                                                         scanf("%d%d",&n,&m);
                                                                         printf("Enter the co-efficient of matrix\n");
                                                                         int max_count=0,index=-1;
                                                                         for(int i=0;i<10;i++)
                                                                         {
                                                                             int count=0;
                                                                             for(int j=0;j<=4;j++)
                                                                             {
                                                                                 if(max[i][j]==1)
                                                                                    count++;
                                                                             }
                                                                             if(count>max_count)
                                                                             {

                                                                                 max_count=count;
                                                                                 index=i;
                                                                             }
                                                                         }
                                                                         printf("Index of row with maximum is %d",index);
                                                                             }




