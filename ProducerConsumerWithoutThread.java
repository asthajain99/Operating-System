CODE

import java.util.Scanner;

class ProducerConsumer
{      
int mutex=1;int E=10;int F=0;int c=0;
	public static void main(String...args)
	{
	ProducerConsumer pc=new ProducerConsumer();
	Scanner sc=new Scanner(System.in);
	while(true)
	{
	System.out.println("Press 1 for producer,2 for consumer,3 to exit");
	int i=sc.nextInt();
	switch(i)
	{
	case 1:
	       if(pc.mutex==1 &&  pc.E!=0)
	       pc.producer();
	       else
	       System.out.println("Producer is waiting");
	       break;
	
               case 2:
	              if(pc.mutex==1 && pc.F!=0)
	              pc.consumer();
	              else	
	              System.out.println("Consumer is waiting");
	              break;
	
	              case 3:
		             System.exit(0);
	                     break;

	
	}
	} 
	}
	
	public void producer()
	{
	mutex=wait(mutex);
	F=signal(F);
	E=wait(E);
	c++;
	System.out.println("Producer is producing at "+c);
	mutex=signal(mutex);	
	}
	
	public void consumer()	
	{
	mutex=wait(mutex);
	F=wait(F);
	E=signal(E);
	c--;
	System.out.println("Consumer is consuming at "+c);
	mutex=signal(mutex);	
	}
	
	public int wait(int s)	
	{
	return	--s;	
	}
	
	public int signal(int s)	
	{
	return ++s;
	}
}

OUTPUT
C:\Users\Astha Jain\Desktop>java ProducerConsumer
Press 1 for producer,2 for consumer,3 to exit
1
Producer is producing at 1
Press 1 for producer,2 for consumer,3 to exit
2
Consumer is consuming at 0
Press 1 for producer,2 for consumer,3 to exit
3