#include "gtest/gtest.h"
#include "../src/library.h"

class VideoLibraryTest : public ::testing::Test {
protected:
    void SetUp() override {
        library.donate(movie);
    }

    Library &library = *new Library();
    Movie &movie = *new Movie("The Abyss", 1989);
};

TEST_F(VideoLibraryTest, DonatedMovieAddedTolibrary){
    ASSERT_TRUE(library.contains("The Abyss", 1989));
}

TEST_F(VideoLibraryTest, RentalCopyAddedToMovie){
    ASSERT_EQ(movie.getCopies(), 1);
}

