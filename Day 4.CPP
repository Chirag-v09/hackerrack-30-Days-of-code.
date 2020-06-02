

class Person{
    public:
        int age;
        Person(int initialAge);
        void amIOld();
        void yearPasses();
    };

    Person::Person(int initialAge){
        age = initialAge;
        // Add some more code to run some checks on initialAge

    }

    void Person::amIOld(){

        if ( age < 0 )
        {
            cout << "Age is not valid, setting age to 0." << endl;
            age = 0;
        }
        if( age < 13)
        {
            cout << "You are young." << endl;
        }
        else if ( 13 <= age && age < 18)
        {
            cout << "You are a teenager." << endl;
        }
        else
        {
            cout << "You are old." << endl;
        }
        // Do some computations in here and print out the correct statement to the console 

    }

    void Person::yearPasses(){
        age += 1;
        
    }

