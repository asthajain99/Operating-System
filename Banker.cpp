CODE

#include<iostream>
using namespace std;
main()
{
	int n,r;
	cout<<"Enter number of process:";
	cin>>n;
	cout<<"Enter number of resources:";
	cin>>r;
	int max[n][r],alloc[n][r];
	cout<<"Enter value of max:";
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<r;j++)
		{
			cin>>max[i][j];
		}
	}
	cout<<"Enter value of allocation:";
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<r;j++)
		{
			cin>>alloc[i][j];
		}
	}
	int avail[]={3,2,1,1};
	int counter = 4,safe,exec;
	int running[n];
	
	while(counter!=0)
	{
		safe=0;
		for(int i=0;i<n;i++)
		{
			if(running[i])
			{
				exec=1;
				for(int j=0;j<r;j++)
				{
					if(max[i][j]-alloc[i][j]>avail[j])
					{
						exec=0;
						break;
					}
				}
				
				if(exec)
				{
					running[i]=0;counter--;safe=1;
					for(int j=0;j<r;j++)
					{
						avail[j]= avail[j]+alloc[i][j];
					}
					break;
				}
			}
		}	
	}
	if(safe==0)
	{
	    cout<<"Deadlock\n";
	}
	else
	cout<<"Safe Sequence";
}

OUTPUT
Enter number of process:
5
Enter number of resources:
3
Enter value of max:
7
5
3
3
2
2
9
0
2
2
2
2
4
3
3
Enter value of allocation:
0
1
0
2
0
0
3
0
2
2
1
1
0
0
2
Safe Sequence
