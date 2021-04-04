#include<bits/stdc++.h>
int bin(int n)
{
	if(n==0)
	{
		return 0;
	}
	else
	{
		return(n%2+10*bin(n/2));
	}
}
int main()
{
	int a[10],n,sum1=0,sum2=0,i,j,sum=0;
	std::cout<<"enter size of array";
	std::cin>>n;
	std::cout<<"enter the elements";
	for(i=1;i<=n;i++)
	{
		std::cin>>a[i];
	}
	for(i=1;i<=n;i++)
	{
		sum1+=(bin(a[i])||bin(a[i+1]));
		for(j=i+2;j<=n;j++)
		{
			sum2+=(bin(a[i])||bin(a[j]));
	    }
	}
	sum=2*(sum1+sum2);
	std::cout<<"sum is"<<sum;
	return 0;
}

