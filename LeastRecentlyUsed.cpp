//CODE
#include<bits/stdc++.h> 
using namespace std;
#define max 30 
class LRU
{
	public:
		void getdata()
		{
		    int np,nf,page[max],count=0;
			cout<<"Enter number of page frames:";
		    cin>>nf;
		    cout<<"Enter number of Elements in Reference String:";
		    cin>>np;
			cout<<"Enter number of strings:";
		    for(int i=0;i<np;i++)
		    cin>>page[i];
		    
		    int frame[nf],frame_count[nf];
		    for(int i=0;i<nf;i++)
		    {
		    	frame[i]=-1;
		    	frame_count[i]=0;
			}
			int i=0;
			while(i<np)
			{
				 int j=0,flag=0;
                 while(j<nf)
                 {
				    if(page[i]==frame[j])
				   {    
                      flag=1;
                      frame_count[j]=i+1;
			       }
			        j++;
			     }
			     j=0;    
            if(flag==0)
            {
             int min=0,k=0;
              while(k<nf-1)
                {
                  if(frame_count[min]>frame_count[k+1]) 
                    min=k+1;
                  k++;
                }
               frame[min]=page[i]; 
               frame_count[min]=i+1;    
               count++;           
            }
            i++; 
        }
        cout<<"Total number of page fault are: "<<count<<endl;
        int hit_count=np-count;
        cout<<"Total number of page hits are: "<<hit_count;
	}    
};
int main()
{
	LRU obj;
	obj.getdata();
}  

//OUTPUT
Enter number of page frames:4
Enter number of Elements in Reference String:13
Enter number of strings:7 0 1 2 0 3 0 4 2 3 0 3 2
Total number of page fault are: 6
Total number of page hits are: 7
--------------------------------
Process exited after 40.12 seconds with return value 0
Press any key to continue . . .
