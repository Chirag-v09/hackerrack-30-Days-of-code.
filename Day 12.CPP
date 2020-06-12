

class Student :  public Person{
	private:
		vector<int> testScores;  
	public:
        
    Student(string firstName, string lastName, int id, vector<int> testScores) : Person(firstName, lastName, id)
    {
        //cout << "Constructor";
        /*
        firstName = s.firstName;
        lastName = s.lastName;
        id =  s.id;*/
        for(int i = 0; i < testScores.size(); i++)
        {
            this->testScores.push_back(testScores[i]);
        }
        // cout << testScores[0];
    }

    char calculate()
    {
        // cout << "Calculate";
        char ch;
        double sum = 0;
        for(int i = 0; i < testScores.size(); i++)
        {
            sum += testScores[i];
        }
        sum = sum/testScores.size();
        if (sum >= 90 && sum <= 100)
            ch = 'O';
        if (sum >= 80 && sum < 90)
            ch = 'E';
        if (sum >= 70 && sum < 80)
            ch = 'A';
        if (sum >= 55 && sum < 70)
            ch = 'P';
        if (sum >= 40 && sum < 55)
            ch = 'D';
        if (sum < 40)
            ch = 'T';
        
        return ch;
    }
        /*	
        *   Class Constructor
        *   
        *   Parameters:
        *   firstName - A string denoting the Person's first name.
        *   lastName - A string denoting the Person's last name.
        *   id - An integer denoting the Person's ID number.
        *   scores - An array of integers denoting the Person's test scores.
        */
        // Write your constructor here

        /*	
        *   Function Name: calculate
        *   Return: A character denoting the grade.
        */
        // Write your function here
};

