#include<iostream>
using namespace std;

class Punto{
    private:
    int x,y;
    public:
    Punto(int x_, int y_)
    {
        x=x_;
        y=y_;

    }

    Punto(){
        x=0;
        y=0;
    }

    int leerX() const;
    int leerY() const;
    void fijarX(int valorX);
    void fijarY(int valorY);
};

int Punto::leerX() const{
    return x;
}

int Punto::leerY() const{
    return y;
}

void Punto::fijarX(int valorX){
    x=valorX;
}

void Punto::fijarY(int valorY){
    y=valorY;
}

int main(){
    Punto p1(2,1);
    Punto *p2=new Punto(3,2);
    cout<<p2->leerY()<<endl;
    cout<<p1.leerX()<<endl;
    system("pause");
    return 0;

}

