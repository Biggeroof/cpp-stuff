#include <iostream>
#include <string>
#include <cmath>

using namespace std;

//switch statements (the call to it is in main)
string dayOfWeek(int dayNum)
{
    string dayName;

    switch(dayNum)
    {
    case 0:
        dayName = "Sunday";
        break;
    case 1:
        dayName = "Monday";
        break;
    case 2:
        dayName = "Tuesday";
        break;
    case 3:
        dayName = "Wednesday";
        break;
    case 4:
        dayName = "Thursday";
        break;
    case 5:
        dayName = "Friday";
        break;
    case 6:
        dayName = "Saturday";
        break;
    default:
        dayName = "invalid day num";
    }

    return dayName;
}

int main()
{
    //data types
        int number = 20;
        char grade = 'A';
        string phrase = "Giraffe Academy";
        double decimal = 2.5;
        bool boolean = false;
        int input;
        string name;

    //basic string methods
        cout << phrase.length() << endl;
        //this returns length of string
        cout << phrase[0] << endl;
        //this return the letter at index 0
        cout << phrase.find("Acaedmy", 0) << endl;
        //finds the phrase Academy starting from index 0
        phrase[1] = 'A';
        //changing the value of the string at that index
        phrase[1] = 'i';
        cout << phrase.substr(8, 3) << endl;
        //gets the substring starting from index 8 ,lasting 3 letters

    //working with numbers
        //operators are +, =, /, *, and %
        // ++ or -- to add or subtract 1, +=n to add n, -=n *=n /=n
        //when you add a decmial number to an int, the result will be a decimal number
        //when you divide 2 integers, you will get a whole number even if there is remainder
        //to fix this, you add .0 to the end of both integers to make the both decimals
        cout << pow(2, 5) << endl;
        //2 ^ 5
        cout << sqrt(36) << endl;
        //sqrt of 36
        cout << round(4.3) << endl;
        //rounds number
        cout << round(4.6) << endl;
        //2 other rounds are floor and celing, which round down and up without following the normal rounding rules
        cout << fmax(3, 10) <<endl;
        //returns larger number
        cout << fmin(3, 10) <<endl;
        //returns smaller number

    //user input
        cout << "enter number: ";
        cin >> input;
        cout << input << endl;

        cout << "enter string: ";
        cin.ignore();
        //clear buffer before string
        getline(cin, name);
        cout << name << endl;

    //arrays
        int numbers[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0,};
        int len = 10;
        int a;
        for (int i = 0; i < len; i++)
        {
            cout << "enter number: ";
            cin >> a;
            numbers[i] = a;
        }
        for (int i = 0; i < len; i++)
        {
            cout << numbers[i] << " ";
        } 
        cout << endl;

    //if statements
        int b = 5;
        if(b = 5)
        {
            cout << "number is 5" << endl;
        }
        else if(b > 5)
        {
            cout << "number is greater than 5" << endl;
            //to see this condition change b
        }
        else if(b < 5)
        {
            cout << "number is less than 5" << endl;
            //to see this condition change b
        }
        else
        {
            cout << "not a number" << endl;
            //only happens when no number
        }
    
    //switch statements
        cout << dayOfWeek(0) << endl;
        //change this to print out a different day of week

    //while loops
        int index = 1;

        while(index <= 10)
        {
            cout << index << endl;
            index ++;
        }

    //2d arrays
        int numGrid[3][2] = {
            //3 is for rows
            //2 is for columns
                                {1, 2},
                                {3, 4},
                                {5, 6} 
                            };
        for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 2; j++)
            {
                cout << numGrid[i][j] << " ";
            }
            cout << endl;
        }

    //pointers
        int age = 19;
        cout << &age << endl;
        //prints out memory address of variable because & was added (reference)

        int* pAge = &age;
        //can also store this in a variable then print
        cout << *pAge << endl;
        //this prints the value beacuse a * was added (deference)
        cout << pAge << endl;
        //prints address as you have no *

        cout << *&age << endl;
        // referencing then deferencing variable   
} 
