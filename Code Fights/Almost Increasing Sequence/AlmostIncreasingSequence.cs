bool almostIncreasingSequence(int[] sequence)
{
 
    if (sequence.Length == 2)
        return true;
    
    int counter = 0;
    int counterTwo = 0;
    for (int i = 0; i < sequence.Length - 1; i++)
    {
        if (sequence[i] >= sequence[i+1])
           counter++;
        
        
        if(i != 0) 
        {
           if (sequence[i - 1] >= sequence[i + 1]) 
               counterTwo++;
        }
    }
    
    if (counter == 1 && counterTwo <= 1)
        return true;
    else 
        return false;
}
    

