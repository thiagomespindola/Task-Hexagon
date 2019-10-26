# include <iostream> 
#include "roll_pitch.hpp"
#include <fstream>
#include <string.h>
#include <bits/stdc++.h> 
#include <cstring>
#include <cstdlib> 
#include <string>
using namespace std;


int main(){

	roll_pitch rp, teste;
	
	teste.set_position(461,82,887);
	cout << "phi: " << teste.get_phi() << endl;
	cout << "theta: " << teste.get_theta() << endl;
	
	ifstream myfile;
	myfile.open("attitude_exam.txt");	
	if(myfile.fail()){
		cout << "Error open file";
	}else cout << "Open file success";
	
	string line,x,y,theta,phi, phi_c;
	string *data;	
	vector <string> lines; 
	vector <int> coluns;
	int gi, gx, gy, gz, tm;

	
	while(!myfile.eof()){
		
		
		getline(myfile,line);
		istringstream is(line);
		
		while(getline(is, x, ' ')){
			
		 	istringstream is2(x);	
			getline(is2, y, ';');	
			istringstream(y) >> gi;
			coluns.push_back(gi);
		}
		
		gz = coluns.back();
		coluns.pop_back();
		gy = coluns.back();
		coluns.pop_back();
		gx = coluns.back();
		coluns.pop_back();
		tm = coluns.back();
	
		
		if(tm != 0){
			
			rp.set_position(gx,gy,gz);
			stringstream phi_aux,phi_aux_c, theta_aux;
			phi_aux <<  rp.get_phi();
			phi = phi_aux.str();
			phi_aux_c <<  rp.get_phi() + 180;
			phi_c = phi_aux_c.str();
			theta_aux << rp.get_theta();
			theta = theta_aux.str(); 
			
			line = line + " phi: " + phi + " or: "+ phi_c + " theta: " + theta;
			lines.push_back(line);
		}
	}
	myfile.close();
	
		
	ofstream outputFile;
	outputFile.open("output.txt");
	
	for(int i = 0; i <  lines.size() - 1; i++){
	
		outputFile << lines[i] << endl;
		
	}
	outputFile.close();
}
