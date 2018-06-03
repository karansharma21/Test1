#include<iostream>

using namespace std;

int main(){
    int m,n;
    //enter the rows and columns
    m = 4;
    n= 4;
    int a[4][4] = {
    {1, 2, 3, 4},
    
    {1, 2, 23, 14},
    
    {41, 32, 23, 4},

    {1, 12, 3, 4}
    
    };
    
    int ans = 0;
    for(int i = 0;i<m;i++){

         //Check for descending 
 	     if(a[i][0]-a[i][1]>0){
 	     	int check = 1;
     		for(int k = 2;k<n;k++){
             	if(a[i][k-1]-a[i][k]<0)
             	check = 0;
             }
             if(check)
             ++ans;
     	}
         //Check for ascending		
        else if(a[i][0]-a[i][1]<0){
              int check = 1;
     		for(int k = 2;k<n;k++){
             	if(a[i][k-1]-a[i][k]>0)
             	check = 0;
             }
             if(check)
             ++ans;
        }			
    }
    
    cout<<ans<<endl;
    
    
}
