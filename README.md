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

## 实验三
    1．掌握模块化构建程序的方法
    2．掌握函数定义、函数声明、参数传递的方法
    3．掌握利用随机数生成机制实现模拟技术
    4．编写C++程序：函数调用和递归调用
    5．理解作用域的概念，以及标识符是如何被限制在程序的特定区域中
    6．理解参数传递中传值调用与传引用调用之间的区别，何时应用传值调用，何
       时应用传引用调用
       
 ### graphs
 * 分别用三个函数实现绘制正方形(square)、菱形(diamond)、三角形(triangle)，在main 函数中用循环结构嵌套switch 结构实现对各种图形函数的调用测试。
 
 * Use techniques similar to those developed in 6.22 and 6.23 to produce a program that graphs a wide range of shapes.
 
 ### Perfect Numbers
 * 一个完全数是这样的一个整数，它的所有因子（包含1 但不包含该数本身）的和恰好等于该数本身。举个例子，6 是一个完全数，因为6=1+2+3。编写一个函数perfect(bool 类型返回值)，用它来判断该函数的形式参数是否为一个完全数。在程序中调用该函数，找出1 至1000 这个范围内所有的完全数并打印出来。并且将这些找出来的完全数的因子打印出来，用来确认该数确实是一个完全数。你可以通过测试数值在1000 以上的完全数来挑战你计算机的能力。
 
 * An integer is said to be a perfect number if the sum of its factors, including 1 (but not the number itself), is equal to the number. For example, 6 is a perfect number, because 6 = 1 + 2 + 3. Write a function perfect that determines whether parameter number is a perfect number. Use this function in a program that determines and prints all the perfect numbers between 1 and 1000. Print the factors of each perfect number to confirm that the number is indeed perfect. Challenge the power of your computer by testing numbers much larger than 1000.
 
 ### PrimeNumbers
 * 一个质数是这样的一个整数，它只能被1 和该数本身整除。举个例子，2，3，4，7 是质数，而4，6，8，9 不是质数。
   1.编写一个函数来判断一个数是否为质数。
   2.在程序中调用这个函数，找出2至10000这个范围内所有的质数并且打印出来。在你确认找出所有质数之前你测试了多少次呢？
   3.最初，你可能认为判断一个数是否为质数的测试次数上限为n/2，但实际你需要的测试次数的上限只是n 的平方根。这是为什么呢？重新编写这个程序，分别在这两种方式下运行，并观察出性能的改进。
   
 * An integer is said to be prime if it is divisible by only 1 and itself. For example, 2, 3, 5 and 7 are prime, but 4, 6, 8 and 9 are not.
    1. Write a function that determines whether a number is prime.
    2. Use this function in a program that determines and prints all the prime numbers between 2 and 10,000. How many of these numbers do you really have to test before being sure that you have found all the primes?
    3. Initially, you might think that n/2 is the upper limit for which you must test to see whether a number is prime, but you need only go as high as the square root of n. Why? Rewrite the program, and run it both ways. Estimate the performance improvement.
    
### GCD
* 两个整型数的最大公约数(The greatest common divisor, GCD)定义为最大的整除这两个整数的数。编写gcd 函数，返回两个整型数的最大公约数。

* The greatest common divisor (GCD) of two integers is the largest integer that evenly divides each of the numbers. Write a function GCD that returns the greatest common divisor of two integers.

### power
* 编写一个递归函数power ( base, exponent )，当函数被调用时，返回base ^ exponent.例如，power( 3, 4 ) = 3 * 3 * 3 * 3。假设指数exponent 是一个大于或等于0 的整数。提示：递归步骤使用关系式base ^ exponent = base · base ^ (exponent - 1)和当指数exponen = 1时，递归终止条件发生，因为此时base^1 = base。

### Fibonacci Series
* 0, 1, 1, 2, 3, 5, 8, 13, 21, ...
从数值0 和1 开始，具有每一项斐波那契数列的值是前两项斐波那契数列的值之和的性质。（a）编写一个非递归函数fibonacci( n )计算第n 项斐波那契数列的值。（b）确定能打印输出在你系统中的最大的斐波那契数列的整型值。修改（a）部分的程序，使用double类型的值代替int型的值来计算和返回斐波那契数列的值，并且使用这修改过的程序来实现（b）部分的功能。

* The Fibonacci series
0, 1, 1, 2, 3, 5, 8, 13, 21, ...
begins with the terms 0 and 1 and has the property that each succeeding term is the sum of the two preceding terms. (a) Write a nonrecursive function fibonacci( n ) that calculates the nth Fibonacci number. (b) Determine the largest int Fibonacci number that can be printed on your system. Modify the program of part (a) to use double instead of int to calculate and return Fibonacci numbers, and use this modified program to repeat part (b).

### Recursive Greatest Common Divisor
* 整数x 和y 的最大公约数是能同时被x 和y 整除的最大整数。编写一个函数gcd（），返回x 和y 的最大公约数，定义递归如下：假如y=0，gcd( x, y )=x；否则，gcd( x, y )= gcd( y, x % y )，这里的%是求模运算符。[注：对于此算法，x 必须大于y。]

* The greatest common divisor of integers x and y is the largest integer that evenly divides both x and y. Write a recursive function gcd that returns the greatest common divisor of x and y, defined recursively as follows: If y is equal to 0, then gcd( x, y ) is x; otherwise, gcd( x, y ) is gcd( y, x % y ), where % is the modulus operator. [Note: For this algorithm, x must be larger than y.]
