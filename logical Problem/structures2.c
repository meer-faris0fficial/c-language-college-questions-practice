#include <stdio.h>

#define XMAX 2
#define YMAX 3

struct point {
    int x;
    int y;
};

struct rect {
    struct point pt1;
    struct point pt2;
};

/* makepoint: make a point from x and y components */
struct point makepoint(int x, int y)
{
    struct point temp;
    temp.x = x;
    temp.y = y;
    return temp;
}

/* addpoints: add two points */
struct point addpoint(struct point p1, struct point p2)
{
    p1.x += p2.x;
    p1.y += p2.y;
    return p1;
}

/* ptinrect: return 1 if p in r, 0 if not */
int ptinrect(struct point p, struct rect r)
{
    return p.x >= r.pt1.x && p.x < r.pt2.x &&p.y >= r.pt1.y && p.y < r.pt2.y;
}

int main()
{
    struct rect screen;
    struct point middle;
    struct point test1, test2;

    // Create rectangle from (0,0) to (XMAX,YMAX)
    screen.pt1 = makepoint(0, 0);
    screen.pt2 = makepoint(XMAX, YMAX);

    // Find middle point
    middle = makepoint((screen.pt1.x + screen.pt2.x)/2,
                       (screen.pt1.y + screen.pt2.y)/2);

    printf("Rectangle corners: (%d,%d) to (%d,%d)\n",
           screen.pt1.x, screen.pt1.y, screen.pt2.x, screen.pt2.y);

    printf("Middle point: (%d,%d)\n", middle.x, middle.y);

    // Test points
    test1 = makepoint(1, 1);
    test2 = makepoint(3, 2);

    printf("Test point (%d,%d) is %s the rectangle.\n",
           test1.x, test1.y, ptinrect(test1, screen) ? "inside" : "outside");

    printf("Test point (%d,%d) is %s the rectangle.\n",
           test2.x, test2.y, ptinrect(test2, screen) ? "inside" : "outside");

    // Example: add points
    struct point sum = addpoint(test1, middle);
    printf("Sum of (%d,%d) + (%d,%d) = (%d,%d)\n",
           test1.x, test1.y, middle.x, middle.y, sum.x, sum.y);

    return 0;
}
