# C++ practice
2017.9-2018.6，东南大学程序设计语言课程项目练习。

【注：仅供参考，还是鼓励大家自己去完成实验哦~】

## 实验一

### Date类
* 创建一个Date类，包括三个数据成员( month (int型)、day(int型)、year(int型))。该类必须包括一个具有3个参数的构造函数，它使用这些参数初始化前述的3个数据成员。假定提供给年和日的值是正确的，但要保证月的值在1~12的范围内；如果该值不在此范围，那么将月设置为1。对于每个数据成员都提供一个设置函数set和获取get函数。提供一个成员函数displayDate，显示用正斜线(/)分隔的月、日和年的值。编写一个测试程序，演示Date类的性能。

* Create a class called `Date` that includes three pieces of information as data member -- a month (type `int`), a day (type `int`) and a year (type `int`). Your class should have a constructor with three parameters that uses the parameters to initialize the three data members. For the purpose of this exercise, assume that the values provide for the year and day are correct, but ensure that the month value is in the range 1-12; if it is not, set the month to 1. Provide a set and a get function for each data member. Provide a member function `displayDate` that the month, day and year separated by forward slashes (/). Write a test program that demonstrates class `Date`’s capabilities.

### Account类
* Create a class called Account that a bank might use to represent customers' bank accounts. Your class should include **one data member** of type int to represent the account **balance**. Your class should provide **a constructor** that receives an initial balance and uses it to initialize the data member. The constructor should validate the initial balance to ensure that it is greater than or equal to 0. If not, the balance should be set to 0 and the constructor should display an error message, indicating that the initial balance was invalid. The class should provide **three member functions**. Member function `credit` should add an amount to the current balance. Member function `debit` should withdraw money from the Account and should ensure that the debit amount does not exceed the Account's balance. If it does, the balance should be left unchanged and the function should print a message indicating "Debit amount exceeded account balance." Member function `getBalance` should return the current balance. Create a program that creates two Account objects and tests the member functions of class Account.

## 实验二
    1.掌握“自顶向下，逐步求精”的结构化编程方法
    2．编写C++程序：if语句、if/else语句、switch语句
    3．编写C++程序：while语句、do…while语句、for语句
    4．掌握计数器控制和标记控制两种循环
    5．理解自增、自减和逻辑运算符
    6．应用break和continue程序控制跳转语句

### Account Class Plus
* Develop a C++ program that will determine whether a department-store customer has exceeded the credit limit on a charge account. For each customer, the following facts are available:
    * Account number (an integer)
    * Balance at the beginning of the month
    * Total of all items charged by this customer this month
    * Total of all credits applied to this customer’s account this month
    * Allowed credit limit
* The program should use a while structure to input each of these facts, calculate the new balance (= beginning balance + charges - credits) and determine whether the new balance exceeds the customer’s credit limit. For those customers whose credit limit is exceeded, the program should display the customer’s account number, credit limit, new balance and the message “Credit limit exceeded”.

### Palindrome
* A palindrome is a number or a text phrase that reads the same backwards as forwards. For example, each of the following five-digit integers is a palindrome: 12321, 55555, 45554 and 11611. Write a program that reads in a five-digit integer and determines whether it is a palindrome. [Hint: Use the division and modulus operators to separate the number into its individual digits.]

### n factorial
The factorial of a nonnegative integer n is written n! (pronounced "n factorial") and is defined as follows:

      n! = n · (n-1) · (n-2) · ... · 1 (for values of n greater than to 1)
    
and

      n! = 1 (for n = 0 or n = 1)
    
For example, 5! = 5 · 4 · 3 · 2 · 1, which is 120. Use while statements in each of the following:
Write a program that reads a nonnegative integer and computes and prints its factorial.
Write a program that estimates the value of the mathematical constant e by using the formula:

      e = 1 + 1/1! + 1/2! + ...
      
Prompt the user for the desired accuracy of e (i.e., the number of terms in the summation).
Write a program that computes the value of ex by using the formula:

      exp{x} = 1 + x/1! + x^2/2! + x^3/3! + ...
      
Prompt the user for the desired accuracy of e (i.e., the number of terms in the summation).

### calculate Π
Calculate the value of p from the infinite series

      Π = 4 - 4/3 + 4/5 - 4/7 + 4/9 - 4/11 + ...
Print a table that shows the approximate value of p after each of the first 1,000 terms of this series.

### diamond shape
Write a program that prints the following diamond shape. You may use output statements that print either a single asterisk (*) or a single blank. Maximize your use of repetition (with nested for statements) and minimize the number of output statements.
