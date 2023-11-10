#1. Create a CSV file as Student.csv having 5 columns as rollno, name, branch,
#percentage and DOA with 10 records. Now read the Student.csv file to the R-
#workspace and display that.


data <- data.frame(
  rollno = c(1, 2, 3, 4, 5, 6, 7, 8, 9, 10),
  name = c("John", "Alice", "Bob", "Charlie", "David", "Eva", "Frank", "Grace", "Henry", "Ivy"),
  branch = c("CSE", "ECE", "ME", "CSE", "ECE", "ME", "CSE", "ECE", "ME", "CSE"),
  percentage = c(85, 78, 92, 88, 76, 90, 84, 79, 95, 87),
  DOA = as.Date(c("2022-01-01", "2022-02-15", "2022-03-20", "2022-04-10", "2022-05-05", "2022-06-18", "2022-07-02", "2022-08-12", "2022-09-25", "2022-10-30"))
)
write.csv(data, "Student.csv", row.names = FALSE)
student_data <- read.csv("Student.csv")
print(student_data)


#-----------------------------------------------------------------------------------------------------------------

#2. Retrieve and display the details of that student who has maximum percentage.


max_percentage_row <- student_data[which.max(student_data$percentage), ]

print(max_percentage_row)

#-----------------------------------------------------

#3. Retrieve and display the details of those students who are studying in IT or CSE
#branch.

it_cse_students <- student_data[student_data$branch %in% c("IT", "CSE"), ]

print(it_cse_students)

#----------------------------------------------------------------

# 4. Retrieve and display the details of those CSE students whose percentage is
# more than or equal to 80.


cse_students_above_80 <- student_data[student_data$branch == "CSE" & student_data$percentage >= 80, ]

print(cse_students_above_80)

#----------------------------------------------------------------------
#5. Retrieve and display the details of those students who are admitted on or after
#1st may 2017 (Lateral Entries).

lateral_entry_students <- student_data[student_data$DOA >= as.Date("2017-05-01"), ]

print(lateral_entry_students)

#----------------------------------------------------------------------

#6. Create an Excel file as Student.xlsx, where sheet1 contains rollno, name, branch,
#percentage and sheet2 contains name, DOA with 10 records. Now install and
#load xlsx package to the R workspace.

install.packages("xlsx")
library(xlsx)

sheet1_data <- data.frame(
  rollno = student_data$rollno,
  name = student_data$name,
  branch = student_data$branch,
  percentage = student_data$percentage
)

sheet2_data <- data.frame(
  name = student_data$name,
  DOA = student_data$DOA
)

student_workbook <- createWorkbook()

#-----------------------------------------------------------------------------------------

#7. Read the details of sheet1 from Student.xlsx to the R workspace and display
#that, then read from the sheet2 and display that.



sheet1 <- createSheet(student_workbook, sheetName = "Sheet1")
addDataFrame(sheet1_data, sheet1)

sheet2 <- createSheet(student_workbook, sheetName = "Sheet2")
addDataFrame(sheet2_data, sheet2)

saveWorkbook(student_workbook, "Student.xlsx")

#-------------------------------------------------------------------------------------------------------------------------
#                                    DATA VISUALIZATION
#-------------------------------------------------------------------------------------------------------------------------
#FIG 1 (DISTRIBUTION OF PERCENTAGE)
install.packages("ggplot2")
library(ggplot2)

ggplot(student_data, aes(x = percentage)) + geom_histogram(binwidth = 5, fill = "blue", color = "black", alpha = 0.7) + labs(title = "Distribution of Percentages", x = "Percentage",    y = "Frequency") +  theme_minimal()


#---------------------------------------------------------------------------------------------------------------------------
#FIG 2 (Percentage vsDate of Admission)
ggplot(student_data, aes(x = DOA, y = percentage, color = branch)) +
  geom_point() +
  labs(title = "Percentage vs. Date of Admission",
       x = "Date of Admission",
       y = "Percentage",
       color = "Branch") +
  theme_minimal()

#----------------------------------------------------------------------------------------------------------------------------
#FIG 3 (Average Percentage by Branch)
ggplot(student_data, aes(x = branch, y = percentage, fill = branch)) +
  geom_bar(stat = "summary", fun = "mean", position = "dodge") +
  labs(title = "Average Percentage by Branch",
       x = "Branch",
       y = "Average Percentage",
       fill = "Branch") +
  theme_minimal()

#---------------------------------------------------------------------------------------------------------------------------
#FIG 4 (Distribution of Percentages by Branch)

ggplot(student_data, aes(x = branch, y = percentage, fill = branch)) +
  geom_boxplot() +
  labs(title = "Distribution of Percentages by Branch",
       x = "Branch",
       y = "Percentage",
       fill = "Branch") +
  theme_minimal()

#-------------------------------------------------------------------------------------------------------------------------
#FIG 5 (Average Percentage Over Time)

student_data$DOA <- as.Date(student_data$DOA)

student_data$Year <- format(student_data$DOA, "%Y")


ggplot(student_data, aes(x = Year, y = percentage, group = branch, color = branch)) +
  geom_line(stat = "summary", fun = "mean") +
  labs(title = "Average Percentage Over Time",
       x = "Year of Admission",
       y = "Average Percentage",
       color = "Branch") +
  theme_minimal()

#------------------------------------------------------------------------------------------------------------------

# FIG 6 (Distribution of Percentages by Branch)
ggplot(student_data, aes(x = branch, y = percentage, fill = branch)) +
  geom_violin(trim = FALSE) +
  labs(title = "Distribution of Percentages by Branch",
       x = "Branch",
       y = "Percentage",
       fill = "Branch") +
  theme_minimal()



