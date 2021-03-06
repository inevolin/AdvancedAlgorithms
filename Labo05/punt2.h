#include <iostream>
#include <iomanip>
using std::setw;
struct punt2 {
    int x, y;

	bool Xsplit;
	punt2* puntL;
	punt2* puntR;
	punt2* puntParent;

    punt2() {}
    punt2(int _x, int _y) : x(_x), y(_y) {}
    punt2(const punt2& p):x(p.x),y(p.y){}
    void set(int _x, int _y) { x = _x; y = _y; }
    bool operator==(const punt2& p) const{
        return p.x==x && p.y==y;
    }
    friend std::ostream& operator<<(std::ostream& os, const punt2 p2){
        return os<<"("<<p2.x<<","<<p2.y<<")";
    }
    unsigned int kwadafstand(const punt2& p) const{
        return (p.x-x)*(p.x-x) + (p.y-y)*(p.y-y);
    }
};

