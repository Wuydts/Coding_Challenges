bool almostIncreasingSequence(arr_integer sequence)
{
    int n = 0, i = 0;
    
    while(i < sequence.size-1) {
        if(sequence.arr[i] < sequence.arr[i+1])
            i++;
        else
        {
            n++;
            if( i > 0 && i+2 < sequence.size && sequence.arr[i+1] <= sequence.arr[i-1] && sequence.arr[i+2] <= sequence.arr[i]) 
                n++;
            else 
                i++;
            
            if (n > 1)
                return false;
        }
    }
    return true;
}

