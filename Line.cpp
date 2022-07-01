//DDA Algorithm for finding the points :

#include<iostream> 
using namespace std;
int main(){
    float x1 , x2 ,y1, y2 ;
	cout << "Enter x1, y1, x2 and y2 : " << endl;
	cin >> x1 >> y1 >> x2 >> y2 ;
	float dx  = x2  - x1 ;
	float dy = y2 - y1 ;
	int step ;
	if(dx > dy) {
		 step =  dx ;
	}
	else {
		step = dy ;
	}

    cout << "Steps : "  << step << endl;
	
	float xinC = dx/step ;
    cout << "Increment in x : " << xinC <<endl;
	float yinC = dy/step ;
    cout << "Increment in y : " << yinC <<endl;


	cout  <<  "Loop and printing : " << endl;
	for(int i =0 ; i <= step ; i++) {
		cout << "x: " << x1 << endl;
		x1 = x1 + xinC ;
	}

    for(int i = 0 ; i <=step ; i++) {
		cout << "  y: " << y1 << endl;
        y1 =  y1 + yinC ;
    }

    float slope = dy/dx ;;
    cout << "Slope : " << slope << endl;
	
	return 0;
}

//The given output  are the points of the line that are drawn in terminal for beginners: 

/*demerits :
      1. calculation of floating points takes extra time i.e. Time Complexity is Linear.
	  2. No smoooth lines
	  
*/