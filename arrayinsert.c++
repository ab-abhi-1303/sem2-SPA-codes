#include<bits/stdc++.h>
int main()
{
	int a[100],n,i,p,x;
	std::cout<<"enter size of array";
	std::cin>>n;
	std::cout<<"enter array";
	for(i=0;i<n;i++)
	{
		std::cin>>a[i];
	}
	std::cout<<"enter position and value";
	std::cin>>p>>x;
	for(i=n-1;i>p;i--)
	{
		a[i+1]=a[i];
	}
	a[p]=x;
	for(i=0;i<=n;i++)
	{
		std::cout<<a[i];
	}
	return 0;
}
