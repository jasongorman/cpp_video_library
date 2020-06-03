#include "Movie.h"

Movie::Movie(string title, int year) {
    this->title = title;
    this->year = year;
}

int Movie::getCopies() {
    return this->copies;
}

void Movie::addCopy() {
    this->copies++;
}

bool Movie::matches(string &title, int year) {
    return title == this->title && year == this->year;
}