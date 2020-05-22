#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,n,sum=0,rem,l,k,m,count=0;
	printf("Enter the no of elements:");
	scanf("%d",&n);
	int a[n];
	l=n-1;
	m = n-1;
	printf("Enter n elements:");
	for(i = 0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j =0;j<n;j++)
	{
		a[j] = a[j] * pow(10,l);
		l--;
	}
	for(k = 0;k<n;k++)
	{
		sum = sum + a[k];
	}
	sum =sum+1;
	printf("%d\n",sum);
	int temp =sum;
	while(sum!='\0')
	{
		sum=sum/10;
		count++;	
	}

m=count;

	while(temp!='\0' && count>0)
	{
		rem = temp%10;
		temp = temp/10;
		a[count] = rem;
		count--;
	}
	printf("[");
	for(i =1;i<=m;i++)
	{
		if(i!=m)
		{
			printf("%d,",a[i]);
		}
		else
		{
			printf("%d",a[i]);
		}
	}
	printf("]");
    
}
