//  question 1 
name = "Mazen"
age = 19
gpa = 3.75
is_student = True

print("Name:", name)
print("Age:", age)
print("GPA:", gpa)
print("Are you a student?", is_student)

// ----------------------------------------

//  question 2

name = "Mazen"
age = 19
gpa = 3.75
is_student = True

print(f"My name is {name} and I am {age} years old.")
print(f"My GPA is {gpa}.")
print(f"Am I a student? {is_student}")

// ----------------------------------------
//  question 3

num1 = int(input("Enter the first number: "))

num2 = int(input("Enter the second number: "))

print(f"You entered {num1} and {num2}.")

// ----------------------------------------
//  question 4

=num1 = int(input("Enter the first number: "))

num2 = int(input("Enter the second number: "))

sum_result = num1 + num2
difference = num1 - num2
product = num1 * num2
quotient = num1 / num2


print(f"The sum of {num1} and {num2} is {sum_result}.")
print(f"The difference between {num1} and {num2} is {difference}.")
print(f"The product of {num1} and {num2} is {product}.")
print(f"The quotient of {num1} and {num2} is {quotient}.")

// ----------------------------------------
//  question 5


num1 = int(input("Enter the first number: "))

num2 = int(input("Enter the second number: "))

if num1 > num2:
    print(f"{num1} is greater than {num2}.")
elif num1 < num2:
    print(f"{num1} is less than {num2}.")
else:
    print(f"Both numbers are equal.")

// ----------------------------------------
//  question 6


num1 = int(input("Enter the first number: "))

num2 = int(input("Enter the second number: "))

if num1 > 0 and num2 > 0:
    print("Both numbers are positive.")
elif num1 > 0 or num2 > 0:
    print("Only one of the numbers is positive.")
else:
    print("Both numbers are not positive.")

// ----------------------------------------
//  question 7


grade = int(input("Enter your grade (0 - 100): "))

=print(f"Your grade is {grade}.")

// ----------------------------------------
//  question 8


grade = int(input("Enter your grade (0 - 100): "))

if grade >= 90 and grade <= 100:
    print("Your letter grade is A.")
elif grade >= 80:
    print("Your letter grade is B.")
elif grade >= 70:
    print("Your letter grade is C.")
elif grade >= 60:
    print("Your letter grade is D.")
else:
    print("Your letter grade is F.")

// ----------------------------------------
//  question 9


for i in range(1, 11):
    print(i)

// ----------------------------------------
//  question 10



num = 1
total = 0

while num <= 100:
    total += num   
    num += 1       

print(f"The sum of numbers from 1 to 100 is {total}.")


