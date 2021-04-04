#include<bits/stdc++.h>
int main() 
{
    int n,i,j,sum=0;
    std::cout<<"enter no";
    std::cin>>n;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
		for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                sum+=j;
            }
        }
    }
}
    std::cout<<"sum is"<<sum;
	return 0;
}
