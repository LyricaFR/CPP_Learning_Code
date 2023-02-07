#pragma once

#include <ostream>

class Rectangle
{
public:
    static void set_default_size(float size);

    // Rectangle(float length, float width)
    //     : _length { length }
    //     , _width { width }
    // {}

    float get_length() const { return _length; }
    float get_width() const { return _width; }

    Rectangle(float length, float width);
    Rectangle(float length);
    Rectangle();
    void scale(float ratio);
    // void scale(float ratio)
    // {
    //     _length *= ratio;
    //     _width *= ratio;
    // }

private:
    static float _default_size;
    float        _length;
    float        _width;
};

std::ostream& operator<<(std::ostream& stream, const Rectangle& rect);
