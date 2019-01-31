package javaapplication24;
import java.util.Scanner;
import java.util.Arrays;

public class JavaApplication24 {
    
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int[] at=new int[4];
         int[] bt=new int[4];
          int[] ct=new int[4];
            int[] tat=new int[4];
              int[] wt=new int[4];
              float s=0;
        System.out.println("Enter arrival time:");
        for(int i=0;i<=3;i++)
        {
           at[i]=sc.nextInt();
        }
        Arrays.sort(at);
         System.out.println("Enter burst time:");
        for(int i=0;i<=3;i++)
        {
           bt[i]=sc.nextInt();
        }
        ct[0]=bt[0]-at[0];
        for(int i=1;i<=3;i++)
        {
        if(at[i]<=ct[i-1])
        ct[i]=ct[i-1]+bt[i];
        else
            ct[i]=at[i]+bt[i];
        }
         System.out.println("Completion time is:");
        for(int i=0;i<=3;i++)
        {
           System.out.println(ct[i]);
        }
         
        for(int i=0;i<=3;i++)
        {
         tat[i]=ct[i]-at[i]; 
        }
       
        for(int i=0;i<=3;i++)
        {
         wt[i]=tat[i]-bt[i]; 
        }
         System.out.println("Turn around time:");
        for(int i=0;i<=3;i++)
        {
           System.out.println(tat[i]);
        }
          System.out.println("Waiting Time:");
        for(int i=0;i<=3;i++)
        {
           System.out.println(wt[i]);
        }
          System.out.println("Average waiting time:");
          
       for(int i=0;i<=3;i++)
        {
           s=s+wt[i];
        }
      System.out.println(s/4);
        System.out.println("Average turn around time:");
          s=0;
       for(int i=0;i<=3;i++)
        {
           s=s+tat[i];
        }
      System.out.println(s/4);    
    }   
}

//OUTPUT
run:
Enter arrival time:
0
1
3
5
Enter burst time:
5
4
7
8
Completion time is:
5
9
16
24
Turn around time:
5
8
13
19
Waiting Time:
0
4
6
11
Average waiting time:
5.25
Average turn around time:
11.25
BUILD SUCCESSFUL (total time: 35 seconds)

