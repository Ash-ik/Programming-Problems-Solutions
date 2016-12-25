#include <stdio.h>
#include<stdbool.h>
int maxi(a,b) {
    if(a>b) return a;
    else return b;
}
int mini(a,b) {
    if(a<b) return a;
    else return b;
}
struct Point
{
	int x;
	int y;
};

/* Given three colinear points p, q, r, the function checks if
 point q lies on line segment 'pr'*/
bool onSegment(struct Point p,struct Point q,struct Point r)
{
	if (q.x <= maxi(p.x, r.x) && q.x >= mini(p.x, r.x) &&
		q.y <= maxi(p.y, r.y) && q.y >= mini(p.y, r.y))
	return true;

	return false;
}

/* To find orientation of ordered triplet (p, q, r).
 The function returns following values
 0 --> p, q and r are colinear
 1 --> Clockwise
 2 --> Counterclockwise*/
int orientation(struct Point p,struct Point q,struct Point r)
{
	/* See http://www.geeksforgeeks.org/orientation-3-ordered-points/
	 for details of below formula.*/
	int val = (q.y - p.y) * (r.x - q.x) -
			(q.x - p.x) * (r.y - q.y);

	if (val == 0) return 0; /* colinear*/

	return (val > 0)? 1: 2; /* clock or counterclock wise*/
}

/* The main function that returns true if line segment 'p1q1'
 and 'p2q2' intersect.*/
bool doIntersect(struct Point p1,struct Point q1,struct Point p2,struct Point q2)
{
	/* Find the four orientations needed for general and
	 special cases*/
	int o1 = orientation(p1, q1, p2);
	int o2 = orientation(p1, q1, q2);
	int o3 = orientation(p2, q2, p1);
	int o4 = orientation(p2, q2, q1);

	/* General case*/
	if (o1 != o2 && o3 != o4)
		return true;

	/* Special Cases
	 p1, q1 and p2 are colinear and p2 lies on segment p1q1*/
	if (o1 == 0 && onSegment(p1, p2, q1)) return true;

	/* p1, q1 and p2 are colinear and q2 lies on segment p1q1*/
	if (o2 == 0 && onSegment(p1, q2, q1)) return true;

	/* p2, q2 and p1 are colinear and p1 lies on segment p2q2*/
	if (o3 == 0 && onSegment(p2, p1, q2)) return true;

	/* p2, q2 and q1 are colinear and q1 lies on segment p2q2*/
	if (o4 == 0 && onSegment(p2, q1, q2)) return true;

	return false;
}

int main()
{
    int xS,yS,xE,yE,xL,yT,xR,yB;
    int t;
    char points[100];
    scanf("%d\n",&t);
    while(t--)
    {
        gets(points);
        sscanf(points,"%d %d %d %d %d %d %d %d",&xS,&yS,&xE,&yE,&xL,&yT,&xR,&yB);
        struct Point p1 = {xS, yS}, q1 = {xE, yE};
        struct Point p2 = {xL, yT}, q2 = {xL, yB};
        struct Point p3 = {xR, yT}, q3 = {xR, yB};
        struct Point p4 = {xL, yB}, q4 = {xR, yB};
        struct Point p5 = {xR, yB}, q5 = {xR, yT};

	if(doIntersect(p1, q1, p2, q2)||doIntersect(p1, q1, p3, q3)||doIntersect(p1, q1, p4, q4)||doIntersect(p1, q1, p5, q5)||(xS <= (xL > xR ? xL : xR)&& xS >= (xL < xR ? xL : xR)&& yS <= (yT > yB ? yT : yB)&& yS >= (yT < yB ? yT : yB)))
            puts("T");
    else puts("F");
    }
	return 0;
}

