cmake_minimum_required(VERSION 3.10)
project(movieTicketBookingSystem)

add_executable(movieTicketBookingSystem
    ./tests/test_Movie.cpp
    ./src/Cinema.cpp
    ./src/Movie.cpp
)

