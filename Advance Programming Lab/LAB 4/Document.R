#Write an R-script to create a 4*3 matrix. Now display the elements of row1,
#row3 and column2 of that matrix.
matrix_085 <- matrix(101:112, nrow = 4, ncol = 3, byrow=TRUE)
print(matrix_085 )
print(matrix_085 [1, ])
print(matrix_085 [3, ])
print(matrix_085 [, 2])



#Write an R-script to create two matrix and then perform addition,
#subtraction, multiplication and division of them.

matrix1_085 <- matrix(1:12, nrow = 4, byrow=TRUE)
matrix2_085 <- matrix(13:24, nrow = 4, byrow=TRUE)
print(matrix1_085)
print(matrix2_085)
print(matrix1_085 + matrix2_085)
print(matrix1_085 - matrix2_085)
print(matrix1_085 * matrix2_085)
print(matrix1_085 / matrix2_085)




#Write an R-script to create a 3*3 matrix and update that matrix 
#by adding 4 to each and every element, also display the updated matrix.

matrix_085 <- matrix(0:8, nrow = 3)
print(matrix_085)
new_matrix_085 <- matrix_085 + 4
print(new_matrix_085)

#Write an R-script to set those elements of the 
#created matrix to 0, whose value are less than 5.
matrix_085 <- matrix(1:15, nrow = 5, byrow=TRUE)
print(matrix_085)
matrix_085[matrix_085 < 5] <- 0
print(matrix_085)



#Write an R-script to create a matrix and evaluate the sum of the elements row-wise.

matrix_085 <- matrix(1:15, nrow = 5, ncol=3, byrow=TRUE)
print(matrix_085)
sum_of_row_085 <- rowSums(matrix_085)
print(sum_of_row_085)






# Write an R-script to create an array having 3 dimensions.
# Now retrieve the elements of 2nd row of 3rd matrix.
# Create a 3-dimensional array
dimension1_085 <- 2
dimension2_085 <- 3
dimension3_085 <- 4
array_085 <- array(1:(dimension1_085 * dimension2_085 * dimension3_085), dim = c(dimension1_085, dimension2_085, dimension3_085))
print(array_085)
row_2_085 <- array_085[2, , 3]
print(row_2_085)

# Write an R-script to check the given matrix is symmetric matrix or not?

matrix_085 <- matrix(c(1, 2, 3, 2, 4, 5, 3, 5, 6), nrow = 3)

print(matrix_085)

print (isSymmetric(matrix_085))



































