#include<bits/stdc++.h>
int main()
{
	int a[10][10],n,i,j,temp;
	std::cout<<"enter rows and columns of square matrix";
	std::cin>>n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			std::cout<<"enter element"<<"\t";
			std::cin>>a[i][j];
		}
		std::cout<<"\n";
	}
	for(i=0;i<n/2;i++)
	{
		for(j=0;j<(n-i-1);j++)
		{
			temp=a[i][j];
			a[i][j]=a[n-j-1][i];
			a[n-j-1][i]=a[n-i-1][n-j-1];
			a[n-i-1][n-j-1]=a[j][n-i-1];
		    a[j][n-i-1]=temp;
		}
	}
	std::cout<<"90 degree rotated image is"<<"\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			std::cout<<a[i][j]<<"\t";
		}
		std::cout<<"\n";
	}
	return 0;
}
			
