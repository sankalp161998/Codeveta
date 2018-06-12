#include<stdio.h>
#include<string.h>
int main()
{
	int n,z=0;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	int b[n]={0};
	for(int i=0;i<n;i++)
	{	int j=0;
		for(j=0;j<n;j++)
		{
			if(a[i]==b[j])
			break;
		}
		if(j==n)
		{
			for(int k=i+1;k<n;k++)
			if(a[i]==a[k])
			{
				b[z]=a[i];
				z++;
				break;
			}
		}
	}
	for(int i=0;i<z;i++)
	{
		for(int j=0;j<z-i-1;j++)
		{
			if(b[j]>b[j+1])
			{
				int t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	for(int i=0;i<z;i++)
	printf("%d ",b[i]);
}
