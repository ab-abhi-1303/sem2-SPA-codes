#include<bits/stdc++.h>
int fact(int);
int main()
{int f2,b;
std::cin>>b;
f2=fact(b);
std::cout<<f2;
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
