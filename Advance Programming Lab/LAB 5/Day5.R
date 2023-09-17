# 1. Write an R-script to analyze whether the given year is a leap year or not?
year_8085=2020

if ((year_8085 %% 4 == 0 && year_8085 %% 100 != 0) || year_8085 %% 400 == 0) {
    print("Leap Year")
}else {
    print("Not a leap year")
}



# 2. Write an R-script to enter a 3-digits number and check whether it is palindrome no. or not using
# if else only?

number_8085 =191

if (number_8085 >= 100 && number_8085<= 999) {
  digit1_8085 <- floor(number_8085 / 100)
  digit3_8085 <- number_8085 %% 10
  
  if (digit1_8085 == digit3_8085) {
    cat(number_8085, "is a palindrome number.\n")
  } else {
    cat(number_8085, "is not a palindrome number.\n")
  }
} else {
  cat("Please enter a valid 3-digit number.\n")
}

# 3. Write an R-script to enter marks in 3 subjects and then calculate the total mark and average.
#Assign the grade according to the B.Tech evaluation system.

marks_8085 <- numeric(3)
for (i in 1:3) {
  marks_8085[i] <- as.numeric(readline(paste("Enter the marks", i, ": ")))
}

total_marks_8085 <- sum(marks_8085)
average_marks_8085 <- total_marks_8085 / 3

grade_8085 <- if (average_marks_8085 >= 90) {
  "S"
} else if (average_marks_8085 >= 80) {
  "A"
} else if (average_marks_8085 >= 70) {
  "B"
} else if (average_marks_8085 >= 60) {
  "C"
} else if (average_marks_8085 >= 50) {
  "D"
} else if (average_marks_8085 >= 40) {
  "E"
} else {
  "F"
}

cat("Total Marks:", total_marks_8085, "\n")
cat("Average Marks:", average_marks_8085, "\n")
cat("Grade:", grade_8085, "\n")


# 4. Write an R-script to design a menu driven program as follows and then evaluate any one of the operations according to your choice using switch case statement.

#1. Area of circle
#2. Area of rectangle
#3. Area of Triangle 
choice_8085 <- 2
switch(choice_8085,
       
         "1"={
           radius_8085 <- 5
           area_8085 <- pi * radius_8085^2
           cat("The area of the circle is:", area_8085, "\n")
         },
           "2"={
             length_8085 <- 2
           width_8085 <- 3
           area_8085 <- length_8085 * width_8085
           cat("The area of the rectangle is:", area_8085, "\n")
           },
           "3"= {
             base_8085 <- 3
           height_8085 <- 4
           area_8085 <- 0.5 * base_8085 * height_8085
           cat("The area of the triangle is:", area_8085, "\n")
           },
             cat("Invalid choice!\n")
       )

# 5. Write an R-script to design a menu driven program as follows and then display any one of the colors 
#according to your choice using switch case statement.

#R- Red
#G- Green
#B- Blue

choice_8085 <- "R"
switch(choice_8085,
       
       "R"={
         cat(" Red is  :", choice_8085, "\n")
       },
       "G"={
         cat("Green is:", choice_8085, "\n")
       },
       "B"= {
         cat("Blue is:", choice_8085, "\n")
       },
       cat("Invalid choice!\n")
)
# 6. Write an R-script to generate the Fibonacci series up to n terms.

n_8085 <- 5
fib_series_8085 <- numeric(n_8085)
fib_series_8085[1] <- 0
fib_series_8085[2] <- 1

for (i in 3:n_8085) {
  fib_series_8085[i] <- fib_series_8085[i - 1] + fib_series_8085[i - 2]
}

cat("Fibonacci series of", n_8085, ": ", fib_series_8085)


# 7. Write an R-script to check whether an input integer is perfect number or not.
input_num_8085 <- 6

if (input_num_8085 <= 0) {
  cat("Invalid input. Please enter a positive integer.")
} else {
  divisors_8085 <- numeric(0)
  
  for (i in 1:(input_num_8085/2)) {
    if (input_num_8085 %% i == 0) {
      divisors_8085 <- c(divisors_8085, i)
    }
  }
  
  sum_divisors_8085 <- sum(divisors_8085)
  
  if (sum_divisors_8085 == input_num_8085) {
    cat(input_num_8085, "is a perfect number.")
  } else {
    cat(input_num_8085, "is not a perfect number.")
  }
}

# 8.  Write an R-script to sum the series S=1+(1+2)+(1+2+3)+...+(1+2+3+...+n).

n_8085 <- 3

sum_series_8085 <- 0

for (i in 1:n_8085) {
  inner_sum_8085 <- sum(1:i)  
  sum_series_8085 <- sum_series_8085 + inner_sum_8085
}

cat("The sum of the series is:", sum_series_8085, "\n")


# 9. Write an R-script to check whether an integer number is an Armstrong number or not.

number_8085 <- 153

num_str_8085 <- as.character(number_8085)
num_digits_8085 <- nchar(num_str_8085)

sum_8085 <- 0
temp_8085 <- number_8085
while (temp_8085 > 0) {
  digit_8085 <- temp_8085 %% 10
  sum_8085 <- sum_8085 + digit_8085^num_digits_8085
  temp_8085 <- floor(temp_8085 / 10)
}

if (sum_8085 == number_8085) {
  cat(number_8085, "is an Armstrong number.\n")
} else {
  cat(number_8085, "is not an Armstrong number.\n")
}



#10. Write an R-script to print the following pattern for n rows. Ex. for n=5 rows.

#1
#2 1
#1 2 3
#4 3 2 1
#1 2 3 4 5

n_8085=3

for (i in 1:n_8085) {
  if (i %% 2 == 0) {
    for (j in i:1) {
      cat(j, " ")
    }
  } else {
    for (j in 1:i) {
      cat(j, " ")
    }
  }
  cat("\n")
}


