/*
 * Author:
 * Date:
 * Name:
 */

class Summation {
private:
    int a, b, c;
    int sum(int x, int y) {
        a = x;
        b = y;
        c = a + b; 
    }

public:
    int sum(int x, int y) {
        a = x;
        b = y;
        c = a + b;
        return c;
    }
};
