

class Calculator
{
    int n, p;
public:
    int power(int n, int p)
    {
        if(n >= 0 && p >= 0)
        {
            int res = 1;
            for(int i = 0; i < p; i++)
                res *= n;
            return res;
        }
        else
        {
            // cout << "";
            throw runtime_error("n and p should be non-negative");
        }        
    }
};

