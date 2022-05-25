class Processor
{
public:
	Processor(const Processor&) = delete;

	static Processor& Get() {
		static Processor instance;
		return instance;
	}
	
	static double Add(double x, double y) { return Get().IAdd(x,y); }
	static double Subtract(double x, double y) { return Get().ISubtract(x,y); }
	static double Multiply(double x, double y) { return Get().IMultiply(x,y); }
	static double Divide(double x, double y) { return Get().IDivide(x,y); }
	static double Mod(int x, int y) { return Get().IMod(x,y); }

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