    #include <iostream>

    using namespace std;

    class Circle {
        int radius;
    public:
        Circle() :radius(10) { }
        ~Circle() { }
        void setRadius(int radius) { this->radius = radius; }
        int getRadius() const { return radius; }
    };

    int main() {
        int n;
        cout << "생성할 원의 개수: ";
        cin >> n;

        Circle* p = new Circle[n];

        for (int i=0; i<n; i++) {
            int tmp;
            cout << "원 " << i+1 << "의 반지름 >> ";
            cin >> tmp;

            p[i].setRadius(tmp);
        }

        int cnt=0;
        for (int i=0; i<n; i++) {
            Circle c = p[i];
            if ((c.getRadius())*(c.getRadius())*3.141592 > 100) cnt++;
        }

        cout << "면적이 100보다 큰 원은 " << cnt << "개 입니다" << endl;

        delete[] p;

        return 0;
    }