#include "library.h"
#include "Movie.h"


void Library::donate(Movie &movie) {
    this->movies.push_back(movie);
    movie.addCopy();
}

bool Library::contains(string title, int year) {
    for(int i = 0; i < this->movies.size(); i++){
        if(this->movies[i].matches(title, year)){
            return true;
        }
    }
    return false;
}

