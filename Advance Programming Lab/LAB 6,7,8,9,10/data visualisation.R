# Q1
summary(iris)
str(iris)
head(iris, 5)
nrow(iris)
ncol(iris)

# Q2

# Line Charts
par(mfrow=c(2,2)) # Create a 2x2 layout for the plots
for (i in 1:4) {
  plot(iris$Sepal.Length, iris[,i], main=paste("Sepal.Length vs", colnames(iris)[i]), xlab="Sepal.Length", ylab=colnames(iris)[i], type="l")
}

# Bar Plot
barplot(table(iris$Species), main="Bar Plot of Species", xlab="Species", ylab="Frequency", col="steelblue")

# Histogram
par(mfrow=c(1,1)) # Reset layout to 1x1
hist(iris$Sepal.Length, main="Histogram of Sepal.Length", xlab="Sepal.Length", col="lightblue", border="black")

# Pie Chart
slices <- table(iris$Species)
pie(slices, main="Pie Chart of Species", col=rainbow(length(slices)))


# Dot Plot
stripchart(iris$Sepal.Length, main="Dot Plot of Sepal.Length", xlab="Sepal.Length", pch=19, col="steelblue")

# Box Plot
boxplot(Sepal.Length ~ Species, data=iris, main="Box Plot of Sepal.Length by Species", xlab="Species", ylab="Sepal.Length", col="lightblue", border="black")

# Scatter Plot
plot(iris$Sepal.Length, iris$Petal.Length, main="Scatter Plot of Sepal.Length vs Petal.Length", xlab="Sepal.Length", ylab="Petal.Length", col=iris$Species, pch=19)

# Kernel Density Plot
par(mfrow=c(1,1)) 
for (i in 1:4) {
  plot(density(iris[,i]), main=paste("Kernel Density Plot of", colnames(iris)[i]), xlab=colnames(iris)[i], col="steelblue", lwd=2)
}


# Q3

# List installed packages
installed_packages <- installed.packages()

# Display the names of installed packages
print(names(installed_packages))

# Count the number of installed packages
num_packages <- length(installed_packages)
print(num_packages)


# Q4

install.packages("ggplot2")
library(ggplot2)

# Create a hypothetical dataset
data <- data.frame(
  x = c(1, 2, 3, 4),
  y = c(10, 15, 7, 20),
  size = c(30, 50, 20, 80),
  label = c("A", "B", "C", "D")
)

# Create a bubble chart using ggplot2
ggplot(data, aes(x, y, size = size, label = label)) +
  geom_point(shape = 21, fill = "blue", color = "black", alpha = 0.7) +
  geom_text(vjust = -0.5) +  # Add labels above the bubbles
  labs(title = "Bubble Chart", x = "X-axis", y = "Y-axis") +
  theme_minimal()


