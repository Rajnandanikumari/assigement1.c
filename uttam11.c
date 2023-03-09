#include<stdio.h>
int main()
{
    int x,y,i,flag=0;
    printf("Enter 2 number\n");
    scanf("%d%d",&x,&y);
    for(i=1;i<x*y;i++)
    {
        if((i%x==0)&&(i%y==0))
        {
            printf("LCM of %d and %d is %d",x,y,i);
            break;
        }
    }
    return 0;
}

#include<stdio.h>
int hcf(int x,int y);
int main()
{
    int x,y,i,flag=0;
    printf("Enter 2 number\n");
    scanf("%d%d",&x,&y);
    c=hcf(x,y);
    printf("hcf of %d and %d is %d",x,y,c);
}
int hcf(int x.int y)
{
    for(i=1;i<x*y;i++)
    {
        if((i%x==0)&&(i%y==0))
        {
            printf("hcf of %d and %d is %d",x,y,i);
        }
    }
    return 0;
        }

        #include<stdio.h>
        int main()
        {

            int i,flag=0;
            printf("Enter the number\n");
            scnaf("%d",&n);
            for(i=1;i<=10;i++)
                if(i%2==0)
                flag=1;
            printf("Number is not prime\n");
            else
                printf("Number is prime")'
                return 0;
        }

        #include<stdio.h>
        int primenumber(int x);
        int prime number()
        {
            prime number(n);
        }
        int primenumber(int x)
        {

            int i,N,flag=0;
            for(N=1;N<=100;N++)
            {
                flag-0;
                for(i=2;i<N/2;i++)
                {
                    if(N%i==0)
                    {
                        flag++;
                        break;
                    }
                }
                if(flag==0&&N!=1)
                {
                    printf("%d",N);
                }
            }

            #include<stdio.h>
            voidprimenumber(int x);
            int main()
            {
                int num;
                primenumber=(num);

            }

            voidprimenumber(int x)
            {
                int i,n,flag=0;
                for(i=1;i<=N;i++)
                    if(i%2==0)
                    flag=1;
                printf("Not prime number\n");
                else
                    printf("prime number\n");
            }

            #include<stdio.h>
        void primenumber(int x,int y);
        int main()
        {
           primenumber(x,y);
        }
        voidprimenumber(int x,int y)
        {
        int i,N,flag=0;
        for(i=2;i<=N/2;i++)
        {
            if(N%i==0)
            {
                flag++;
                break;
            }
        }
        if(flag==0&&N!=1)
        {
            printf("%d",N);
        }
        }

        #include<stdio.h>
        void fib(n);
        int main()
        {
            int i;
            f=fib(n);
            return 0;
        }
        void fib(n)
        {
            int i,N;
            for(i=1;i<=N;i++)
                if(n==1||n==0)
                return 1;
                printf(f(n-1)+(n-2));
        }

        #include<stdio.h>
        int fact(int n)
        {
            int i,f=1;
            if(n==0)
                return 1;
            for(i=1;i<=n;i++)
                f=f*i;
            return f;
        }
        int comb(int n,int r)
        {
            return fact(n)/(fact(n-r));
        }
        void pascal(int n)
        {
            int r,j;
            for(j=0;j<=n;j++)
            {
                for(int r=0;r<=j;r++)
                    printf("%d",comb(n,r));
                printf("\n");
            }
        }
        int main()
        {
            pascal(5);
        }
            #include<stdio.h>
            int func(int);
            int main()
            {
                int n,s;
                printf("Enter a number\n");
                scanf("%d",&n);
                square=fun(n);
                printf("\n square of no. is %d",s);
            }
            int func(int temp);
            {
                return temp*temp;
            }

            #include<stdio.h>
            int sum(int n);
            int main()
            {
                printf("Enter the number\n");
                scanf("%d\n",&num);
                sum=(int n);
            }
            int sum(int n)
            {
                int i,s=0;
                for(i=1;i<=n;i++
                {
                    s=s+fact(i)/i;
                }
                return 0;
            }




