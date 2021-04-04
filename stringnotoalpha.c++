#include<bits/stdc++.h>
int main()
{
	int ld,n,rev=0;
	std::cout<<"enter the no";
	std::cin>>n;
	while(n!=0)	{ld=n%10;
		rev=rev*10+ld;
		n=n/10;
		std::cout<<ld;
	}
	std::cout<<rev;
	while(rev!=0)
	{
		switch(rev%10)
		{
			case 1:{
				std::cout<<"One";
			}
			break;
			case 2:{
					std::cout<<"Two";	
				}
				break;
			case 3:{
					std::cout<<"three";
				}
				break;
				case 4:{
					std::cout<<"four";
				}
				break;
			case 5:{
					std::cout<<"five";
				}
				break;
			}
			rev=rev/10;
			std::cout<<"\n";
		}
		return 0;
}
