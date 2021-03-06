import java.util.concurrent.Semaphore;

public class ReaderWriter
{
    static int readcount=0;
    static Semaphore s=new Semaphore(1);
    static Semaphore wrt=new Semaphore(1);
    static class Reader implements Runnable
    {
        public void run()
        {
          try{
              s.acquire();
              readcount ++;
              if(readcount==1)
              wrt.acquire();
              s.release();
                System.out.println(Thread.currentThread().getName()+"READING.");
                Thread.sleep(100);
                s.acquire();
                readcount--;
                if(readcount==0)
                wrt.release();
                s.release();
            } 
            catch(Exception ex)
          {
              System.out.println("EXCEPTION.");
          }
        }
    }
    
    static class Writer implements Runnable
    {
        public void run()
        {
           try{
               wrt.acquire();
               System.out.println(Thread.currentThread().getName()+"WRITING.");
               Thread.sleep(100);
                wrt.release();
              }
              catch(Exception e)
              {
                  System.out.println("EXCEPTION.");
              }
        }
    }
    
	public static void main(String[] args) {
		Reader r=new Reader();
		Writer w=new Writer();
		Thread t1=new Thread(r);
		Thread t2=new Thread(r);
		Thread t3=new Thread(r);
		Thread t4=new Thread(w);
		Thread t5=new Thread(w);
		t1.start();
	                 t2.start();
		t3.start();
		t4.start();
		t5.start();
	}
}

OUTPUT
Thread-0READING.
Thread-1READING.
Thread-2READING.
Thread-3WRITING.
Thread-4WRITING.