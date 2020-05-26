#include <stdio.h>
#include <stdlib.h>
int main(int Argc,char *Argv[])
{
int sum=0;
int iterator;
if(Argc<2)
{
printf("Expected sufficient param\n");
}
else
{
for(iterator=1;iterator<Argc;iterator++)
{
sum=sum+atoi(Argv[iterator]);
}
printf("sum of your entered munber %d",sum);
}
return 0;
}
