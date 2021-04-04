#include<bits/stdc++.h>
int fact(int);
int main()
{
	int n,a,b,i,x,f2,z=1;
	float sum=0.0;
	std::cout<<"enter the no of terms and value of variable";
	std::cin>>n>>x;
	b=1;
    a=x;
	for(i=1;i<=n;i++)
	{
		f2=fact(b);
		sum=sum+(float)a/f2*z;
		b=b+2;
		a*=(x*x);
		z=-z;
	}
	std::cout<<"Value="<<sum;
	return 0;
}
int fact(int b)
{
	int f1;
	f1=1;
	for(int i=1;i<=b;i++)
	{
		f1*=i;
	}
	return f1;
}
