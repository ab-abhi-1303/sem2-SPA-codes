#include<bits/stdc++.h>
int main()
{
	int a[10],count=0,n,i,j,t;
	std::cout<<"enter size of array and testcases";
	std::cin>>n>>t;
	std::cout<<"enter elements";
	for(i=0;i<n;i++)
	{
		std::cin>>a[i];
	}
	while(t!=0)
	{
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if((i*a[i])>(j*a[j]))
			{count++;
					}		
		}
	}
	t--;
	}
	std::cout<<"no ofpairs are"<<count;
	return 0;
}
