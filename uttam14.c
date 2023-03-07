#include<stdio.h>
int a[10]={1,2,3,4,5,6.78,9,10}
printf("Enter a number")
int main()
{
    int x[10],i,sum=0;
    for(i=0;i<10;i++)
    {
        sum=sum+i;
    }
    for(i=0;i<10;i++)
    {
        printf("%d",x[i]);
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int a[5],i,sum=0;
    float avg;
    printf("Enter 5 number\n");
    for(i=0;i<=4;i++)
        scanf("%d",&a[i]);
    for(i=0;i<=4;i++)
    sum=sum+a[i];
    avg=sum/5;
    printf("%f is average",avg);
    return 0;
}

#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10],i,sum=0;
    printf("Enter the number\n");
    for(i=0;i<=4;i++)
    {
        scanf(i=0;i<=4;i++)
    }
    printf("sum of array elements\n");
    for(i=0;i<=4;i++)
            {
                sum=sum+a[i];
                while(i%2==0)
                    printf("%d",sum);
                return 0;
            }

            #include<stdio.h>
            int main()
            {
                int a[10],i,se,so;
                printf("Enter 10 numbers");
                for(i=0;i<=9;i++)
                    if(a[i]%2==0)
                    se=se+a[i];
                else
                    so=so+a[i];
                printf("sum of even=%d",se);
                printf("sum of odd=%d",so);
            }

            #include<stdio.h>
            int main()
            {
                int a[10]={3,5,2,55,12},i,max;
                max=a[0];
                for(i=0;i<5;i++)
                {
                    if(max<a[i])
                    {
                        max=a[i]
                    }
                    printf("Maximum value is %d\n\n",max);
                    return 0;
                    }

                    #include<stdio.h>
                    int main()
                    {
                        int a[10]={3,5,2,55,12},i,min;
                        max=a[10];
                        for(i=0;i<5;i++)
                        {
                            if(min>a[i]);
                            {

                                min=a[i];
                            }
                            printf("Maximum value is %d\n\n",min);
                            return 0;
                        }

                        #include<stdio.h>
                        int main()
                        {
                            int a[]={8,9,10,13,17,18,20};
                            for(i=0;i<6;i++)
                            {
                                for(j=0;j<7;j++)
                                {
                                    if(a[i]>a[j])
                                    {
                                        t=a[i];
                                        a[i]=a[j];
                                        a[j]=t;
                                    }
                                }
                            }
                            for(i=0;i<7;i++)
                            {
                                printf("%d",a[i]);
                            }

                            #include<stdio.h>
                            int main()
                            {
                                int a[10]={2,5,10,4,3,11,15,35,3,56};
                                int i,max=-1,max=-2;
                                for(i=0;i<`10;i++)
                                {
                                    if(a[i]<max1)
                                    {
                                        max2=max1;
                                        max1=a[i];
                                    }
                                    else if(max2<a[i])
                                        max2=a[i];
                                }
                                printf("second largest element is %d\n\n",max2)
}

  #include<stdio.h>
  int main()
  {
      int a[10]={2,5,10,4,3,11,15,35,35}
      int i,max=-i, max=-2;
      for(i=0;i<10;i++)
      {
          if(a[i]>max1)
          {
              max2=max1;
              max1=a[i];
          }
          else if
          (max2<a[i])
          max2=a[i];
      }
      printf("second number in an array is %d\n\n",max2);
  }
  return 0;
      }

      #include<stdio.h>
      void reverseprint(int a[],int size)
      {
          int i;
          for(i=size-1;i>=0;i--)
          {
              printf("%d",a[i]);
          }
          printf("\n\n");
      }
      int main()
      {
          int a[]={1,2,3,4,5,6,7,8,9};
          reversepoint(a,9);
          return 0;
      }

      #include<stdio.h>
      int main()
      {
          int a1[i]={length};
          int a2[i]={length};
          for(int i=0;i<length;i++)
          {
              a2[i]=a1[i];
          }
          printf("Elements of original array:\n");
          for(int i=0;i<length ;i++)
          {
              printf("%d",a1[i]);
          }
          printf("\n");
          printf("Elements of new array\n");
          for(int i=0;i<length;i++)
          {
              printf("%d",a2[i]);
          }
          return 0;
          }



