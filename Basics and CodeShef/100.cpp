// CPP program to print one 100 times.
#include <iostream>
using namespace std;
int x=1;
void number(void)
{   
    lable_1: cout<<"1"<<endl;
    		 x++;
    lable_2: if(x<=100)
    		  goto lable_1;
    		  else 
    		  exit;
    
    
}

int main()
{
    number();
	return 0;
}

