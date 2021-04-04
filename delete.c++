#include<bits/stdc++.h>
int main()
{
	int a[10],n,i,j,b[10];
	std::cout<<"enter size of array";
	std::cin>>n;
	for(i=0;i<n;i++)
	{std::cout<<"enter element";
	std::cin>>a[i];
	}
		for(i=0;i<n-1;i++)
	{j=0;
				if(a[i]!=a[i+1])
				{b[j++]=a[i];
			}
		}
		a[j++]=a[n-1];
		for(i=0;i<j;i++)
		{
			a[i]=b[i];
		}
		std::cout<<" after remove duplicate things is"<<"\n";
		for(i=0;i<j;i++)
		{std::cout<<a[i]<<"\t";
	}
		return 0;
}
