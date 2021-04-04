#include<bits/stdc++.h>
int main()
{
	int i,j,n,count=0,a[10],b[10];
	std::cout<<"enter size of array";
	std::cin>>n;
	std::cout<<"enter elements";
	for(i=0;i<n;i++)
	{
		std::cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<count;j++)
		{
			if(a[i]==a[j])
				break;
		}
			if(j==count)
			{
			    b[count]=a[i];
			    count++;
			}
	}
	std::cout<<"array after deleting duplicate elements is:";
	for(i=0;i<count;i++)
	{
		std::cout<<b[i];
	}
	return 0;	
}
