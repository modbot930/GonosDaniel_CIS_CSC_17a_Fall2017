/*
Daniel Gonos
CIS 17A (48969)
Assignment 11.1 (Movie Data)
This is a program that stores movie data in variable using structures to organize. It then outputs the data neatly. 
*/
#include <iostream>//used to input the library for cin and cout

using namespace std;//used to be able to right cin and cout without std::

struct MovieData{//struct that will be used to house the different data types of the movie
    string title;//string to hold the name of the movie
    string director;//string to hold the director of the movie
    int year;//int to hold the year the movie was released
    float length;//float to hold the length of the movie
};
int main() {
    
    MovieData hobbit = //first variable created using the structure
    {
     "The Hobbit",
     "Peter Jackson",
     2012,
     3
    };
    MovieData pagem = //second variable created using the structure
    {
     "The Pagemaster",
     "Joe Johnston",
     1994,
     1.5
    };
   //outputs the info that was entered into the variables created above 
   cout << "Movie Info: " << endl;
   cout << "The name of the movie: " << hobbit.title << endl;
   cout << "The movie director: " << hobbit.director << endl;
   cout << "The year released: " << hobbit.year << endl;
   cout << "Movie runtime: " << hobbit.length << endl;
   
    cout << endl << "Movie Info: " << endl;
   cout << "The name of the movie: " << pagem.title << endl;
   cout << "The movie director: " << pagem.director << endl;
   cout << "The year released: " << pagem.year << endl;
   cout << "Movie runtime: " << pagem.length << endl;
    return 0;
    
    
}



