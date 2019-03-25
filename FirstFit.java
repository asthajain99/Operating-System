class FirstFit
{
   public static void main(String args[])
   {
        int processSize[]={85,417,112,426};
        int memorySize[]={100,500,200,300,600};
        int j;
	for(int i=0;i<=3;i++)
	{
		for(j=0;j<=4;j++)
		{
			if(processSize[i]<=memorySize[j])
			{
				System.out.println("PROCESS "+i+": BLOCK "+j);
				memorySize[j]-=processSize[i];
				break;
			}
		}
		if(j==5)
		System.out.println("PROCESS "+i+": NOT ALLOCATED.");
	}
   }
}

OUTPUT
PROCESS 0: BLOCK 0
PROCESS 1: BLOCK 1
PROCESS 2: BLOCK 2
PROCESS 3: BLOCK 4