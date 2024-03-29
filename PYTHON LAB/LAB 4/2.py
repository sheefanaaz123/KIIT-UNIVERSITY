#1) Create a class called Holiday. An object of class Holiday represents aholiday duringthe year. This class has three instance variables: 
#● name, which is a String representing the name of the holiday ● day, which is an int representing the day of the month of the holiday ● month, which is a String representing the month the holiday is in 
#a) Write a constructor for the class Holiday, which takes a String representing thename, anint representing the day, and a String representing the month as its arguments, andsetstheclass variables to these values. 
#b) Write a method inSameMonth, which compares two instances of the class Holiday,andreturns the Boolean value true if they have the same month, and false if they do not. 
#c) Write a method avgDate which takes an array of base type Holiday as its argument, andreturns a double that is the average of the day variables in the Holiday instances inthearray. You may assume that the array is full (i.e. does not have any null entries). 
#d) Write a piece of code that creates a Holiday instance with the name “IndependenceDay”, with the day “15”, and with the month “August”. 

class Holiday:
    def __init__(self, name, day, month):
        self.name =name
        self.day =day
        self.month =month

    def in_same_month(self, other_holiday):
        return self.month == other_holiday.month

    def avg_date(holidays):
        total_days = sum(holiday.day for holiday in holidays)
        return total_days / len(holidays)



independence_day = Holiday(name="Independence Day", day=15, month="August")



birthday = Holiday(name="birthday", day=18, month="January")


print("Is Independence Day and Shruti's Birthday in the same month?", independence_day.in_same_month(birthday))


holidays_array = [
    Holiday(name="Eid", day=12, month="August"),
    Holiday(name="Republic Day", day=26, month="January"),
    Holiday(name="Gandhi Jayanti", day=2, month="October"),
]
average_day = Holiday.avg_date(holidays_array)
print(average_day)
