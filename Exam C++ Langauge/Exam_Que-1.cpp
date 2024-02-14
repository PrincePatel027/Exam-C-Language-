#include <iostream>
using namespace std ;

class Movie {
	private:
	     string title;
	     string genre;
	     int releasedYear;
	
	public:
	    Movie( string t,  string g, int y)
		{
			this->title = t ;
			this->genre = g ;
			this->releasedYear = y ;
		}
	
	     string getTitle() 
		 {
		 	return title; 
		 }
		 
	     string getGenre() 
		 {
		 	return genre; 
		 }
	    int getReleasedYear()
		{ 
			return releasedYear; 
		}
};

int main() {
	
    Movie movies[3] = {
        Movie("Movie1", "Genre1", 2000),
        Movie("Movie2", "Genre2", 2010),
        Movie("Movie3", "Genre3", 2020)
    };

    for (int i = 0; i < 3; ++i) 
	{
		cout << "----------------------------------------------------------------------------------------------------------" << endl ;
         cout << "\t\t\t\tMovie " << i + 1 << " Information :\n\n";
         cout << "\t\t\t\tTitle: " << movies[i].getTitle() << "\n";
         cout << "\t\t\t\tGenre: " << movies[i].getGenre() << "\n";
         cout << "\t\t\t\tReleased Year: " << movies[i].getReleasedYear() << "\n\n";
    }

    return 0;
}
