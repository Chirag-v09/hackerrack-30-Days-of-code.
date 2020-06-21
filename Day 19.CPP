
class Calculator : public AdvancedArithmetic {
public:
    int divisorSum(int n) {
        vector <int> v;
        for(int i = 1; i <= n; i++)
        {
            if(n%i == 0)
            {
                v.push_back(i);
            }
        }
        int sum = 0;
        for(int i = 0; i < v.size(); i++)
        {
            sum += v[i];
        }

        return sum;
    }
};

