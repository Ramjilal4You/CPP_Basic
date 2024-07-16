// Memory Layout of Simple Object

class Shape {
    float area;
    float perimeter;
public:
    Shape();
    ~Shape();
    float GetArea(float side);
    float GetPerimeter(float side);
};

/*  Memory Layout : 
Stack Segment:
    1. area
    2. perimeter
Text Segment:
    1. Shape()
    2. ~Shape()
    3. GetArea(float side)
    4. GetPerimeter(float side)
*/