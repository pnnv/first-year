#include <bits/stdc++.h>
using namespace std;

class Complex {
private:
  int real, imag;

public:
  Complex(int r = 0, int i = 0) {
    real = r;
    imag = i;
  }

  // This is automatically called when '+' is used with
  // between two Complex objects
  Complex operator+(Complex obj) {
    Complex res;
    res.real = real + obj.real;
    res.imag = imag + obj.imag;
    return res;
  }

  Complex operator-(Complex obj) {
    Complex res;
    res.real = real - obj.real;
    res.imag = imag - obj.imag;
    return res;
  }

  Complex addto(Complex C) {
    Complex result;
    result.real = real + C.real;
    result.imag = imag + C.imag;
    return result;
  }
  operator float() {
    return pow(real*real + imag*imag, 0.5);
  }


  void print() { cout << real << " + i" << imag << '\n'; }
};

int main() {
  Complex c1(10, 6), c2(2, 4);

  Complex c3 = c1 + c2;
  c3.print();
  c3 = 100;
  c3.print();

  
  c1.addto(c2).print();

  Complex c4 = c1 - c2;
  c4.print();


  float mag = c3;
  cout << mag << endl;
}