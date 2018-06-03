#include <stdio.h>

int n,i,j,x;
int T;
int N[1000];
int sum[1000];
int main()
{
    

    scanf("%d",&T);

	if(T>=1 && T<=100)
	{
	for(j=0;j<T;j++)
	{
		x=j+1;
		printf("%d",x);
		scanf("%d",&n);
		
    	for(i=0;i<n;i++)

		{
			scanf("%d",&N[i]);
		    sum[j]=sum[j]+N[i];	
		}
		printf("%d",sum[j]);
		
    }
	}
    return 0;
}
