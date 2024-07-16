// Object with inheritance
class Shape {
    float area;
public:
    Shape();
    virtual ~Shape();
    virtual float GetArea(float side);
};

class Square : Shape {
    float area;
public:
    Square();
    ~Square();
    float GetArea(float side);
};

/*  Memory Layout : 
Stack:
    1. Square::area
    2. Shape::_vptr
    3. Shape::area

Text Segment:
    1. Square()
    2. ~Squre()
    3. Square::GetArea()
    4. Shape()
    5. ~Shape()
    6. Shape::GetArea()

** The virtual table will be created as part of a constructor call to base class Shape and 
   the table will contain the address of virtual functions that are overridden.
*/