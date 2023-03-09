#include<stdio.h>
 int main()
 {
    int n;
    printf("Enter a number\n");
    scannf("%d",&n);
    switch(n)
    {
        case 1:
            printf("31 days");
            break;
        case 2:
            printf("28/29 days");
            break;
        case 3:
            printf("31 days\n");
            break;
        case 4:
            printf("30 days");
            break;
        case 5:
            printf("31 days\n");
            break;
        case 6:
            printf("30 days\n");
            break;
        case 7:
               printf("31 days\n");
              break;
        case 8:
            printf("31 days\n");
            break;
        case 9:
            printf("30 days\n");
            break;
        case 10:
            printf("31 days\n");
            break;
        case 11:
            printf("30 days\n");
            break;
        case 12;
             printf("31 days\n");

        default:
            printf("Invalid Month\n");
            break;
    }
 }

 #include<stdio.h>
  int main()
  {
      int n;
      printf("Enter a number\n");
      scanf("%d",&n);
      switch(choice)
      {
      case'A':
        printf("Enter 2 numbers\n");
        scanf("%d%d",&x,&y);
        z=x+y;
        printf("Addition=%d\n",z)
        break;
      case'B':
        printf("Enter 2 numbers\n");
        scanf("%d%d,&x,&y");
        z=x-y;
        printf("Substraction=%d\n",z);
        break;
      case'c':
        printf("Enter 2 numbers\n");
        scanf("%d%d",&x,&y);
        z=x*y;
        printf("Multiplication=%d\n",z);
        break;
      case'D':
        printf("Enter 2 numbers\n");
        scanf("%d%d",&x,&y);
        z=x/y;
        printf("Division = %d\n,z");
        break;
      default:
        printf("exits\n");
        break;
      }
  }

  #include<stdio.h>
  int main()
  {

      int n;
      printf("Enter a number\n");
      scanf("%d",&n);
      switch(n)
      {

      case 1:
        printf("Hello\n");
        break;
      case 2;
      printf("Hi");
      break;
      case 3:
        printf("Good morning");
        break;
      case 4:
        printf("morning");
        break;
      case 5:
        printf("A very good morning");
        break;
      case 6:
        printf("Nice day\n");
        break;
      case 7:
        printf("Good day to you\n");
        break;
      default:
        printf("Invalid condition\n")
        break;
      }
  #include<stdio.h>
  int main()
  {
      int a,b,c;
      printf("Enter three numbers\n");
      scanf("%d%d%d",&a,&b,&c);
      case 1:
        if(a==b||b==c||c==a)
        printf("Isosceles triangle\n");
        break;
        if(a2+b2==c2||b2+c2==a2||a2+c2==b2)
            printf("Right angle \n");
        break;
        if(a==b==c)
            printf("Equilateral triangle\n");
        break;
      default:
        printf("exit\n");
        break;
  }
  }

  #include<stdio.h>
  int main()
  {

      int n;
      switch(n)
      {
      case 1:
        printf("Good");
        break;

      case 2:
        printf("better");
        break;

      case 3:
        printf("best");
        break;
      default:
        printf("Invalid\n");
        break;
      }
        }

        #include<stdio.h>
        int main()
        {
           int year=2000;
           switch(year%100==0)
           {
               case 0;
               switch(year%4==0)
               {
               case 0:
                printf("Non loop year\n\n");
                break;
                case 1;
                printf("leap Year\n\n");
                break;
               }
                case 1:
                    switch(year%400==0)
                    {
                        case 0;
                        printf("Non leap year\n\n");
                        break;
                        case 1:
                            printf("leap year\n\n");
                    }
                    }

                    #include<stdio.h>
                    int main()
                    {
                        int unit=120,total,finaltotal;

                        switch(50<unit)
                        {
                        case 0:
                            switch(100>unit)
                            {
                                case 0;
                                total=50*0.5+(unit-50)*0.75;
                                break;
                                case 1:
                                    total=50*0.5+50*0.75+(unit-100)*1.20;
                                    break;
                                case 1:
                                    total=unit*0.5;
                                    break;
                            }
                            final Total=total+total*0.2;
                            printf("Total Amount=%d\n",finaltotal);

                            return 0;
                        }

                        #include<stdio.h>
                        int main()
                        {
                            int n1,n2=-1;
                            printf("Enter the number\n");
                            scanf("%d",&n1);
                            switch(n1);
                        case 1:
                            if(n1<0)
                                n1=n1*n2;
                            printf("positive=%d\n",n1);
                            break;
                        case 2:
                            if(n2>0)
                                n1=n1*n2;
                            printf("negative=%d\n",n1);
                            break;
                            default
                            printf("Invalid number\n");
                            break;
                        }
                    }

                        #include<stdio.h>
                        int main()
                        {
                            double a,b,c discriminant,root1,root2,realpart,imaginary part;
                            printf("Enter the numbers\n");
                            scanf("%If%If%If",&a,&b,&c);
                            discriminant=b*b-4*a*c;
                        }
                        case 1:
                            if(discriminant>0)
                        {
                            printf("Real and distinct\n");
                        }
                        break;

                        case 2:
                            if(discriminant==0)
                            {
                                printf("Real and different root\n");
                            }
                            if(discriminant<0)
                            {
                                printf("Imaginary\n");
                            }
                            return 0;
                            }

