#include<bits/stdc++.h>
int main()
{
	int a[100],i,n,t,sum=0;
	std::cout<<"enter no of testcases";
	std::cin>>t;
	while(t!=0)
	{
		std::cout<<"enter the size for this testcase";
		std::cin>>n;
		std::cout<<"enter the"<<n<<"elements";
		for(i=0;i<n;i++)
		{
			std::cin>>a[i];
			sum+=a[i];
		}
		std::cout<<"sum is"<<sum;
		sum=0;
		t--;
	}
	return 0;
}
