#include <iostream>  
using namespace std;  
int main()  
{  
int n,r,sum=0,temp;    
cout<<"Enter the Number=  ";    
cin>>n;    
temp=n;    
while(n>0)    
{    
r=n%10;    
sum=sum+(r*r*r);    
n=n/10;    
}    
if(temp==sum)    
cout<<" It is an Armstrong Number."<<endl;    
else    
cout<<"It is not a Armstrong Number."<<endl;   
return 0;  
}  