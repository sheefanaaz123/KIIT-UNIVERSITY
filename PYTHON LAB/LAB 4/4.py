class Employee:
    companyName = "XYZ Corporation"  

    def __init__(self, name, age, experience, department, salary):
        self.name = name
        self._age = age 
        self.experience = experience
        self.department = department
        self._salary = salary  

    def get_age(self):
        return self._age

    def get_salary(self):
        return self._salary

    def display_info(self):
        print(f"Name: {self.name}, Age: {self._age}, Experience: {self.experience} years, Department: {self.department}, Salary: ${self._salary}")


class Manager(Employee):
    def __init__(self, name, age, experience, department, salary, teams_managed):
        super().__init__(name, age, experience, department, salary)
        self.teams_managed = teams_managed  
    def get_num_teams_managed(self):
        return len(self.teams_managed)

    def display_info(self):
        super().display_info()
        print(f"Teams Managed: {', '.join(self.teams_managed)}")


class Developer(Employee):
    def __init__(self, name, age, experience, department, salary, programming_languages):
        super().__init__(name, age, experience, department, salary)
        self.programming_languages = programming_languages  

    def display_info(self):
        super().display_info()
        print(f"Programming Languages: {', '.join(self.programming_languages)}")


employee1 = Employee("Shruti Sinha", 30, 5, "HR", 60000)
manager1 = Manager("Shubhangi", 35, 8, "IT", 80000, ["Team A", "Team B"])
developer1 = Developer("Sheefa Naaz", 28, 3, "Development", 70000, ["Python", "JavaScript"])

employee1.display_info()
print()

manager1.display_info()
print(f"Number of Teams Managed by the Mangaer: {manager1.get_num_teams_managed()}")
print()

developer1.display_info()
