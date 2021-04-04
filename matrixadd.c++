#include<bits/stdc++.h>
void accept(int x[10][10],int m,int n)
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			std::cin>>x[i][j];
		}
	}
}
void display(int x[10][10],int m,int n)
{
		int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			std::cout<<x[i][j]<<"\t";
		}
	}
}
void add(int a[10][10],int b[10][10],int c[10][10],int m,int n)
{
		int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
}
int main()
{
	int a[10][10],b[10][10],c[10][10],m1,n1,m2,n2;
	std::cout<<"enter no of r and c of mat1";
	std::cin>>m1>>n1;
	std::cout<<"enter r and c of mat2";
	std::cin>>m2>>n2;
	if(m1==m2 && n1==n2)
	{
		accept(a,m1,n1);
		accept(b,m1,n1);
		display(a,m1,n1);
		display(b,m1,n1);
		add(a,b,c,m1,n1);
		display(c,m1,n1);
	}
	else
	printf("add not possible");
	return 0;
}
