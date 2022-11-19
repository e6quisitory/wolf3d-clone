#pragma once

class ivec2 {
public:
    ivec2(int x, int y): e{x,y} {}
    ivec2(): e{0,0} {}

    int& x() { return e[0]; };
    int& y() { return e[1]; };
    int x() const { return e[0]; };
    int y() const { return e[1]; };

public:
    int e[2];
};

using ipoint2 = ivec2;

inline std::ostream& operator << (std::ostream& out, const ivec2& v) {
    return out << "[" << v.x() << ", " << v.y() << "]";
}