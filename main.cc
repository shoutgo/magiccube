
#include "main.h"

use namespace std;

z        
|    
|     y
|   /
| /
0-------- x

    yh
 xl zl xh zh
    yl

       6 7 8
       3 4 5
       0 1 2
 8 5 2 6 7 8 2 5 8 8 7 6
 7 4 1 3 4 5 1 4 7 5 4 3
 6 3 0 0 1 2 0 3 6 2 1 0
       0 1 2
       3 4 5
       6 7 8

const enum COLOR	{R,G,B,K,T,V,W};
const enum AXIS		{X,Y,Z};
const enum POS		{LOW,HIGH};
const enum DIR		{BACKWARD,ONFACE,FORWARD};

class MAGICCUBE 
{
public:
	AXIS axis;
	POS  pos;
	DIR  dir;
	int  itr;
	MAGICCUBE* father;
public:
	COLOR xl[9],xh[9],yl[9],yh[9],zl[9],zh[9];
public:
	MAGICCUBE
	rot(AXIS ax, POS p, DIR d){
		MAGICCUBE tmp=*this;
		switch ax {
			case X:
				switch p {
					case LOW:
						switch d {
						};
					case HIGH:
						switch d {
						};
				};
			case Y:
				switch p {
					case LOW:
						switch d {
						};
					case HIGH:
						switch d {
						};
				};
			case Z:
				switch p {
					case LOW:
						switch d {
						};
					case HIGH:
						switch d {
						};
				};
		};
};
	bool
	ok(COLOR *c){
		return (c[0]==c[4] && c[1]==c[4] && c[2]==c[4] && c[3]==c[4]\
		     && c[5]==c[4] && c[6]==c[4] && c[7]==c[4] && c[8]==c[4]);
};
	bool 
	successed(){
		return (ok(xl) && ok(xh) && ok(yl) && ok(yh) && ok(zl) && ok(zh));
};
	void
	print(){
		father->print();
		...
};
};

MAGICCUBE
random(MAGICCUBE mc){};

void
act(MAGICCUBE mc){
	for (AXIS ax=X;;++ax){
		if ax==father->axis && father->axis==father->father->axis
			continue;
		for (POS p=LOW;;++p){
			if ax==father->axis && p==father->pos
				continue;
			for (DIR d=BACKWARD;;++d){
				newmc = mc.rot(ax,p,d);
				if newmc.successed()
					newmc.print();
				else
					act(newmc);		
			}
		}
	}
};

int
main()
{
	MAGICCUBE mc = random();
	act(mc);
	return 0;
}




	

