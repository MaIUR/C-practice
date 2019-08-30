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

## 实验四
    1．掌握数组：一种构造数据结构
    2．掌握对数组的声明、初始化、访问、保存的方法
    3．掌握把数组作为参数进行传递的方法
    4．掌握基本的排序和查找的方法
    5．掌握多维数组的基本操作方法
    6．编写C++程序：对数组元素的访问、对数组的基本操作、排序和查找
    7．掌握标准类模板vector的基本使用方法
    
### one-dimensional array
* 用一维数组解决下列问题。公司按佣金为员工发工资，销售员每周发 20美元加上本周总销售额的9％。例如，如果某个销售员本周总销售额为5000 美元，则发200+9％*5000＝650 美元。编写一个程序(用计数器数组：数组的每一个元素都是一个计数器)确定工资在下列范围的员工数(假设将每个销售人员的工资取整)：$200～$299
a. $300～399
b. $400～499
c. $500～$599
d. $600～$699
e. $700～$799
f. $800～$899
g. $900～$999
h. $1000 and over

* Use a one-dimensional array to solve the following problem. A company pays its salespeople on a commission basis. The salespeople each receive $200 per week plus 9 percent of their gross sales for that week. For example, a salesperson who grosses $5000 in sales in a week receives $200 plus 9 percent of $5000, or a total of $650. Write a program (using an array of counters) that determines how many of the salespeople earned salaries in each of the following ranges (assume that each salesperson's salary is truncated to an integer amount):

### Bubble Sort
* 在冒泡排序算法中，较小的值会像“泡泡”一样逐渐交换升至数组的起始位置，而较大的数值会下沉至数组的尾端。整个冒泡排序过程将对数据进行多遍的处理，在每一次处理过程中，依次比较每一对相邻的两个元素：如果这两个元素本来就是升序排列（或者值相等），则保持不动，否则将它们的值进行交换。
    1. 写一个程序实现对10 个元素的冒泡排序，10 个元素应该进行9 遍排序操作。
    2. 为了提高冒泡排序算法处理大数组时的性能，进行如下两点修改：
        · 在第一遍排序结束后，最大的数已能确保在数组的最后一个位置；而两遍排序后，最大的两个数可以确保在数组的最后两个位置。以此类推，并不是每遍排序都需要比较所有元素：第一遍10 个元素，第二遍9 个元素，等等。
        · 如果某一遍排序过程中，没有对数据作任何交换操作，那么说明整个数组已经排序完毕。考虑下10 个元素的数组，是否一定需要进行9遍排序？
        
* Bubble Sort In the bubble sort algorithm, smaller values gradually "bubble" their way upward to the top of the array like air bubbles rising in water, while the larger values sink to the bottom. The bubble sort makes several passes through the array. On each pass, successive pairs of elements are compared. If a pair is in increasing order (or the values are identical), we leave the values as they are. If a pair is in decreasing order, their values are swapped in the array.
    1. Write a program that sorts an array of 10 integers using bubble sort.
    2. The bubble sort described above is inefficient for large arrays. Make the following simple modifications to improve the performance of the bubble sort:
        · After the first pass, the largest number is guaranteed to be in the highest-numbered element of the array; after the second pass, the two highest numbers are "in place," and so on. Instead of making nine comparisons on every pass, modify the bubble sort to make eight comparisons on the second pass, seven on the third pass, and so on.
        · The data in the array may already be in the proper order or near-proper order, so why make nine passes if fewer will suffice? Modify the sort to check at the end of each pass if any swaps have been made. If none have been made, then the data must already be in the proper order, so the program should terminate. If swaps have been made, then at least one more pass is needed.
        
### double-subscripted array
* 采用二维数组解决问题。某公司有4 位销售员(1 到4)，销售5 种不同的商品(1 到5)。每个销售人员每天要送0 到5 份报告。假设上个月的这些信息都有，编与一个程序，读取上月销售情况的信息，并按每个销售人员和每种产品送行汇总。所有汇总存放在双下标数组sales。处理上个月的所有信息后，将结果打印成表格形式，每行表示一个销售员，每列表示一种产品。通过“行求和”、“列求和”求出上月每个销售人员的总销售额和每种产品的总销售额。表格输出的最右边统计行的和，最下边统计列的和，打印统计结果。所有数据存储在一个sales 的二维数组，其中，列代表产品，列下标代表产品编号；行代表销售员，行下标代表销售员编号；列的和：每件产品的总销售额；行的和：每位销售员所销售产品的总销售额。

* A company has four salespeople (1 to 4) who sell five different products (1 to 5). Once a day, each salesperson passes in a slip for each different type of product sold. Each slip contains the following:
    a) The salesperson number
    b) The product number
    c) The total dollar value of the product sold that day
