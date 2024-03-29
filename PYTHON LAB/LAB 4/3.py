#2) Create a class called Movie. An instance of class Movie represents a film. This classhasthe following three class variables: 
#● title, which is a String representing the title of the movie ● studio, which is a String representing the studio that made the movie ● rating, which is a String representing the rating of the movie (i.e. PG­13, R, etc)
#a) Write a constructor for the class Movie, which takes a String representing the titleof themovie, a String representing the studio, and a String representing the rating as its arguments, and sets the respective class variables to these values. 
#b) Write a second constructor for the class Movie, which takes a String representingthetitleof the movie and a String representing the studio as its arguments, and sets the respectiveclass variables to these values, while the class variable rating is set to "PG". 
#c) Write a method getPG, which takes an array of base type Movie as its argument, andreturns a new array of only those movies in the input array with a rating of "PG". You mayassume the input array is full of Movie instances. The returned array need not be full. 
#d) Write a piece of code that creates an instance of the class Movie with the title “CasinoRoyale”, the studio “Eon Productions”, and the rating “PG­13”.

class Movie:
    def __init__(self, title, studio, rating):
        self.title = title
        self.studio = studio
        self.rating = rating

    @classmethod
    def create_with_default_rating(cls, title, studio):
        return cls(title, studio, "PG")

    @staticmethod
    def get_PG_movies(movies):
        pg_movies = [movie for movie in movies if movie.rating == "PG"]
        return pg_movies


casino_royale = Movie("ABC", "RYC", "PG-13")

default_movie = Movie.create_with_default_rating("Default Movie", "Default Studio")

movies_array = [
    Movie("Movie1", "Studio1", "PG"),
    Movie("Movie2","Studio2", "PG")
]

pg_movies_array = Movie.get_PG_movies(movies_array)


print("PG Movies:")
for movie in pg_movies_array:
    print(f"{movie.title} - {movie.studio} - {movie.rating}")