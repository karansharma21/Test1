#include <iostream>
using namespace std;
int index[5];
int main()
{  
  int a[5],b[5],c[5],m,n,p;
  cout<<"\n You WILL BE left with 3 only  ";
  cout<<"\n Try your best to not left with 3";
  cout<<"\n Enter any five number from 1  to 9 contaning 3";
  for(int i=0;i<5;i++)
  {
      cin>>a[i];
  }
  for(int i=0;i<5;i++)
  {
      cout<<a[i]<<endl;
  }
  cout<<"\n choose any 3 number from the above list ";
  int required()
  {	
  
    for(int j=0;j<3;j++)
    {
        cin>>b[j];//input 3 numbers in b
        
        for(int i=0;i<5;i++)
        {
            if(a[i]==b[j]&&index[i]==0)
            {
                index[i]=1;break;
            }
        }
    }
    for(int j=0;j<5;j++)
    {
        if(index[j]==0)
        cout<<a[j]<<" ";
    }
    return a[j];
  }
  for(j=0;j<3;j++)
  {
      cout<<b[j]<<endl;
  }
  for(j=0;j<3;j++)
  {
      if(b[j]==3)
      {
        cout<<"\n Choose any two number from the above 3 number";
        for(k=0;k<2;k++)
        {
            cin>>c[k];
        }
        
        for(k=0;k<2;k++)
        {
            cout<<c[k]<<endl;
        }
        
        for(k=0;k<2;k++)
        {
          if(c[k]==3)
          cout<<"\n choose any one number ";
          cin>>m;          
        }
        if(m==3)
        {
            cout<<"\n You are choose what i say the number 3";
        }
        else
        {
            cout<<"\n you are left with the number 3";
        }
      }
      
      else
      { 
        cout<<"\n now you are left with only this two number ";
        required();
         
          
      }
      
      
  }


    return 0;
}}}
