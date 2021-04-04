#include<bits/stdc++.h>
void sort(int a[20],int n)
{
	int i,j,temp;
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
int main()
{
	int a[20],n,i,k;
	std::cout<<"enter sizeof array and K(kth smallest no)";
	std::cin>>n>>k;
	std::cout<<"enter the elements of array"<<"\n";
	for(i=0;i<n;i++)
	{
		std::cin>>a[i];
	}
	sort(a,n);
	std::cout<<"sorted array is"<<"\n";
	for(i=0;i<n;i++)
	{
		std::cout<<a[i]<<"\n";
	}
	std::cout<<k<<"th smallest no in array is"<<a[k-1];
	return 0;
}
