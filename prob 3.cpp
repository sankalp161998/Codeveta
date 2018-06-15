#include<stdio.h>
int main() {
	int n;
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++)
scanf("%d",&a[i]);
int b[n],z=0;
for(int i=0;i<n;i++)
{
	if(i==a[i])
	{
		b[z]=i;
		z++;
	}
}
for(int i=0;i<z;i++)
{
	for(int j=0;j<z-1-i;j++)
	{
		if(b[j]>b[j+1])
		{
			int t=b[j];
			b[j]=b[j+1];
			b[j+1]=t;
		}
	}
}
if(z==0)
printf("%d",-1);
else
for(int i=0;i<z;i++)
printf("%d ",b[i]);
}

