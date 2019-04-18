//CODE
#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
main()
{
    int BT[20],P[20],WT[20],TAT[20],PR[20],i,j,n,total=0,pos,temp,AvgWt,AvgTat;
    cout<<"Enter Total Number of Process:";
    cin>>n;
    cout<<"Enter Burst Time and Priority:";
    for(i=0;i<n;i++)
    {
        cout<<"\n"<<i+1<<endl;
        cout<<"Burst Time: ";
        cin>>BT[i];
        cout<<"Priority: ";
        cin>>PR[i];
        P[i]=i+1;          
    }
    for(i=0;i<n;i++)
    {
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(PR[j]<PR[pos])
                pos=j;
        }
 
        temp=PR[i];
        PR[i]=PR[pos];
        PR[pos]=temp;
 
        temp=BT[i];
        BT[i]=BT[pos];
        BT[pos]=temp;
 
        temp=P[i];
        P[i]=P[pos];
        P[pos]=temp;
    }
 
    WT[0]=0;

    for(i=1;i<n;i++)
    {
        WT[i]=0;
        for(j=0;j<i;j++)
            WT[i]+=BT[j];
 
        total+=WT[i];
    }
 
    AvgWt=total/n;     
    total=0;
 
    cout<<"\nProcess\t    Burst Time    \tWaiting Time\tTurnaround Time";
    for(i=0;i<n;i++)
    {
        TAT[i]=BT[i]+WT[i];     
        total+=TAT[i];
        cout<<"\n"<<P[i]<<"\t"<<BT[i]<<"\t"<<WT[i]<<"\t"<<TAT[i];
    }
 
    AvgTat=total/n;   
    cout<<"\n\nAverage Waiting Time="<<AvgWt;
    cout<<"\nAverage Turnaround Time="<<AvgTat;
}

//OUTPUT
Enter Total Number of Process:5
Enter Burst Time and Priority:
1
Burst Time: 3
Priority: 3

2
Burst Time: 6
Priority: 4

3
Burst Time: 1
Priority: 9

4
Burst Time: 2
Priority: 7

5
Burst Time: 4
Priority: 8

Process     Burst Time          Waiting Time    Turnaround Time
1       3       0       3
2       6       3       9
4       2       9       11
5       4       11      15
3       1       15      16

Average Waiting Time=7
Average Turnaround Time=10
--------------------------------
Process exited after 53.04 seconds with return value 0
Press any key to continue . . .
