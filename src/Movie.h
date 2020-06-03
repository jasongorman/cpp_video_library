//
// Created by jasongorman on 03/06/2020.
//

#ifndef VIDEO_LIBRARY_MOVIE_H
#define VIDEO_LIBRARY_MOVIE_H

#include <string>

using namespace std;

class Movie {
private:
    string title;
    int year;
    int copies = 0;
public:
    Movie(string title, int year);

    int getCopies();
    void addCopy();
    bool matches(string &title, int year);
};


#endif //VIDEO_LIBRARY_MOVIE_H
