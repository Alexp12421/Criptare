#include <stdio.h>
#include <string.h>
void Afisare(char c[10000])
{
    printf("Codul este: \n%s",c);
}
void Creep(char c[10000])
{
    int i,n=strlen(c);
    for(i=1;i<n;i++)
    {
        c[i-1]=c[i-1]+(2*c[i-1]+1);
        c[i]=c[i]-c[i-1];

    }

}
void DeCreep(char c[10000])
{
     int i,n=strlen(c);
     for(i=n-1;i>=1;i--)
     {
          c[i]=c[i]+c[i-1];
        c[i-1]=c[i-1]-(2*c[i-1]+1);

     }
}
