#ifndef SUPERMAN_CINEMA_H
#define SUPERMAN_CINEMA_H
#include "./Movie.h"
namespace superman{
    class Cinema{
        Movie *m_movies;
        int m_count;
    public:
        Cinema(int count);
        ~Cinema();
        void addMovie(int index);
        void showAllMovies() const;
        void bookMovieTickets(int index, int n);
    };
}
#endif // !SUPERMAN_CINEMA_H