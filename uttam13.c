#include<stdio.h>
int main()
{
    int sum(int n)
    {
        if(n==1)
            return 1;
        return n+sum(n-1);
    }
    int main()
    {
        int n=5;
        x=sum(5);
    }

    #include<stdio.h>
    int sum(n)
    if(n==1)
        return 1;
        return(2*n-1)+sum(n-1);
}
int main()
{
    int n=3;
    x=sum(3);
}

 #include<stdio.h>
 int sum(n)
 if(n==1)
    return 2;
 return 2*n+sum(n-1);
 }
 int main()
 {

     int n;
     x=sum(n);
 }

 #include<stdio.h>
 int main()
 {
     int sum(int n)
     {
         if(n==1)
            return 1;
         return n+sum(n-1)
     }
     int main()
     int n;
     x=sum(n);
 }

 #include<stdio.h>
 int sum(int n)
 {
     if(n%10==n)
        return n;
     return(n%10)+sum(n/10);
 }
 sum(n)=(n%10)+sum(n/10)
 }

 #include<stdio.h>
 int sum(int n)
 {
     if(n==1)
        return 1;
     return n*f(n-1);
 }
 int main()
 int n;
 f=fact(n);
 }

 #include<stdio.h>
 int HCF(int n1,int n2)
 {
     if(n2==0)
        return n1;
     else
     {
         return HCE(n2,n1);
     }
     int main()
     {
         printf("HCF=%d \n\n",HCF(8,15));
         return 0;
     }

     #include<stdio.h>
     int fib(int n)
     {
         if(n==1||n==2)
            return 1;
         return fib(n-1)+fib(n-2)
     }
     int main()
     {
        int i;
        for(i=0;i<=n;i++)
        {
            printf("%d",fib(i));
        }

        #include<stdio.h>
        int count(int n)
        {
            static int c=1;
            if(n==0)
                return c;
            else
                c++;
            countDigit(n/10);
        }
        int main()
        {
            printf("count=%d\n\n",countDigit(145));
            return 0;
        }

        #include<stdio.h>
        int power(int n,int m)
    {
        if(m==1)
            return n;
        else
            return*pow(n,m-1)
    }
    int main()
    {
        printf("count=%d\n\n",power(3,4));
        return 0;
    }



