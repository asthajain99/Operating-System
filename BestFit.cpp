//CODE
#include<bits/stdc++.h>
using namespace std;
#define max 10
class BestFit
{
	public:
		int n,a[max],mem[5]={100,500,200,300,600},index[5]={1,2,3,4,5},temp;
		void getdata()
		{
			cout<<"Enter number of processes:";
			cin>>n;
			cout<<"Enter size of processes:"<<endl;
			for(int i=0;i<n;i++)
			{
				cout<<"Process "<<i+1<<": ";
				cin>>a[i];
			}
		}
		void calculation()
		{
			for(int i=0;i<=3;i++)
			{
				for(int j=0;j<=3-i;j++)
				{
					if(mem[j]>mem[j+1])
					{
						temp=mem[j];
						mem[j]=mem[j+1];
						mem[j+1]=temp;
					
						temp=index[j];
						index[j]=index[j+1];
						index[j+1]=temp;
					}
				}
			}
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<5;j++)
				{	
					if((a[i]<=mem[j]) && (index[j]!=-1))
					{
						cout<<"Index of process in memory for process "<<i+1<<":"<<index[j]<<endl;
						index[j]=-1;
						break;	
					}
					if((j==4) && (a[i]>mem[j]))	
					cout<<"No memory is allocated to process "<<i+1<<endl;	
				}	
			}
		}
};
int main()
{
	BestFit obj;
	obj.getdata();
	cout<<"Memory slots :"<<endl;
	for(int i=0;i<5;i++)
	cout<<obj.mem[i]<<",";
	cout<<endl;
	obj.calculation();
}

//OUTPUT
Enter number of processes:4
Enter size of processes:
Process 1: 212
Process 2: 417
Process 3: 112
Process 4: 426
Memory slots :
100,500,200,300,600,
Index of process in memory for process 1:4
Index of process in memory for process 2:2
Index of process in memory for process 3:3
Index of process in memory for process 4:5

--------------------------------
Process exited after 33.82 seconds with return value 0
Press any key to continue . . .
