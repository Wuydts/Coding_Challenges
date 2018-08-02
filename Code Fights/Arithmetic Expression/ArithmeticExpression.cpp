bool arithmeticExpression(double a, double b, double c)
{
     if (a + b == c)
    {
        cout << a << " + " << b << " = " << c <<endl;
        return true;
    }
    else if (a/b ==c )
    {
        cout << a << " / " << b << " = " << c <<endl;
        return true;
    }
    else if (a*b ==c)
    {
        cout << a << " * " << b << " = " << c <<endl;
        return true;
    }

    else if (a - b == c)
    {
        cout << a << " - " << b << " = " << c <<endl;
        return true;
    }
    else
    {
        cout << "false" <<endl;
        return false;
    }
        
}
