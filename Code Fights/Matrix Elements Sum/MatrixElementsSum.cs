int matrixElementsSum(int[][] matrix) {
     int i, j;
     int count = 0;
     for (j = 0; j < matrix[0].Length; j++)
     {
    	  for (i = 0; i < matrix.Length; i++)
          {
    	     if (matrix[i][j] == 0) 
              break;
         
    	        count += matrix[i][j];
          }
     }
    	    return count;
}
    	
    	
    	
