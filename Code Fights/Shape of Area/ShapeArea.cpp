int shapeArea(int n) {

    using namespace std;
    int area=0;
    
    if (n == 1)
        return 1;
    
    for (int i = 2; i <= n; i++)
        area += (i-1)*4;
    
    return area+1;
    
    
    
}
