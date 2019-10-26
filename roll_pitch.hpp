# include <iostream> 
#include <cmath>  
#include <iomanip>
using namespace std;

#define PI 3.14159265;

class roll_pitch {

	private:
		double Gx;
		double Gy;
		double Gz;
	
	public:
		void set_position(int x, int y, int z);
		double get_phi();
		double get_theta();
};

void roll_pitch::set_position(int x, int y, int z){
	
	double gm = 1000;
	Gx = x/gm;
	Gy = y/gm;
	Gz = z/gm;
	
}

double roll_pitch::get_theta(){
	
	double theta;	
	theta = atan((-Gx)/(sqrt(pow(Gy,2)+pow(Gz,2))))* 180 / PI;
	return theta;
}

double roll_pitch::get_phi(){
	
	double phi;
	double u = 0.1;
	int signGz;
	if(Gz < 0){
		signGz = -1;
	}else signGz = 1;
	
	phi = atan((Gy)/(signGz*(sqrt(pow(Gz,2)+(u*pow(Gx,2))))))* 180 /PI;
	return phi;
}
