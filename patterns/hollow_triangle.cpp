#include<iostream>
using namespace std;
int main()
{
	int n ;
	cin>> n;
    int i, j;
    for (i = 1; i <= n; i++)
    {
       for(int j=1; j<=n; j++)
       {
       		if(j == 1 || i == j || i == n)
       		{
       			cout<<"*";
			}
			else 
			{
				cout<<" ";
			}
	   }
	    cout<<"\n";
    }
    return 0;
}
