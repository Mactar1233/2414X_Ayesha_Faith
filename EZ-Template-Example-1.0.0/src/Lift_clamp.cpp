 #include "main.h"
  pros::Motor lift (10, true);
  pros::Motor clampM (4, true);

   void liftcontrol(){
      if (master.get_digital(DIGITAL_R2)) {
      lift.move_voltage(12000); // This is 100 because it's a 100rpm motor
    }
    else if (master.get_digital(DIGITAL_R1)) {
      lift.move_voltage(-12000);
    } else {
        lift.move_voltage(0);
    }
 }
       void clampcontrol(){
      if (master.get_digital(DIGITAL_L2)) {
      clampM.move_voltage(12000); // This is 100 because it's a 100rpm motor
    }
    else if (master.get_digital(DIGITAL_L1)) {
      clampM.move_voltage(-12000);
    } else {
       clampM.move_voltage(0);
    }
}
   