#include <stdio.h>
int main ()


{
	int a[10], i, j, temp;
	printf("masukkan nilai acak: ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("nilai terurut: ");
	for(i=0;i<10;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}

