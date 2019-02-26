package javaapplication50;

import java.util.Scanner;

public class JavaApplication50 {
public void round(int process[],int n,int bt[],int quantum)
    {
        int rembt[]=new int[n];
        int wt[]=new int[n];
        for(int i=0;i<n;i++) rembt[i]=bt[i];
        int t=0;
        while(true)
        {
            boolean done =true;
            for(int i=0;i<n;i++){
                if(rembt[i]>0)
                {
                    done=false;
                    if(rembt[i]>quantum)
                    {
                        t=t+quantum;
                        rembt[i]=rembt[i]-quantum;
                    }
                    else
                    {
                        t=t+rembt[i];
                        rembt[i]=0;
                        wt[i]=t-bt[i];
                    }
                }
            }
            if(done==true) break;
        }
        System.out.println("WAITING TIME:");
        for(int i=0;i<n;i++)
        {
            System.out.println(wt[i]);
            
        }
        
        System.out.println("TURNAROUND TIME:");
        for(int i=0;i<n;i++)
        {
            System.out.println(wt[i]+bt[i]);
        }
    }

    
    public static void main(String[] args) 
    {
       Scanner sc=new Scanner (System.in);
        System.out.println("Enter number of processes");
        int n=sc.nextInt();
        System.out.println("Enter quantum time");
        int quantum=sc.nextInt();
        int process[]=new int[n];
        int bt[]=new int[n];
        
         for(int i=0;i<n;i++)
         {
             process[i]=i+1;
             System.out.println("Enter the execution time of process"+process[i]);
             bt[i]=sc.nextInt();
         }
         JavaApplication50 ob=new JavaApplication50();
         ob.round(process, n, bt, quantum);
    }
}

//OUTPUT
Enter number of processes
5
Enter quantum time
3
Enter the execution time of process1
1
Enter the execution time of process2
8
Enter the execution time of process3
9
Enter the execution time of process4
5
Enter the execution time of process5
8
WAITING TIME:
0
18
20
16
23
TURNAROUND TIME:
1
26
29
21
31