#include <iostream>
using namespace std;

class TimeCalculate
{
    
public:
    double hour, time;
    int totalHour,totalMinute, minute;

    int askInput()
    {
        cout<<"Enter the time in decimal press (0) to stop : ";
        cin>>time; 

        if(time == 0){
           showTotalTime(totalHour, totalMinute);
           return 0;
        }

        else 
        {
       int numberOfZero = getDecimalTime(time);
        minute = (int) (time*numberOfZero) % numberOfZero;
        float finalHour =( time - (double) minute / numberOfZero);
        timeCalculate(minute, finalHour);
        }
    }

    int getDecimalTime(double f) {
     int counter = 0;
     int tens = 1;
    for (; f != int(f); ++counter) {
     f *= 10;
     tens *= 10;
    }
     return tens;
}


    void timeCalculate(int minute, float finalHour) {
         if(minute >= 60) {
         finalHour += 1;
         minute -= 60;
         return timeCalculate(minute, finalHour);
    }
    else {
        totalHour += finalHour;
        totalMinute += minute;
        if(totalMinute >= 60) {
             totalHour += 1;
              totalMinute -= 60;
        }
         cout<<"---------------------------------------------------------"<<endl;
         cout<<"Hour is : "<<totalHour<<endl<<"Minutes :"<<totalMinute<<endl;
         cout<<"---------------------------------------------------------"<<endl;
        askInput();
         
    }
}
     
    int showTotalTime(int totalHour, int totalMinute)
    {
      cout<<"Total Hour is : "<<totalHour<<endl<<"Total Minutes :"<<totalMinute<<endl;
      cout<<"---------------------------------------------------------"<<endl;
      return 0;
    }
};



int main() 
{
 TimeCalculate t1 = TimeCalculate();
 t1.askInput();

}