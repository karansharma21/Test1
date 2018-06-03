#include <iostream>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        if(n==1)
        {
            cout<<0<<endl;
            cout<<a[0]<<endl;
            continue;
        }
        else if(n==2)
        {
            if(a[0]==a[1])
            {
                cout<<0<<endl;
                cout<<a[0]<<" "<<a[1]<<endl;
            }
            else
            {
                cout<<2<<endl;
            cout<<a[1]<<" "<<a[0]<<endl;
            }
            continue;
        }
        else if(n==3)
        {
        	if((a[0]==a[1]==a[2]))
        	{
        		cout<<0<<endl;
        		cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
			}
			
            else if((a[0]==a[1])||(a[0]==a[2]||a[1]==a[2]))
            {
                cout<<2<<endl;
                cout<<a[1]<<" "<<a[2]<<" "<<a[0]<<endl;
            }
            
            else
            {
                cout<<3<<endl;
                int k=1;
                for(int i=0;i<n;i++)
                {
                  cout<<a[k]<<" ";
                  k++;
                  if(k==n)
                  k=0;
                  }
                  cout<<endl;
            }
            continue;
        }
        else
        {
        int b[n]; 
        int max=n;
        int j=1;b[0]=a[n-1];
		for(int i=0;i<n-1;i++,j++)
        {
                      b[j]=a[i];   
	    }
		int temp;
		for(int i=0;i<n;i++)
        {
           if(a[i]==b[i])
           {
                             j=i+2;
                             if(j>=n)j-=n;
                          temp=b[j];
                          b[j]=b[i];
                          b[i]=temp;//System.out.println(i+" "+j);
                         }
                     }
                 }
             }
        cout<<max;
    	for(int k=0;k<N;k++)
        	cout<<b[k];
    return 0;
}
