// Memory Layout of Simple Object

class Shape {
    float area;
    float perimeter;
public:
    Shape(){}
    ~Shape(){}
    void GetArea(float side){}
    void GetPerimeter(float side){}
};

int main(){
    Shape obj;

return 0;
}

/*  Memory Layout : 
Stack Segment:
    1. area
    2. perimeter
    3. side

Text Segment:
    1. Shape()
    2. ~Shape()
    3. GetArea(float side)
    4. GetPerimeter(float side)
*/