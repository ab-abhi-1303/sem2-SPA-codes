#include<bits/stdc++.h>
int main()
{
     int i;
  for(i=1;i<=6;++i)
     switch(i)
     {
     case 1 : printf(" One "); break;
     case 2 : printf(" Two ");
     case 3 : printf(" Three "); break;
     case 4 :
     case 5 : printf(" Four or Five "); break;
     default : printf(" < 1  or  > 5 ");
     }     printf("\nExit");

    return 0;
}