Thus, each salesperson passes in between 0 and 5 sales slips per day. Assume that the information from all of the slips for last month is available. Write a program that will read all this information for last month’s sales and summarize the total sales by salesperson by product. All totals should be stored in the double-subscripted array SALES. After processing all the information for last month, print the results in tabular format with each of the columns representing a particular salesperson and each of the rows representing a particular product. Cross total each row to get the total sales of each procudt for last month; cross total each column to get the total sales by salesperson for last month. Your tabular printout should include these cross totals to the right of the totaled rows and to the bottom of the totaled columns.

### The Sieve of Eratosthenes
* 质数是只能被 1 和本身整除的数。Eratosthenes 筛选法是一种寻找质数的方法，它的操作如下：
    a)创建一个数组，将所有元素初始化为1(真)。下标为质数的数组元素保持1，所有其它元素最终设置为0。
    b)从数组下标2 开始，每次找到数值为1 的数组元素时，对数组的剩余部分循环，并将下标为该下标倍数的元素设置为0；对于数组下标2，数组2 之后的下标2 的倍数的元素(除2 本身，如4、6、8、10 等等)都设置为0；对于数组下标3，数组中下标为3 的倍数的所有元素(除3 本身，如3、6、9、12、15 等等)都设置为0；依次类推。
这个过程完成之后，如果数组元素还是1，则下标为质数。这些下标可以打印出来。编写一个程序，利用1000 个元素的数组确定和打印2 到999 之间的质数，忽略数组中的元素0。

* A prime integer is any integer that is evenly divisible only by itself and 1. The Sieve of Eratosthenes is a method of finding prime numbers. It operates as follows:
    a. Create an array with all elements initialized to 1 (true). Array elements with prime subscripts will remain 1. All other array elements will eventually be set to zero. You will ignore elements 0 and 1 in this exercise.
    b. Starting with array subscript 2, every time an array element is found whose value is 1, loop through the remainder of the array and set to zero every element whose subscript is a multiple of the subscript for the element with value 1. For array subscript 2, all elements beyond 2 in the array that are multiples of 2 will be set to zero (subscripts 4, 6, 8, 10, etc.); for array subscript 3, all elements beyond 3 in the array that are multiples of 3 will be set to zero (subscripts 6, 9, 12, 15, etc.); and so on. When this process is complete, the array elements that are still set to one indicate that the subscript is a prime number. These subscripts can then be printed. Write a program that uses an array of 1000 elements to determine and print the prime numbers between 2 and 999. Ignore element 0 of the array.
    
### Selection Sort
* 查找数组中的最小元素。然后将最小元素与数组中第一个元素交换。从第二个数组元素开始的子数组重复这个过程。每一次都把一个元素放到正确的位置。这种排序与冒泡排序相似，对于n 个元素的数组，要n-1 遍，对每个子数组，要用n-1 次比较以求得最小值。处理包含1 个元素的子数组时，数组已经排序完毕。编写递归函数selectionsort，完成这个算法。

* selection sort searches an array looking for the smallest element. Then, the smallest element is swapped with the first element of the array. The process is repeated for the subarray beginning with the second element of the array. Each pass of the array results in one element being placed in its proper location. This sort performs comparably to the insertion sortfor an array of n elements, n 1 passes must be made, and for each subarray, n 1 comparisons must be made to find the smallest value. When the subarray being processed contains one element, the array is sorted. Write recursive function selectionSort to perform this algorithm.

### Linear Search
* 修改图 7.19，用递归函数 LinearSearch 对数组进行线性查找，函数应收到“整型数组”和“数组长度”参数。如果找到查找键，则返回数组下标，否则返回-1。

* Modify the program in Fig. 7.19 to use recursive function linearSearch to perform a linear search of the array. The function should receive an integer array and the size of the array as arguments. If the search key is found, return the array subscript; otherwise, return -1.

### Print a string backward
* 编写递归函数 stringReverse，取包含字符串的字符数组参数，逆向打印字符串且不返回任何内容。函数在收到null 终止符时停止处理并返回。

* Write a recursive function stringReverse that takes a character array containing a string and a starting subscript as arguments, prints the string backward and returns nothing. The function should stop processing and return when the terminating null character is encountered.

### Find the minimum value in a vector
* 寻找 vector 中的最小值，编写递归程序 recursiveMiniMum， vector 对象作为参数并返回vector 中的最小元素，当函数在收到长度为1 的数组时停止处理并返回。

* Modify your solution to Exercise 7.37 to find the minimum value in a vector instead of an array.
