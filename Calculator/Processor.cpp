class Processor
{
public:
	Processor(const Processor&) = delete;

	static Processor& Get() {
		static Processor instance;
		return instance;
	}
	
	static double Add() { return Get().IAdd(); }
	static double Subtract() { return Get().ISubtract(); }
	static double Multiply() { return Get().IMultiply(); }
	static double Divide() { return Get().IDivide(); }
	static double Mod() { return Get().IMod(); }

private:
	double IAdd(double first = 0, double second = 0) {
		return first + second;
	}

	double ISubtract(double first = 0, double second = 0) {
		return first - second;
	}

	double IMultiply(double first = 0, double second = 0) {
		return first * second;
	}
	
	double IDivide(double first = 0, double second = 0) {
		return first / second;
	}
	
	double IMod(int first = 0, int second = 0) {
		return first % second;
	}

	Processor() {}
};