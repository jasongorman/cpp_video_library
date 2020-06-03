#include "library.h"


void Library::donate(Movie &movie) {
    this->movies.push_back(movie);
    movie.addCopy();
}

bool Library::contains(string title, int year) {
    for(int i = 0; i < this->movies.size(); i++){
        Movie &movie = this->movies[i];
        if(movie.getTitle() == title && movie.getYear() == year){
            return true;
        }
    }
    return false;
}