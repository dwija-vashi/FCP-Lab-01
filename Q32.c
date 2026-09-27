#include<crtdefs.h>
int main()
{
    int a[100], n, i, max, smax;
    printf("Enter how many numbers: ");
    scanf("%d", &n);
    printf("Enter the %d numbers:\n", n);
    
    for(i=0;i<n;i++)
    {
    	scanf("%d", &a[i]);
	}
	
	max=a[0];
	smax=a[1];
	
	if(smax>max)
	{
		int temp=max;
		max=smax;
		smax=temp;
	}
	
	for(i=2;i<n;i++)
	{
		if(a[i]>max)
		{
			smax=max;
			max=a[i];
		}
		else if(a[i]>smax)
		{
			smax=a[i];
		}
	}
	printf("Maximum=%d\n", max);
	printf("Second maximum=%d", smax);
	
	return 0;
}
