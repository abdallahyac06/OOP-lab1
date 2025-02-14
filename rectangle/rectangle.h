#ifndef rectangle_H
#define rectangle_H

class Rectangle {
    private:
        float width;
        float length;
    public:
        Rectangle();
        Rectangle(float,float);
        float getWidth() const;
        float getLength() const;
        void setWidth(float);
        void setLength(float);
        float area() const;
        float perimeter() const;
        ~Rectangle();
};

#endif