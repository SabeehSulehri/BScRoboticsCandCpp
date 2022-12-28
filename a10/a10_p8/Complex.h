
class Complex
{
private:
    int real;
    int imaginary;

public:
    //Constructors
    Complex();
    Complex(int r, int i=0);
    Complex(const Complex&);

    //Destructor
    ~Complex();

    //setters
    void setReal(int newreal);
    void setImaginary(int newimaginary);

    //getters
    int getReal();
    int getImaginary();

    //methods
    void print();

    //mathemethods
    Complex conjugate();
    Complex sum(Complex);
    Complex difference(Complex);
    Complex multiplication(Complex);
};