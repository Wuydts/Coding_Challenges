int centuryFromYear(int year) {
    int century;
    int calc = year/100;
    
    if(year % 100 ==0)
    {
        century = calc;
    }
    else
    {
        century = calc + 1;
    }
return century;
}
