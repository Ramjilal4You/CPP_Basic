// Object with virtual and static members
class Shape {
    float area;
    float perimeter;
    static double PI;
public:
    Shape(){}
    virtual ~Shape(){}
    virtual void GetArea(float side){}
    void GetPerimeter(float side){}
    static void GetPI(){}
};
double Shape::PI=10;

//static double PI2[5];
int main(){
    Shape obj;

return 0;
}

/*  Memory Layout : 
Stack:
    1. area
    2. Perimeter
    3. _vptr

Data Segment:
    1. Static Shape::PI

Text Segment:
    1. Shape()
    2. ~Shape()
    3. GetArea(float side)
    4. GetPerimeter(float side)
    5. Static Shape::GetPI()

** Here as you can see the static member variable goes into the Data Segment.
** The static function goes into the Same text segment as other function but here this pointer won't be passed.
** In the case of virtual members, a virtual pointer is added to the stack which points to a virtual table which contains:
    1. type_info — Contains information related to the current class and other classes if it is derived from one.
    2. Address of virtual function:
        1. ~Shape()
        2. GetArea()
*/