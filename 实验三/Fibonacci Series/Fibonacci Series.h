template<typename T>

int Fibonacci(T &fibref)
{
	T fib1 = 0, fib2 = 1, fib3;
	int num;

	for (num = 0; num >= 0; ++num)
	{
		fib3 = fib1 + fib2;
		if (fib3 < fib2 || fib3 == fib3 + fib2)
		{
			cout << "溢出项：" << num << endl;
			cout << "此时的斐波那契数列值为：" << fib2;
			num--;
			break;
		}
		else
		{
			fib1 = fib2;
			fib2 = fib3;
		}

	}

	fibref = fib2;
	return num;
}
