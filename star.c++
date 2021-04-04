#include<bits/stdc++.h>
int main()
{
	int n,i,j,s;
	std::cout<<"enter no of lines";
	std::cin>>n;
	s=n-1;
	for(i=1;i<=n/2+1;i++)
	{
		for(j=1;j<=s;j++)
		{
			std::cout<<" ";
		}
		for(j=1;j<=i;j++)
		{
			std::cout<<"*";
		}
		for(j=1;j<i;j++)
		{
		std::cout<<"*";
	    }
		std::cout<<"\n";
		s--;
	}
	s=0;
	for(i=n+1;i<=(2*n);i++)
	{
	  for(j=1;j<=s;j++)
	  {
	    std::cout<<" ";
	  }
	  for(j=i;j<=i;j++)
	  {
	  std::cout<<"*";
       }
       for(j=1;j<i;j++)
       {
       std::cout<<"*";
       }
       std::cout<<"\n";
       s++;
   } 
	return 0;
}
