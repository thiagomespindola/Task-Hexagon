1 Task Execution
1.1 Creating a class in the roll_pitch.HPP file that receives position values for Gp vector components.
1.2 This class calculates and returns values in degrees of roll and pitch in degrees.
1.3 Creation of rotation_inclination.CPP file that makes use of class created in roll_pitch.HPP file
1.4 The code in this file creates an object of type roll_pitch, opens the file attitude_exam.txt, takes the values of Gpx, Gpy, Gpz, 
turns them into integers, and sets the values of Gpx, Gpy, Gpz in the created object. After setting these values, it uses the class 
function that returns the values of theta and phi. With the values of theta and phi, one is assembled in the string that will be written 
line by line in the output file.

2 Resources used
2.1 To accomplish the task, MinGw was previously installed on windows in order to use the g ++ build command.
2.2 VSCode editor was used to perform the task

3 Compilation and executation
3.1 open the command prompt, use the CD command to get to the directory containing the files containing the repository clone.
3.2 Use the following command to compile the file: g++ -o rotation_inclination.exe rotation_inclination.cpp
3.3 To execute, run the following command:rotation_inclination.exe


 
