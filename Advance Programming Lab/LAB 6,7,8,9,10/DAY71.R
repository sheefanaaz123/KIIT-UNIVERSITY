#Q.1) Write an R-script to check whether the given number is Armstrong no. or not.

is_armstrong_number_8085 <- function(number_8085) {
  digits_8085 <- as.numeric(strsplit(as.character(number_8085), NULL)[[1]])
  num_digits_8085 <- length(digits_8085)
  armstrong_sum_8085 <- sum(digits_8085^num_digits_8085)
  is_armstrong_8085 <- armstrong_sum_8085 == number_8085
  return(is_armstrong_8085)
}


if (is_armstrong_number_8085(153)) {
  print("Armstrong number")
}else{
  print("Not an Armstrong number")
}


#------------------------------------------------------------------------------------

#Q.2) Write an R-script to calculate nPr and nCr, where n and r should be user input.

factorial_8085 <- function(n_8085) {
  if (n_8085 == 0 || n_8085 == 1) {
    return(1)
  } else {
    return(n_8085 * factorial_8085(n_8085 - 1))
  }
}
nPr_8085 <- function(n_8085, r_8085) {
  if (n_8085 < r_8085 || n_8085 < 0 || r_8085 < 0) {
    return(NA) 
  }
  return(factorial_8085(n_8085) / factorial(n_8085 - r_8085))
}
nCr_8085 <- function(n_8085, r_8085) {
  if (n_8085 < r_8085 || n_8085 < 0 || r_8085 < 0) {
    return(NA)  
  }
  return(factorial_8085(n_8085) / (factorial_8085(r_8085) * factorial_8085(n_8085 - r_8085)))
}
if (!is.na(nPr_8085(3, 2))) {
  print(nPr_result_8085)
}else{
  print("Invalid")
}

if (!is.na(nCr_8085(3, 2))) {
  print(nCr_result_8085)
}else{
  print("Invalid")
}
  
#-------------------------------------------------------------------------------------------
  
#Q.3) Write an R-script to enter two numbers and find the number has minimum one’s digit using
#user-defined function. (Let Input values: 532 and 784, then output is: 532)


ones_digit_8085 <- function(number_8085) {
  return(number_8085 %% 10)
}

mini_8085 <- function(number1_8085, number2_8085) {
  digit1_8085 <- ones_digit_8085(number1_8085)
  digit2_8085 <- ones_digit_8085(number2_8085)
  
  if(digit1_8085 < digit2_8085) {
    return(number1_8085)
  }else if (digit2_8085 < digit1_8085) {
    return(number2_8085)
  }
}
 
print(mini_8085(12, 21))




#---------------------------------------------------------------------------------------------------------


#Q.4) Write an R-script that generates a series
#using a function which takes first and last of the series and then generates
#four terms that are equidistant. (Let two numbers are 1 and 7, then function returns 1  3  5  7)



generation_8085 <- function(first_8085, last_8085, terms_8085) {
  common_difference_8085 <- (last_8085 - first_8085) / (terms_8085 - 1)
  series <- seq(first_8085, last_8085, by = common_difference_8085)
  
  return(series)
}

print(generation_8085(1, 6, terms_8085 = 11))


#-------------------------------------------------------------------------------------------------

#Q.5 Write an R-script to enter a number and check whether this number can be expressed as sum of
# two prime numbers using user-defined function. (Let Input number is: 18, then Output is: 18= 13+5,
# 18=11+7)

is_prime_8085 <- function(n_8085) {
  if (n_8085 <= 1) return(FALSE)
  if (n_8085 == 2) return(TRUE)
  if (any(n_8085 %% 2:(sqrt(n_8085)) == 0)) return(FALSE)
  return(TRUE)
}
find_prime_pairs_8085 <- function(input_number_8085) {
  prime_pairs_8085 <- list()
  
  for (i_8085 in 2:(input_number_8085 - 2)) {
    if (is_prime_8085(i_8085) && is_prime_8085(input_number_8085 - i_8085)) {
      pair_8085 <- paste("( ",i_8085, "," , input_number_8085 - i_8085, ")")
      prime_pairs_8085 <- c(prime_pairs_8085, pair_8085)
    }
  }
  return(prime_pairs_8085)
}
if (length(find_prime_pairs_8085(18)) > 0) {
  cat(paste(paste(find_prime_pairs_8085(18), collapse = ", ")))
} else {
  cat("No pair")
}

#----------------------------------------------------------------------------------------------------
