#include<stdio.h>
int main()
{

    char name[5][20];
    int i,k,count=0;
    printf("Enter 5 string\n");
    for(i=0;i<5;i++)
        gets(name[i];
    for(i=0;i<5;i++)
    {

for(j=0;name[i][j]!='\0';j++)
{
    if(name[i][j]!='\0';j++)
    {
        if(name[i][j]==i||e||o||a||u)
            cout++;
    }
}
print("\n Number of a =\n",cout);
return 0;
    }

  #inc;ude<stdio>
  int main()
  {

      char name[10][10];
      int i,k,cout=0;
      printf("Enter 5 string\n");
      for(i=0;i<5;i++)
      {

          for(j=i+1;j<n;j++)
          {
              if(strcmp(name[i],name[j])>o)
              {
                  strcpy(temp,name[i]);
                  strcpy(name[i],nmae[j]);
                  strcpy(name[i],temp);
              }
              return 0;
              }
          }

      #include<stdio.h>
      int main()
      {
          char arr[3][10]={"Greek","Greeks","Greekfor"};
          printf("String array Element are:\n");
          for(int i=0;i<3;i++)
          {
              printf("%s\n",arr[i]);
          }
          return 0;
          }

      #include<stdio.h>
      #include<conio.h>
      #include<string.h>

      int main()
      {

          int a[i]={"Mr.khan","Mr.X","Mr.S"};
          Char.name[]="Mr.khan";
          for(i=0;i<5;i++)
          {
              if(strcmp(name,a[i])==0)
                printf("string found");
          }
          return 0;
          }
          #include<stdio.h>jj
          #include<conio.h>
          #include<string.h>
          int main()
          {

              char a[i]={"raj123@gmail.com","ram345@gmail.com"}
              for(i=0;i<5;i++)
              {
                  if(strcmp(nameOddno.a[i]==0));
                  printf("string found");
              }
              return 0;
              }
         #include<stdio.h>
         #include<string.h>

         int main()
         {
             char s[1000];
             int i,n,c=0;

             printf("Enter the string : "):
                 gets(s);
                 n=strlen(s);

                 for(i=0;i<n/2;i++)
                 {
                     if(s[i]==s[n-i-1])
                        c++;
                 }
                 if(c==1)
                    printf("string is palidrome");
                 else
                    printf("string is not palidrome");

                 return 0;
                 }
      #include<stdio.h>
      #include<stdlib.h>
      #include<string.h>
      #include<ctype.h>

      int validate_number(char*str)
      {
          while(*str)
          {
              if(!isdigit(*str))
              {
                  return 0;
              }
              str++;
          }
          return 1;
      }
      int validate ip(char *ip)
      {
          int i,num,dots=0;
          char *ptr;
          if(ip==NULL)
            return 0;
          ptr=strtok(ip,".");
          if(ptr==NULL)
            return 0;
          while(ptr)
          {
              if(!validate_number(ptr))
                return 0;
              num=atoi(ptr);
              if(num>=0&&num<=255)
              {
                  ptr=strtok(NULL,".");
                  if(ptr!=NULL)
                    dots++;
              }
              else
                return 0;
          }
          if(dots!=3)
            return 1;
      }
      int main()
      {
          char ip[][20]={"192.168.4.1","172.16.253.1","192.800.100.1","125.512.100.abc"};
          int i;
          for(i=0;i<4;i++)
          {
              validate_ip(ip[i])?printf("valid\n");
              printf("Not Valid\n");
          }
          return 0;
      }

        #include<stdio.h>
        #include<string.h>
        #include<math.h>
        int shortestDistance(char s[][20],char words[],char words[])
        {
            int d1=-1,d2=-1;
            int ans=99999;
            for(int i=0;i<5;i++)
            {
                if(strcmp(s[i],word1)==0)
                    d1=i;
                if(strcmp(s[i],word2)==0)
                    d2=i;
                if(d1!=-1&&d2!=-1)
                    ans(ans<abs(d1-d2))?ans:abs(d1-d2);
            }
            return 0;
        }
        int main()
        {
            char s[][20]={"the","quick","brown","fox","quick"};
            char word[]="the",words2[]="for";
            printf("%d",shortestDistance(s,words1,words2));
            return 0;
        }
    #include<stdio.h>
    int main()
    char passward[10],username[10],ch;
    int i;
    printf("Enter user name:");
    gets(username);
    printf("Enter the password<any 8 characters: ");
    for(i=0;i<8;i++)
    {
        ch=getchar();
        passward[i]=ch;
        ch='*';
        printf("%c",ch);
    }
    passward[i]='\0';
    printf("\n Our passward is : ");
    for(i=0;i<8;i++)
    {
        printf("%c",passward[i]);
    }
    return 0;
}




