//Modify function overlap() form lab18_1.cpp by using pointers as input arguments.
#include<iostream>
#include <bits/stdc++.h> 
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect * ,Rect *);

int main(){
	
    double x1,y1,w1,h1,x2,y2,w2,h2;
	
	cout << "Please input Rect 1 (x y w h): ";
	cin>> x1>>y1>>w1>>h1;
	Rect Quad1 = {x1,y1,w1,h1};
    Rect *q1 = &Quad1;
    

	cout << "Please input Rect 2 (x y w h): ";
	cin>> x2>>y2>>w2>>h2;
	Rect Quad2 = {x2,y2,w2,h2};
   Rect *q2 = &Quad2;

	
cout << "Overlap area = "<< overlap(q1,q2);	
	return 0;
}

double overlap(Rect *q1,Rect *q2){

	if (q1->x > q2->x + q2->w || q2->x > q1->x + q1->w){return 0;}
	else if (q1->y < q2->y - q2->h || q2->y < q1->y - q1->h){return 0;} 
	else{

	double xl =  max(q1->x , q2->x);
	double yl =  min(q1->y , q2->y);

	double xr =  min(q1->x + q1->w , q2->x + q2->w);
	double yr =  max(q1->y - q1->h , q2->y - q2->h);

	return ( abs(xr - xl) * abs(yr-yl) ) ;

	}
}
