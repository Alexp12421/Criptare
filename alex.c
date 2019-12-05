#include <stdio.h>
#include <string.h>
void Afisare(char c[10000])
{
    printf("Codul este: \n%s",c);
}
void Creep(char c[10000])
{
    int i,n=strlen(c);
    for(i=0;i<n-1;i++)
    {
        if(i%3==0)
            c[i]=c[i]-c[n-1];
        else
            c[i]=c[i]+'a';

    }

}
void DeCreep(char c[10000])
{
     int i,n=strlen(c);
     for(i=n-2;i>=0;i--)
     {
         if(i%3==0)
            c[i]=c[i]+c[n-1];
         else
            c[i]=c[i]-'a';

     }
}
