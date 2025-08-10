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
        cout << "������ ���� ����: ";
        cin >> n;

        Circle* p = new Circle[n];

        for (int i=0; i<n; i++) {
            int tmp;
            cout << "�� " << i+1 << "�� ������ >> ";
            cin >> tmp;

            p[i].setRadius(tmp);
        }

        int cnt=0;
        for (int i=0; i<n; i++) {
            Circle c = p[i];
            if ((c.getRadius())*(c.getRadius())*3.141592 > 100) cnt++;
        }

        cout << "������ 100���� ū ���� " << cnt << "�� �Դϴ�" << endl;

        delete[] p;

        return 0;
    }