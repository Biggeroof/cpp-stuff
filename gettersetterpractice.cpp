#include <iostream>
#include <string>

using namespace std;

class Movie 
{
    private:
    string rating;

    public:
    string director;
    string title;

    Movie(string aTitle, string aDirector, string aRating)
    {
        director =  aDirector;
        title = aTitle;
        setRating(aRating);
    }

    void setRating(string rate)
    {
        if(rate == "G" || rate == "PG" || rating == "PG-13" || rating == "R" || rating == "NR")
        {
            rating = rate;
        }
        else{
            rating = "NR";
        }
    }

    string getRating()
    {
        return rating;
    }
};

int main() 
{
    Movie a ("b", "c", "G");
    cout << a.getRating() << endl;
}