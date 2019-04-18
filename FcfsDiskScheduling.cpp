//CODE
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,n,h,sum=0;
	int a[50],st[50];
	cout<<"Enter number of requests:";
	cin>>n;
	cout<<"Enter the position of head:";
	cin>>h;
	cout<<"Enter the elements in queue:";
	for(i=0;i<n;i++) 
	cin>>a[i];
	for(i=0;i<n;i++)
	{
	    cout<<a[i]<<"\t";
		st[i]=abs(h-a[i]);
		
		h=a[i];
		sum=sum+st[i];
	}
	cout<<"\nTotal seek time:"<<sum<<endl;
}

//OUTPUT
Enter number of requests:5
Enter the position of head:100
Enter the elements in queue:23 89 132 42 187
23      89      132     42      187     
Total seek time:421

--------------------------------
Process exited after 23.78 seconds with return value 0
Press any key to continue . . .
