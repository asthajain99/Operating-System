//CODE
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,h,i,j,sum=0,temp;
	int a[50],st[50],dist[50];
	cout<<"Enter number of requests:";
	cin>>n;
	cout<<"Enter position of head:";
	cin>>h;
	cout<<"Enter elements in queue:";
	for(i=0;i<n;i++) 
	cin>>a[i];
	 
	for(i=0;i<n;i++)
    dist[i]=abs(h-a[i]);

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
     	    if(dist[i]>dist[j])
		    {
     	 	    temp=dist[i];
     	 	    dist[i]=dist[j];
     	 	    dist[j]=temp;
     	 	
     	 	    temp=a[i];
     	 	    a[i]=a[j];
     	 	    a[j]=temp;
		    }
	}
	 
	for(i=1;i<n;i++)
	{
	 	sum+=abs(h-a[i]);
	 	h=a[i];
	}
	cout<<"Total seek time is:"<<sum;	
}

//OUTPUT
Enter number of requests:8
Enter position of head:50
Enter elements in queue:176 79 34 60 92 11 41 114
Total seek time is:314
--------------------------------
Process exited after 73.6 seconds with return value 0
Press any key to continue . . .
