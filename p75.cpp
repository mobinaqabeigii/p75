#include <iostream>
using namespace std;
int main(){
int n,i,j,s=0,b;
 scanf("%d",&n);
for(i=2; i<=n; i++){
	 b=0;
	 for(j=1; j<=i; j++)
	  if(i%j==0)
	  b++;
	  if(b==2)
s=s+i;}
cout<<("%d",s);

	
	
	
}