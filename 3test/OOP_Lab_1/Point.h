#include <string> 
#include <sstream> 
using namespace std;

class Point
{
private:
	int numerator;
	int denominator;
	
public:
	int GetFirst() const { return numerator; }
	int GetSecond() const { return denominator; }
	bool Init(int f, int s);
	void Read();
	void Display() const;
	Point(int, int);
	Point(const Point&);
	~Point();
	void reduced();
	double product();
};


