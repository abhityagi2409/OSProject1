#include<stdio.h>
int main()
{
	int arrival[4]={0,2,4,13};
	int burst[4]={18,23,13,10};
	int quantum=3;
	int i,j;
	int arrival1[4],burst1[4],burst2[4],loc[4],waiting[4];
	for(i=0;i<4;i++)
	arrival1[i]=arrival[i];
	for(i=0;i<4;i++)
	burst1[i]=burst[i];
	
	
	
	printf("process\t      arrival\t    burst time\n");
	for(i=0;i<4;i++)
	printf("%d\t\t%d\t\t%d\t\t\n",i+1,arrival[i],burst[i]);
	
	
	for(i=0;i<4;i++)
	{
		burst1[i]=burst1[i]-quantum;
		if(burst1[i]<1)
		burst1[i]=-1;
		waiting[i]=3*i;
	}
	
	for(i=0;i<4;i++)
	printf("%d\t",burst1[i]);
	printf("\n");

	quantum=6;
	
	for(i=0;i<4;i++)
	{
		burst1[i]=burst1[i]-quantum;
		if(burst1[i]<1)
		burst1[i]=-1;
		waiting[i]+=6*i;
	}
	
	
	for(i=0;i<4;i++)
	waiting[i]=waiting[i]-arrival[i];
	
	for(i=0;i<4;i++)
	printf("%d\t",burst1[i]);
	printf("\n");

}
