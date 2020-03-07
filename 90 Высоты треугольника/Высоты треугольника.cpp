#include <stdio.h>
#include <math.h>
 
class Shape
{
protected:
  double *ptr;
  int size;
public:
  Shape(int size = 0) : size(size)
  {
    ptr = new double[size];
  }
  ~Shape()
  {
    delete[] ptr;
  }
};
 
class Triangle : public Shape
{
public:
  Triangle() : Shape(3) {};
 
  void ReadSides(void)
  {
    for(int i = 0; i < size; i++)
      scanf("%lf",ptr+i);
  }
 
  double Perimeter(void)
  {
    double p = 0;
    for(int i = 0; i < size; i++)
      p += ptr[i];
    return p;
  }
 
  double Area(void)
  {
    double p = Perimeter() / 2;
    return sqrt(p * (p - ptr[0]) * (p - ptr[1]) * (p - ptr[2]));
  }
 
  double* GetHeights(void)
  {
    double s = Area();
    double *ptr  = new double[size];
    for(int i = 0; i < size; i++)
      ptr[i] = 2 * s / this->ptr[i];
    return ptr;
  }
};
 
int main(void)
{
  Triangle tri;
  tri.ReadSides();
  double *h = tri.GetHeights();
  printf("%.2lf %.2lf %.2lf\n",h[0],h[1],h[2]);
  delete[] h;
  return 0;
}