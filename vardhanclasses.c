//student database

#include<stdio.h>
#include<stdlib.h>

struct stud
{
  int roll;
   char name[20],spe[10];
};

void display(struct stud[10],int m);
int search(struct stud a[10],int m,int k);

void main()
{
int i,n,ch,r,d,spe;
printf("enter the number of students:\n");
scanf("%d",&n);
struct stud a[n];

for(i=0;i<n;i++)
{
printf("\n\nenter roll no.\n");
scanf("%d",&a[i].roll);
printf("enter name\n");
scanf("%s",a[i].name);
printf("enter specialization\n");
scanf("%s",a[i].spe);
}
while(1)
{
printf("\n\nenter your choice: 1.display  2.search  3.inert  4.delete  5.exit");
scanf("%d",&ch);
switch(ch)
{
case 1:
display(a,n);
break;
           case 2:
           printf("enter the roll no to search");
           scanf("%d",&r);
           d=search(a, n, r);
           if(d!=-1)
            {
               printf("%d\t%s\t%s\t",a[d].roll,a[d].name,a[d].spe);
            }
           else
            {
               printf("not present");
            }
break;
case 3:
printf("enter the roll no. you want to insert");
scanf("%d",&a[n].roll);
printf("enter the name");
scanf("%s",a[n].name);
printf("enter specilliazation");
scanf("%s",a[n].spe);
n++;
display(a,n);
break;
case 4:
printf("enter the roll no you want to delete");
scanf("%d",&r);
d=search(a, n, r);
if(d!=-1)
 {
for(i=d;i<n;i++)
 {
a[i]=a[i+1];
   }
n--;
display(a,n);
 }
else
{
printf("number not present");
 }
break;
case 5:
exit(0);
break;

}
}
}

void display(struct stud a[10],int m)
{
printf("\nroll no\tname\tspecialization");
for(int j=0;j<m;j++)
{
printf("\n%d\t%s\t%s",a[j].roll,a[j].name,a[j].spe);
}
}

int search(struct stud a[10],int m,int k)
{
for(int x=0;x<m;x++)
 {
if(a[x].roll==k)
 {
return(x);
 }
 }
return(-1);
}

