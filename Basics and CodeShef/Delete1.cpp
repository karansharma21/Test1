#include <iostream>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(0);
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
            if((a[0]==a[1])||(a[0]==a[2]))
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
        int b[2*n];
      cout<<n<<endl;
      int k=0;
      for(int i=0;i<(2*n);i++)
      {
          b[i]=a[k];
          k++;
          if(k==n)
          k=0;
      }
      int chk=0;
      int l=0;
      int i;
      for(i=1;i<n;i++)
      {
          chk=0;
          l=0;
          for(int j=i;j<(i+n);j++)
          {
              if(a[l]==b[j])
              {
                  chk=1;
                  break;
              }
              l++;
          }
          if(chk==0)
          {
              break;
          }
      }
      for(int j=i;j<(i+n);j++)
      cout<<b[j]<<" ";
        cout<<endl;
        }
    }
    return 0;
}
