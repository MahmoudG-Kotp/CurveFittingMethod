#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char** argv) {
	int numOfPoints, m, n;
	
	cout << "Enter Number Of Points : "; cin >> numOfPoints;
	m = numOfPoints - 1;
	
	cout << "\nEnter Degree Of Equation : "; cin >> n;
	
	if(m > n){
		float xPoints[numOfPoints],
			  yPoints[numOfPoints],
			  sumOfX,
			  sumOfY,
			  sumOfXSqr,
			  sumOfXY,
			  A0,
			  A1;
		
		for(int i = 0; i < numOfPoints; i++){
			cout << "\nEnter X" << i << " : "; cin >> xPoints[i];
			cout << "Enter Y" << i << " : "; cin >> yPoints[i];
			
			sumOfX += xPoints[i];
			sumOfY += yPoints[i];
			sumOfXSqr += pow(xPoints[i], 2);
			sumOfXY += (xPoints[i] * yPoints[i]);
		}
		
		cout << "\nSum Of X = " << sumOfX;
		cout << "\tSum Of Y = " << sumOfY;
		cout << "\tSum Of X Square = " << sumOfXSqr;
		cout << "\tSum Of XY = " << sumOfXY;
		
	   	A1 = (sumOfXY*numOfPoints - sumOfX*sumOfY)/(numOfPoints*sumOfXSqr - pow(sumOfX, 2));  
		A0 = (sumOfY - A1*sumOfX)/numOfPoints;
		
		cout << "\nA0 = " << A0 << "\tA1 = " << A1 << endl << A0 << " + " << A1 << "X";
		
	}else{
		cout << "\nThis Data Can't Be Fitted!";
	}
	
	
	return 0;
}
