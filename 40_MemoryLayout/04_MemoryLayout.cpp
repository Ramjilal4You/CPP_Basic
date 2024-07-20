// Object with Multiple inheritances and virtual functions

class Shape {
    float area;
public:
    Shape(){}
    virtual ~Shape(){}
    virtual float GetArea(float side){}
};

class Square {
    float area;
public:
    Square(){}
    ~Square(){}
    virtual float GetArea(float side){}
};

class TempShape : public Square, public Shape {
    float area;
public:
    TempShape(){}
    ~TempShape(){}
    float GetArea(float side){}
};

/*  Memory Layout : 

** An object of TempSape class memory layout:

Stack:
    1. Shape::area
    2. Square::area
    3. TempShape::area
    4. Shape::_vptr
    5. Square::_vptr

Text:
    1. TempShape()
    2. ~TempShape()
    3. Square()
    4. ~Square()
    5. Shape()
    6. ~Shape()

** Here if you see the object of TempSpace contains two vptr.
*/