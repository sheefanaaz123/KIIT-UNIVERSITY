# 1. Write an R-script to evaluate average of 3 numbers using function.


calculate_average_8085 <- function(num1_8085, num2_8085, num3_8085) {
  avg_8085 <- (num1_8085 + num2_8085 + num3_8085) / 3
  return(avg_8085)
}

num1_8085 <- 5
num2_8085 <- 5
num3_8085 <- 5

average_8085 <- calculate_average_8085(num1_8085, num2_8085, num3_8085)
cat("The average is:", average_8085)



# 2.Write an R-script to find out the factorial of a number using function.

calculate_factorial_8085 <- function(n_8085) {
  if (n_8085 == 0 || n_8085 == 1) {
    return(1)
  } else {
    return(n_8085 * calculate_factorial_8085(n_8085 - 1))
  }
}

num_8085 <- 5
factorial_8085 <- calculate_factorial_8085(num_8085)
cat("The factorial is:", factorial_8085)





# 3. Write an R-script to find out HCF and LCM of the given two numbers using function.

calculate_hcf_8085 <- function(a_8085 , b_8085 ) {
  while (b_8085  != 0) {
    temp_8085  <- b_8085 
    b_8085  <- a_8085  %% b_8085 
    a_8085  <- temp_8085 
  }
  return(a_8085)
}

calculate_lcm_8085  <- function(a_8085 , b_8085 ) {
  gcd_8085  <- calculate_hcf(a_8085 , b_8085 )
  lcm_8085  <- (a_8085  * b_8085 ) / gcd_8085 
  return(lcm_8085)
}


num1_8085  <- 5
num2_8085  <- 2

hcf_8085  <- calculate_hcf(num1_8085 , num2_8085 )
lcm_8085  <- calculate_lcm(num1_8085 , num2_8085 )

cat("The HCF of is",hcf_8085 ,"\n")
cat("The LCM of is", lcm_8085 )








# 4. Write an R-script to evaluate sum of the following series using recursive function 1+2+3+………………. +N.

calculate_series_sum_8085 <- function(n_8085) {
  if (n_8085 == 1) {
    return(1)
  } else {
    return(n_8085 + calculate_series_sum_8085(n_8085 - 1))
  }
}

cat("The sum of the series is:", calculate_series_sum_8085(3))


# 5. Write an R-script to display the reverse of the given no. using recursive function.

reverse_number_8085 <- function(num_8085) {
  if (num_8085 < 10) {
    return(as.character(num_8085))
  } else {
    last_digit_8085 <- num_8085 %% 10
    remaining_digits_8085 <- num_8085 %/% 10
    return(paste(last_digit_8085, reverse_number_8085(remaining_digits_8085), sep = ""))
  }
}

cat("The reverse of the number is:", reverse_number_8085(123))

# 6. Write an R-script to evaluate the simple interest of the given P, T, R using function,
# where function takes the default value for R.

calculate_simple_interest_8085 <- function(principal_8085, time_8085, rate_8085 = 5) {
  interest_8085 <- (principal_8085 * rate_8085 * time_8085) / 100
  return(interest_8085)
}

principal_8085 <- 100
time_8085 <- 2

cat("Simple interest with default rate", calculate_simple_interest(principal_8085, time_8085))


# 7. Write an R-script to convert decimal into binary using recursive function.

decimal_to_binary_8085 <- function(decimal_8085 ) {
  if (decimal_8085  == 0) {
    return("0")
  } else {
    return(paste(decimal_to_binary_8085 (decimal_8085 %/% 2), as.character(decimal_8085  %% 2), sep = ""))
  }
}

binary_8085  <- decimal_to_binary_8085(5)

cat("The binary representation of", "is:", binary_8085)


# 8. Write an R-script to find the factorial of a number using recursive function.

calculate_factorial_8085 <- function(n_8085) {
  if (n_8085 == 0 || n_8085 == 1) {
    return(1)
  } else {
    return(n_8085 * calculate_factorial_8085(n_8085 - 1))
  }
}

cat("The factorial of is:", calculate_factorial_8085(5))


# 9. Write an R-script to find the Find Sum of Series 1²+2²+3²+…..+n² using recursive function


calculate_series_sum_8085 <- function(n_8085) {
  if (n_8085 == 1) {
    return(1)
  } else {
    return(n_8085^2 + calculate_series_sum_8085(n_8085 - 1))
  }
}

cat("The sum of the series 1² + 2² + ... +", n, "² is:",calculate_series_sum_8085(5))


# 10. Write an R-script to develop a function that receives 5 numbers and display the sum, average 
# and standard deviation of these numbers.

calculate_stats_8085 <- function(num1_8085, num2_8085, num3_8085, num4_8085, num5_8085) {
  numbers_8085 <- c(num1_8085, num2_8085, num3_8085, num4_8085, num5_8085)
  
  sum <- sum(numbers_8085)
  average <- mean(numbers_8085)
  sd <- sd(numbers_8085)
  
  stats_8085 <- list(sum = sum, average = average, standard_deviation = sd)
  
  return(stats_8085)
}

stats_8085 <- calculate_stats_8085(1, 2, 3, 4, 5)

cat("Sum:", stats_8085$sum, "\n")
cat("Average:", stats_8085$average, "\n")
cat("Standard Deviation:", stats_8085$standard_deviation, "\n")












# 11. Write an R-script to generate a set of numbers and run the numbers with the following built-in statistic functions. Here 'x' is a vector. 
# mean(x), median(x), var(x), sd(x), scale(x), summary(x), rank(x), quantile(x)

x_8085 <- runif(100, 0, 100)
mean(x_8085)
median(x_8085)
var(x_8085)
sd(x_8085)
scale(x_8085)
summary(x_8085)
rank(x_8085)
quantile(x_8085)
