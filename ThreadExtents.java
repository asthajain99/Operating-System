CODE
class Demo extends Thread 
{ 
    public void run() 
    { 
        try
        { 
          System.out.println ("Thread " +Thread.currentThread().getId()+" is running"); 
  	} 
        catch (Exception ex) 
        { 
            System.out.println ("Exception is caught"); 
        } 
    } 
} 
   
public class Multithread 
{ 
    public static void main(String[] args) 
    { 
        for (int i=0; i<8; i++) 
        { 
            Demo ob = new Demo(); 
            ob.start(); 
        } 
    } 
} 

OUTPUT
Thread 21 is running
Thread 22 is running
Thread 23 is running
Thread 24 is running
Thread 26 is running
Thread 25 is running
Thread 27 is running
Thread 28 is running