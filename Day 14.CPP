

    Difference(vector <int> a)
    {
        int len = a.size();
        for(int i = 0; i < len; i++)
            elements.push_back(a[i]);
    }

	void computeDifference()
    {
        int max = 0;
        int len = elements.size();
        for(int i = 0; i < len - 1; i++)
        {
            for(int j = i; j < len; j++)
            {
                // cout << "Hello";
                if(max < abs(elements[i] - elements[j]))
                    max = abs(elements[i] - elements[j]);
            }
        }
        maximumDifference = max;
    }

