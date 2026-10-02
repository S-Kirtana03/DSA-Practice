#Problem:Hour and Minute Hands Angle
#Link:https://www.geeksforgeeks.org/problems/angle-between-hour-and-minute-hand0545/1
#Difficulty:Medium

Given a string s representing time in 24-hour format "HH:MM", compute the smallest angle in degrees between the hour and minute hands of an analog clock.

class Solution {
  public:
    double getAngle(string& s) {
        // code here
        int h,m;
        sscanf(s.c_str(),"%d:%d",&h,&m);
        h=h%12;
        double hangle=(h*30.0)+(m*0.5);
        double mangle=m*6.0;
        double angle=fabs(hangle-mangle);
        if(angle>180.0)
        {
            angle=360.0-angle;
            
        }
        return angle;
    }
};

