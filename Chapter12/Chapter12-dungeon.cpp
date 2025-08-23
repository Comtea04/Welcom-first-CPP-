// 책에 코드가 있지만, 제 나름대로 짜봤습니다. 뒤에 도전문제는 제 코드를 기반으로 작성했습니다.
#include <iostream>
#include <vector>

using namespace std;

// 게임에서 나타나는 스프라이트
class Sprite {
protected:
    int x, y;
    char shape;
public:
    Sprite(int x, int y, char shape) : x(x), y(y), shape(shape) { }
    virtual void move(char d) = 0;

    // 객체끼리 충돌 확인
    bool operator== (Sprite& s) {
        return (x == s.getX() &&
            y == s.getY());
    }

    int getX() const { return x; }
    int getY() const { return y; }
    char getShape() const { return shape; }
};

// 플레이어 스프라이트
class Hero : public Sprite {
public:
    Hero(int x, int y, char shape) : Sprite(x, y, 'H') { }
    void move(char d) {     // 보드 벗어나는 경우 고려X
        if (d=='a') x--;
        if (d=='s') y++;
        if (d=='w') y--;
        if (d=='d') x++;
    }
};

// 도달해야 하는 보물 스프라이트
class Tresure : public Sprite {
public:
    Tresure(int x, int y, char shape) : Sprite(x, y, 'T') { }
    void move(char d) { }
};

// 피해야 하는 적 스프라이트
class Enemy : public Sprite {
public:
    Enemy(int x, int y, char shape) : Sprite(x, y, 'E') { }
    void move(char d) { }
};

class Board {
    char **board;
    int width;
    int height;
public:
    // 생성자
    Board(int w, int h) : width(w), height(h) {
        board = new char*[height];      // 행을 동적으로 할당
        for (int i=0; i<height; i++) {
            board[i] = new char[width]; // 열을 동적으로 할당
        }

        clear();
    }

    // 소멸자(동적 메모리 해제)
    ~Board() {
        for (int i=0; i<height; i++) {
            delete[] board[i];
        }
        delete[] board;
    }

    // 보드에 반영
    void set(Sprite& s) {
        board[s.getY()][s.getX()] = s.getShape();
    }

    // 보드 출력
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

    // 보드 초기화
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

int main() {
    Board board{10, 10};

    // 벡터를 이용해 스프라이트 저장
    // Hero가 Tresure에 부딪히면 그 위치에 Hero가 있어야 하므로 Hero를 Tresure보다 나중에 생성
    // Hero가 Enemy에 부딪히면 그 위치에 Enemy가 있어야 하므로 Enemy를 Hero보다 나중에 생성
    vector <Sprite *> list;
    list.push_back(new Tresure{board.getWidth()-1, board.getHeight()-1, 'T'});
    list.push_back(new Hero{0, 0, 'H'});
    list.push_back(new Enemy{3, 3, 'E'});

    while (true) {
        // 보드 다시 그리기
        board.clear();
        for (Sprite* s : list) {
            board.set(*s);
        }
        board.print();

        // 사용자의 입력 받기
        char direction;
        cout << "어디로 움직일까요(a, s, w, d): ";
        cin >> direction;

        // Hero객체 이동
        list[1]->move(direction);

        cout << endl << "------------------------------------------------------" << endl;
    }

    // list 속 동적 할당 해제
    for (auto& e : list)
        delete e;
    list.clear();

    return 0;
}