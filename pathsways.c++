#include<bits/stdc++.h>
int paths(int x,int y)
{
	if(x==0 && y==0)
	{
		return 1;
	}
	else
	{return (paths(x-1,y),paths(x,y-1));
    }
}
int main()
{
	int x,y;
	std::cin>>x>>y;
	std::cout<<"pathways="<<paths(x,y);
	return 0;
}



