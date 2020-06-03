#ifndef VIDEO_LIBRARY_LIBRARY_H
#define VIDEO_LIBRARY_LIBRARY_H

#include "Movie.h"
#include <string>
#include <vector>

using namespace std;

class Library {
private:
    vector<Movie> movies = {};
public:
    void donate(Movie &movie);
    bool contains(string title, int year);
};

#endif //VIDEO_LIBRARY_LIBRARY_H
