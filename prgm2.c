#include<stdio.h>
void main()
{
char s[20],pat[20],rep[20],ans[30];
int i,j,k,l,flag;
printf("\n Enter string:");
scanf("%s",s);
printf("\n Enter pattern:");
scanf("%s",pat);
printf("\n Enter replacement:");
scanf("%s",rep);
for(i=0,k=0;s[i]!='\0';i++)
{
flag=1;
for(j=0;pat[j]!='\0';j++)
{
if(s[j+i]!=pat[j])
flag=0;
}
l=j;
if(flag==1)
{
for(j=0;rep[j]!='\0';j++,k++)
ans[k]=rep[j];

}
else
ans[k++]=s[i];
}
ans[k]='\0';
printf("%s\n",ans);
}
