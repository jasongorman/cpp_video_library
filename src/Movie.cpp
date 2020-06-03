#include "library.h"
#include "Movie.h"

Movie::Movie(string title, int year) {
    this->title = title;
    this->year = year;
}

string Movie::getTitle() {
    return this->title;
}

int Movie::getYear(){
    return this->year;
}

int Movie::getCopies() {
    return this->copies;
}

void Movie::addCopy() {
    this->copies++;
}

bool Movie::matches(string &title, int year) {
    return getTitle() == title && getYear() == year;
}