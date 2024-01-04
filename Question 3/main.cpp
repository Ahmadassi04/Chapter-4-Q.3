#include <iostream>

double height(double h, int x){

    double g {9.8};
    double d;
    d = (g * (x*x)) / 2.0;

    double a = h - d;

    return a;
}

void printBallHeight(double ballHeight, int x)
{
	if (ballHeight > 0.0)
		std::cout << "At " << x << " seconds, the ball is at height: " << ballHeight << " meters\n";
	else
		std::cout << "At " << x << " seconds, the ball is on the ground.\n";
}

void calculate(double h, int x)
{
	double ballHeight{ height(h, x) };
	printBallHeight(ballHeight, x);
}

int main(){

    std::cout << "Enter the height of the tower in meters: ";
    int h{};
    std::cin >> h;

    calculate(h,0);
    calculate(h,1);
    calculate(h,2);
    calculate(h,3);
    calculate(h,4);
    calculate(h,5);

    return 0;
}
