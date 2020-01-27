#include <iostream>
using namespace std;
class base
{
   public:
      base(int n=0) : a(n) {}
      int geta() const { return a; }
      void seta(int n) { a = n; }
   private: 
      int a;
};
class derived1 : public base
{
   public:
      derived1(int n1=0, int n2=0) : base(n1), b(n2) {}
      int getb() const { return b; }
      void setb(int n) { b = n; }
   private: 
      int b;
};
class derived2 : public base
{
   public:
      derived2(int n1=0, int n2=0) : base(n1), c(n2) {}
      int getc() const { return c; }
      void setc(int n) { c = n; }
   private: 
      int c;
};
// Deadly Diamond of Derivation
class multi : public derived1, public derived2
{
   public:
      multi(int n1=0, int n2=0, int n3=0, int n4=0) :
         derived1(n1,n2), derived2(n1,n3), d(n4) {}
      int getd() const { return d; }
      void setd(int n) { d = n; }
   private:
      int d;
};
int main()
{
   multi d(10,20,30,40);
   cout << d.geta() << ' ' << d.getb() << ' ' << d.getc() << ' '
        << d.getd() << endl;
   return 0;
}

