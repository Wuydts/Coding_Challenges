int makeArrayConsecutive2(std::vector<int> statues) {

    using namespace std;
    
    int needStatues = 0, temp=0, difference=0;
   
    for (int k = 0; k < statues.size()-1; k++)
    {
        for(int i = 0; i < statues.size()-1; i++)
        {
            if (statues[i] > statues[i+1])
            {

                temp = statues[i+1];
                statues[i+1] = statues[i];
                statues[i] = temp; 

            }
        }
    }
    cout << " NEW ARRAY " <<endl;
     for (int k = 0; k < statues.size(); k++)
            cout  << statues[k] << " , ";
    
    cout <<endl<<endl<<endl;
    for (int k = statues.size()-1; k > 0; k--)
    {
        difference = 0;
        cout <<"location: " << statues[k] <<endl;
        cout <<"location -1: " <<statues[k-1] <<endl;
        
        
        difference -= (statues[k-1] - statues[k]) +1;
        
        
        cout << "difference: " << difference <<endl<<endl;
        
        
        if (difference >= 1)
            needStatues += difference;
    }
    
    return needStatues;
    
}
