#include <kipr/wombat.h>



int main()
{
    int velo_straight = 75; 
	int velo_turn = 75; 
    int zange_offen = 1024; 
    int zange_zu = 0; 
    int greifer_oben = 150; 
    
    enable_servos();
    
    shut_down_in(120); //shut down in 2 min
    
    //Startposition festlegen
    set_servo_position(0, greifer_oben);
    set_servo_position(1, zange_offen);
    msleep(200); 
    
    //Gerade aus fahren 
    //Kugeln zusammenhC$ufen
    mav(0, 1000); 
    mav(1, 1045);
    msleep(2000); 
    //mav(1,50);
    
    //Greifer auf Normalposition
    set_servo_position(0, 670);
    msleep(10000);
    ao(); 
    
	//weiss: 1738
    //schwarz: 4080
    
    return 0; 
}