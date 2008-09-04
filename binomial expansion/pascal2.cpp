#include<stdio.h>

int main()
{

int line,c,n,x;
void pasc(int);

printf("\n\nEnter the no. of rows: ");
scanf("%d",&line);

printf("\n\n\n");
printf("\nPascal's triangle :\n");

for(x=line-1;x>=0;x--)
            printf("   ");
printf("  1\n\n");

for(n=2;n<=line;n++)
{
      for(c=line-n;c>=1;c--)
            printf("   ");
 pasc(n);
 printf("\n");
}


}


void pasc(int n)
{
      int r;
 long fact(int);
            for(r=0;r<=n;r++)
                  printf("%3ld   ",fact(n)/(fact(n-r)*fact(r)));
}
 
long fact(int v)
{
  if(v==1||v==0)
        return(1);
  else
        return(v*fact(v-1));
}