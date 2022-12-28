
class Box
{
private:
    double height;
    double width;
    double depth;

public:
    //setters
    void setHeight(double newheight);
    void setWidth(double newwidth);
    void setDepth(double newdepth);

    //getters
    double getHeight();
    double getWidth();
    double getDepth();

    //constructors
    Box();
    Box(double h, double w, double d);
    Box(const Box&);

    //destructor
    ~Box();

    // methods
    double volume();
};