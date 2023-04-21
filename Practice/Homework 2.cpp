#include <iostream>
using namespace std;

class Point{
private:
    double x, y;
public:
    Point() : x{drand48() * 10}, y{drand48() * 10}{}
    void print() const{
        printf("(%.2f, %.2f)", x, y);
    }
    static double sqr(double d){return d*d;}
    double distance(const Point &print){
        return sqrt(sqr(x-point.x) + sqr(y - point.y));
    }
};

int main(){
    
}

class Poligon{
private:
    int *n;
    Point*vertices;
public:
    explicit Poligon(int n): n{n}, vertices{new Point[n]}{}
    Poligon(const Poligon &poligon) : n {poligon.n}, vertices{new Point[n]}{
        
    }
    
};
