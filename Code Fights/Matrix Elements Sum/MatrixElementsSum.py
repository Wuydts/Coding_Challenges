def matrixElementsSum(matrix):
    m = list(zip(*matrix))
    sum = 0
    
    for l in m:
        for n in l:
            if n == 0:
                break
            else:
                sum += n                 
    return sum
