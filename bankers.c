group-02
========
#include<stdio.h>
#include<conio.h>
int less(int a[5],int b[5],int m)
{
int j;
for(j=0;j<m;j++)
	if(a[j]>b[j])
		break;
if(j==m)
	return 1;
else
	return 0;
}
void display(int max[10][5],int alloc[10][5],int avail[5],int need[10][5],int n,int m)
{
int i,j;
printf("\navailable:");
for(i=0;i<m;i++)
	printf("%d\t",avail[i]);
printf("\n\nprocess maximum allocation need\n");
for(i=0;i<n;i++)
{
	printf("\n%d\t",i);
	for(j=0;j<m;j++)
		printf("%d ",max[i][j]);
	printf("\t");
	for(j=0;j<m;j++)
		printf("%d ",alloc[i][j]);
	printf("\t   ");
	for(j=0;j<m;j++)
		printf("%d ",need[i][j]);
}
}
int chk_status(int alloc[10][5],int avail[5],int need[10][5],int n,int m,int p[10])
{
int i,j,k=0,set=0,finish[10],work[5];
for(i=0;i<m;i++)
	work[i]=avail[i];
for(i=0;i<n;i++)
	finish[i]=0;
for(i=0;i!=k || set==0;i=(i+1)%n){
	set=1;
	if(finish[i]==0 && less(need[i],work,m))
	{
		for(j=0;j<m;j++)
			work[j]+=alloc[i][j];
		finish[i]=1;
		k=i;
		*p++=i;
	}
}
for(i=0;i<n;i++)
	if(finish[i]==0)
		break;
if(i==n)
	return 1;
else
	return 0;
}
int main()
{
char ch,ans;
int i,j,n,m,a,p[10],request[5],max[10][5],alloc[10][5],avail[5],need[10][5];
do{

printf("enter no. of processes:");
scanf("%d",&n);
printf("enter no. of resources:");
scanf("%d",&m);
printf("\nenter maximum requirement of each process:\n");
for(i=0;i<n;i++)
{
	printf("\nprocess %d:\n",i);
	for(j=0;j<m;j++)
	{
		printf("resource %d:",j);
		scanf("%d",&max[i][j]);
	}
}
printf("\nenter current allocation of each process:\n");
for(i=0;i<n;i++)
{
	printf("\nprocess %d:\n",i);
	for(j=0;j<m;j++)
	{
		printf("resource %d:",j);
		scanf("%d",&alloc[i][j]);
	}
}
printf("\nenter current availability of each resource:\n");
for(i=0;i<m;i++)
{
	printf("resource %d:",i);
	scanf("%d",&avail[i]);
}
for(i=0;i<n;i++)
	for(j=0;j<m;j++)
		need[i][j]=max[i][j]-alloc[i][j];
if(chk_status(alloc,avail,need,n,m,p))
{
printf("\n\nsafe state...safe sequence is:\n");
for(i=0;i<n;i++)
	printf("%d ",p[i]);
getch();
do{

printf("\n\nenter requesting process id:");
scanf("%d",&a);
printf("\nenter requirement:\n");
for(i=0;i<m;i++)
{
	printf("resource %d:",i);
	scanf("%d",&request[i]);
}
if(less(request,need[a],m))
{
	if(less(request,avail,m))
	{
		for(i=0;i<m;i++)
		{
			avail[i]-=request[i];
			alloc[a][i]+=request[i];
			need[a][i]-=request[i];
		}
		if(chk_status(alloc,avail,need,n,m,p))
		{
			printf("\n\nsafe state...request successful...safe sequence is:\n");
			for(i=0;i<n;i++)
				printf("%d ",p[i]);
			printf("\n\ncurrent status:\n\n");
			display(max,alloc,avail,need,n,m);
		}
		else
		{
			for(i=0;i<m;i++)
			{
				avail[i]+=request[i];
				alloc[a][i]-=request[i];
				need[a][i]+=request[i];
			}
			printf("\n\nunsafe state...request unsuccessful");

		}

	}
	else
		printf("\n\nerror:requirement more than availability");
}
else
	printf("\n\nerror:request more than prior information");
printf("\n\nmore request(y/n)?");
fflush(stdin);
scanf("%c",&ch);
}while(ch=='y');
}
else
	printf("\n\nunsafe state...\n");
printf("\nanother system(y/n)?");
fflush(stdin);
scanf("%c",&ans);
}while(ans=='y');
}
