#include<bits/stdc++.h>
int main()
{
	int a[50],b[50],s,i,n,t;
	std::cout<<"enter no of testcases";
	std::cin>>t;
	while(t!=0)
	{
		std::cout<<"enter the size of array for this testcase";
		std::cin>>n;
		std::cout<<"enter elememts";
		for(i=1;i<=n;i++)
		{
			std::cin>>a[i];
		}
		for(i=1;i<=n;i++)
		{
			s=a[i];
			b[s]=i;
	    }
	    for(s=1;s<=n;s++)
	    {
	    	std::cout<<b[s];
		}
		t--;
	}	
return 0;
}
