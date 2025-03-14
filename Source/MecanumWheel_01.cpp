#include <kipr/wombat.h>
#define speed1 87
#define speed2 100
#define time 1450

void forward(int speed1forward, int speed2forward, int timeforward)
{
        
    motor(0, speed1forward);
    motor(1, speed1forward);
    motor(2, speed2forward);
    motor(3, speed2forward);
    msleep(time); 
    motor(0, 0);
    motor(1, 0);
    motor(2, 0);
    motor(3, 0);
    
}
void backward(int speed1backward, int speed2backward, int timebackward)
{
        
    motor(0, -speed1backward);
    motor(1, -speed1backward);
    motor(2, -speed2backward);
    motor(3, -speed2backward);
    msleep(1000); 
    motor(0, 0);
    motor(1, 0);
    motor(2, 0);
    motor(3, 0);
}
void right(int speed1right, int speed2right, int timeright)
{
        
    motor(0, -speed1right);
    motor(1, -speed1right);
    motor(2, speed2right);
    motor(3, speed2right);
    msleep(time); //90B0 bei geschwindigkeit 01 87 und 02 100 1450ms
    motor(0, 0);
    motor(1, 0);
    motor(2, 0);
    motor(3, 0);
}
void left(int speed1left, int speed2left, int timeleft)
{
        
    motor(0, speed1left);
    motor(1, speed1left);
    motor(2, -speed2left);
    motor(3, -speed2left);
    msleep(time); //90B0 bei geschwindigkeit 01 87 und 02 100 1450ms
    motor(0, 0);
    motor(1, 0);
    motor(2, 0);
    motor(3, 0);
}
void dia(int speed1left, int speed2left, int timeleft)
{
        
    motor(0, -speed1left);
   // motor(1, speed1left);
    motor(2, -speed2left);
    //motor(3, speed2left);
    msleep(time); //90B0 bei geschwindigkeit 01 87 und 02 100 1450ms
    motor(0, 0);
    motor(1, 0);
    motor(2, 0);
    motor(3, 0);
}
void probe(int speed1probe, int speed2probe, int timeprobe)
{
        
    motor(0, speed1probe);
    motor(1, speed1probe);
    motor(2, speed2probe);
    motor(3, speed2probe);
    msleep(1650); 
    motor(0, 0);
    motor(1, 0);
    motor(2, 0);
    motor(3, 0);
    
    motor(0, -speed1probe);
    motor(1, -speed1probe);
    motor(2, speed2probe);
    motor(3, speed2probe);
    msleep(1450); //90B0 bei geschwindigkeit 01 87 und 02 100 1450ms
    motor(0, 0);
    motor(1, 0);
    motor(2, 0);
    motor(3, 0);
    motor(0, speed1probe);
    motor(1, speed1probe);
    motor(2, speed2probe);
    motor(3, speed2probe);
    msleep(10750); 
    motor(0, 0);
    motor(1, 0);
    motor(2, 0);
    motor(3, 0);
    
    motor(0, -speed1probe);
    motor(1, -speed1probe);
    motor(2, speed2probe);
    motor(3, speed2probe);
    msleep(850); //90B0 bei geschwindigkeit 01 87 und 02 100 1450ms
    motor(0, 0);
    motor(1, 0);
    motor(2, 0);
    motor(3, 0);
    
    motor(0, speed1probe);
    motor(1, speed1probe);
    motor(2, speed2probe);
    motor(3, speed2probe);
    msleep(750); 
    motor(0, 0);
    motor(1, 0);
    motor(2, 0);
    motor(3, 0);
}
void servo(int speed1left, int speed2left, int timeleft)
{
   	enable_servos();
	set_servo_position(0,1000); //oben
    msleep(5000);
    set_servo_position(0,250); //unten
    msleep(5000);
    set_servo_position(1,2000); //auf
    msleep(5000);
    set_servo_position(1,1000); // zu
    msleep(5000);
}
void botguy(int speed1left, int speed2left, int timeleft)
{
   	enable_servos();
    set_servo_position(1,2000);
    msleep(1000);
	set_servo_position(0,950);
    msleep(1000);
    set_servo_position(1,1250);
    msleep(1000);
    set_servo_position(0,1500);
    motor(0, -speed1left);
    motor(1, -speed1left);
    motor(2, -speed2left);
    motor(3, -speed2left);
    msleep(1000); 
    motor(0, 0);
    motor(1, 0);
    motor(2, 0);
    motor(3, 0);
    
    motor(0, speed1left);
    motor(1, speed1left);
    motor(2, -speed2left);
    motor(3, -speed2left);
    msleep(1450); //90B0 bei geschwindigkeit 01 87 und 02 100 1450ms
    motor(0, 0);
    motor(1, 0);
    motor(2, 0);
    motor(3, 0);
    
    motor(0, speed1left);
    motor(1, speed1left);
    motor(2, speed2left);
    motor(3, speed2left);
    msleep(5000); 
    motor(0, 0);
    motor(1, 0);
    motor(2, 0);
    motor(3, 0);
    
    motor(0, speed1left);
    motor(1, speed1left);
    motor(2, -speed2left);
    motor(3, -speed2left);
    msleep(725); //90B0 bei geschwindigkeit 01 87 und 02 100 1450ms
    motor(0, 0);
    motor(1, 0);
    motor(2, 0);
    motor(3, 0);
    
    set_servo_position(1,2000);
    msleep(1000);
}
int main()
{
    while(1)
    {
        int command = 0;
    
    	scanf("%d",&command);
        
        if(command == 1)
        {
            forward (speed1, speed2, time);
        }
        else if(command == 2)
        {
            backward (speed1, speed2, time);
        }
        else if(command == 3)
        {
            right (speed1, speed2, time);
        }
        else if(command == 4)
        {
            left (speed1, speed2, time);
        }
        else if(command == 5)
        {
            dia (speed1, speed2, time);
        }
        else if(command == 6)
        {
            probe (speed1, speed2, time);
        }
        else if(command == 7)
        {
            servo (speed1, speed2, time);
        }
        else if(command == 8)
        {
            botguy (speed1, speed2, time);
        }
    
    }
    
    return 0;
}
