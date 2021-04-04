#include<bits/stdc++.h>
int main()
{
	int a[20],n,i,b[20],p,j;
	std::cout<<"enter size of array and the no of positions you want to shift clockwise in array";
	std::cin>>n>>p;
	std::cout<<"enter elements";
	for(i=0;i<n;i++)
	{
		std::cin>>a[i];
	}
		for(j=0;j<p;j++)
		{
		b[j]=a[j];
		}
	for(i=p;i<n;i++)
	{
		a[i-p]=a[i];
	}
	std::cout<<"Rotated array is"<<"\n";
	for(i=0;i<=p;i++)
	{
		std::cout<<a[i]<<"\n";
	}
	for(j=0;j<p;j++)
	{
		std::cout<<b[j]<<"\n";
	}
	return 0;
}
