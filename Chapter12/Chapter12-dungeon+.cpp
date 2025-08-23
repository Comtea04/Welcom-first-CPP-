// å�� �ڵ尡 ������, �� ������� ¥�ý��ϴ�. �ڿ� ���������� �� �ڵ带 ������� �ۼ��߽��ϴ�.
#include <iostream>
#include <vector>
#include <time.h>       // ����
#include <algorithm>    // max, min�Լ�

using namespace std;

// ���ӿ��� ��Ÿ���� ��������Ʈ
class Sprite {
protected:
    int x, y;
    char shape;
public:
    Sprite(int x, int y, char shape) : x(x), y(y), shape(shape) { }
    virtual void move(char d) = 0;

    // ��ü���� �浹 Ȯ��
    bool operator== (Sprite& s) {
        return (x == s.getX() &&
            y == s.getY());
    }

    int getX() const { return x; }
    int getY() const { return y; }
    char getShape() const { return shape; }
};

// �÷��̾� ��������Ʈ
class Hero : public Sprite {
public:
    Hero(int x, int y, char shape) : Sprite(x, y, 'H') { }
    void move(char d) {     // ���� ����� ��� ���X
        if (d=='a') x--;
        if (d=='s') y++;
        if (d=='w') y--;
        if (d=='d') x++;

        x = max(x, 0);
        x = min(x, 9);
        y = max(y, 0);
        y = min(y, 9);
    }
};

// �����ؾ� �ϴ� ���� ��������Ʈ
class Tresure : public Sprite {
public:
    Tresure(int x, int y, char shape) : Sprite(x, y, 'T') { }
    void move(char d) { }
};

// ���ؾ� �ϴ� �� ��������Ʈ
class Enemy : public Sprite {
public:
    Enemy(int x, int y, char shape) : Sprite(x, y, 'E') { }

    // ���� �̵�(�����ϰ�)
    void move(char d) {
        if (rand()%2 == 0) {
            x += rand()%3 - 1;
            x = max(x, 0);
            x = min(x, 9);
        }
        else {
            y += rand()%3 - 1;
            y = max(y, 0);
            y = min(y, 9);
        }
    }
};

class Board {
    char **board;
    int width;
    int height;
public:
    // ������
    Board(int w, int h) : width(w), height(h) {
        board = new char*[height];      // ���� �������� �Ҵ�
        for (int i=0; i<height; i++) {
            board[i] = new char[width]; // ���� �������� �Ҵ�
        }

        clear();
    }

    // �Ҹ���(���� �޸� ����)
    ~Board() {
        for (int i=0; i<height; i++) {
            delete[] board[i];
        }
        delete[] board;
    }

    // ���忡 �ݿ�
    void set(Sprite& s) {
        board[s.getY()][s.getX()] = s.getShape();
    }

    // ���� ���
    void print() {
        cout << endl;

        for (int i=0; i<height; i++) {
            cout << "\t";
            for (int j=0; j<width; j++) {
                cout << board[i][j] << " ";
            }
            cout << endl;
        }
    }

    // ���� �ʱ�ȭ
    void clear() {
        for (int i=0; i<height; i++) {
            for (int j=0; j<width; j++) {
                board[i][j] = '.';
            }
        }
    }

    int getWidth() const { return width; }
    int getHeight() const { return height; }
};

// ���� �������� Ȯ���ϴ� �Լ�
bool IfGameOver(Sprite* h, Sprite* e, Sprite* t) {
    if (h != nullptr && e != nullptr &&  *h==*e) {
        cout << "�������� �������ϴ�. ������ �����մϴ�" << endl;
        return true;
    }

    if (h != nullptr && t != nullptr &&  *h==*t) {
        cout << "������ ã�ҽ��ϴ�. ������ �����մϴ�" << endl;
        return true;
    }

    return false;
}

int main() {
    srand(time(NULL));

    // ���� ����
    Board board{10, 10};

    // ���͸� �̿��� ��������Ʈ ����
    // Hero�� Tresure�� �ε����� �� ��ġ�� Hero�� �־�� �ϹǷ� Hero�� Tresure���� ���߿� ����
    // Hero�� Enemy�� �ε����� �� ��ġ�� Enemy�� �־�� �ϹǷ� Enemy�� Hero���� ���߿� ����
    vector <Sprite *> list;
    list.push_back(new Tresure{board.getWidth()-1, board.getHeight()-1, 'T'});
    list.push_back(new Hero{0, 0, 'H'});
    list.push_back(new Enemy{3, 3, 'E'});

    // ���� ����
    while (true) {
        // ���� �ٽ� �׸���
        board.clear();
        for (Sprite* s : list) {
            board.set(*s);
        }
        board.print();

        // ���� ���� Ȯ��
        if (IfGameOver(list[1], list[2], list[0])) break;

        // ������� �Է� �ޱ�
        char direction;
        cout << "���� �����ϱ��(a, s, w, d): ";
        cin >> direction;

        // Hero��ü �̵�
        list[1]->move(direction);
        list[2]->move(direction);

        cout << endl << "------------------------------------------------------" << endl;
    }

    // list �� ���� �Ҵ� ����
    for (auto& e : list)
        delete e;
    list.clear();

    return 0;
}