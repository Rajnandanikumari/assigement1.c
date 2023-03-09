#include<stdio.h>
int main()
{
    string(length);
}

int sring(length)
{
    int i,n,length=0;
    char[i]="prateek";
    for(i=0;a[i]!='\0',i++)
    {
        length++;
    }
printf("length os string=%d\n",length);
 return 0;
}

#include<stdio.h>
int main()
{
    char A[10];
    printf("\n Enter a string to be reversed:");
    scanf("%s",str);

    printf("\n After the reverse of string:%s",strrev(str));
    return 0;
}

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char a[10],b[10];
    int n;
    printf("\n Enter the first string:");
    scanf("%s",a);
    printf("\n Enter the second string:");
    scanf("%s",b);
    n=strlen(a);
    printf("\n length of the first length=%d\n");
    iff(strcmp(a,b)==0)
    printf("\n Both string are equals");
    else
        printf("\n string are not equals");
}
    return 0;
}

#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char[]="krishna";
    int i=0;
    while(a[i]!='\0')
    {
        if((a[i]>='a')&&(a[i]<=z))
            a[i]=a[i]-'a';
        printf("\n string is %d\n",a);
        return 0;
    }

    #include<stdio.h>
    #include<string.h>
    #include<conio.h>
    int main()
    {
        char a[10]=UTTAM;
        int i=0;
        while(a[i]!='\0')
        {
            if((a[i]='A')&&(a[i]='Z'))

                a[i]=a[i]+a;
            printf("\n string is %d\n",a);
        }
        return 0;
        }
    #include<stdio.h>
    #include<conio.h>
    #include<ctype.h>
    {
        int main()
        char a[20]=uattam123;
        if(isolnum(a[20]))
            printf("The character is alphanumeric\n");
        else
            printf("The character is not alphanumeric\n);
        return 0;
    }

    #include<stdio.h>
    #include<string.h>
    int main()
    {
        char s1[10];
        int i,len,flag=0;

        printf("Enter a string:\n");
        scanf("%s",s1);

        len=strlen(str1)

        for(i=0;i<len;i++)

            if(str[i]!=str1[len-i-1])
        {
            flag=1;
            break;
        }
    }
    if(flag)
    {
        printf("%s is not a palidrome string",str1);
    }
    else
    {
        printf("%s is a palidrome",str1);
    }
    return 0;
    }

    #include<stdio.h>
    int main()
    {
        char a[]="My name is prateek jain";
        int count=0,i;
        for(i=0;a[i]!='\0';i++)
        {
            if(a[i]='')
                count++;
        }
          printf("Number of words=%d\n");
     }

     #include<stdio.h>

     void reverse(char*begin char*end)
     {
         char temp;
         while(begin<end)
         {
             temp=*begin;
             *begin++=*end;
             *end--=temp;
         }
     }
     void reversewords(char*s)
     {
         char*word_begin=s;
         char*temp=s;
         while(*temp)
         {
             temp++;
             if(*temp=='\0')
             {
                 reverse(word_begin,temp-1);
             }
             else if
             (*temp==' ')
             {
                 reverse(word_begin,temp-1);
                 word_begin=temp+1;
             }
         }
         reverse(s,temp-1);
     }
     int main()
     {
         char s[]="i like this program very much";
         char *temp=s;
         reversewords(s);
         printf("%s",s);
         return 0;
     }

     #include<stdio.h>
     #include<stdio.h>
     int main()
     {
         char a[i]="shyamramhan";
         int hash[]={a},i;
         for(i=0;i<20;i++)
         {
             hash[a[i]++;
         }
         for(i=0;i<20;i++)
         {
             if(hash[i]==2)
                printf("%d",i);
         }
         return 0;
     }











































