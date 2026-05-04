/* Ultimate profile by Taker */
#include "modes/Ultimate.hpp"

#define ANALOG_STICK_MIN 28
#define ANALOG_STICK_NEUTRAL 128
#define ANALOG_STICK_MAX 228

Ultimate::Ultimate() : ControllerMode() {}

void Ultimate::UpdateDigitalOutputs(const InputState &inputs, OutputState &outputs) {
    // rt1 = center thumb right
    // rt2 = c stick down
    // rt3 = c stick left
    // rt4 = c stick up
    // rt5 = c stick right
    
    // rf1 = bottom point right
    // rf2 = bottom middle right
    // rf3 = bottom ring right
    // rf4 = bottom pinkie right
    // rf5 = top pointer right
    // rf6 = top middle right
    // rf7 = top ring right
    // rf8 = top pinkie right
    
    // lf1 = point left
    // lf2 = middle left
    // lf3 = ring left
    // lf4 = pinkie left
    // lf5 = top middle left
    // update
     outputs.a = inputs.rt2;
     outputs.b = inputs.rf2;
     outputs.x = inputs.rf3;
     outputs.y = inputs.rf1;
    outputs.buttonR = inputs.rt5;
    outputs.triggerRDigital = inputs.rt4;
    outputs.triggerLDigital = inputs.rt1;
    outputs.start = inputs.mb1;
    

 //    // Turn on D-Pad layer by holding empty button
 //    if (inputs.lf5) {
 //        outputs.dpadUp = inputs.rt4;
 //        outputs.dpadDown = inputs.rt2;
 //        outputs.dpadLeft = inputs.rt3;
 //        outputs.dpadRight = inputs.rt5;
 //    }

 //    // For reseting training mode in ultimate
 //    if (inputs.lf5 && inputs.lt1 && inputs.rf8 && inputs.rf7) {
 //        outputs.buttonL = true;
 //        outputs.buttonR = true;
 //        outputs.a = true;
 //    }

 //    // Turn on extra button layer when holding empty button, quiet button, and mx
 //   // if(inputs.rf8 && inputs.lf5 && inputs.lt2){
 // //       outputs.capture = inputs.rf5;
 //  //      outputs.triggerLDigital = false;
 // //       outputs.select = inputs.rf6;
 //   //     outputs.b = false;
 //  //      outputs.home = inputs.rf7;
 //  //      outputs.buttonR = false;
 // //   }

 //    if(inputs.rt1){
 //        outputs.triggerLDigital = false;
 //        outputs.buttonL = inputs.rf5;
 //    }

 //    //if(inputs.rf8 && inputs.lf5 && inputs.lt2 && inputs.rf5) {
 //   //     outputs.capture = true;
 // //   }
 //    if(inputs.rf8){
 //        outputs.capture = true;
 //    }
 //    if(inputs.lf5){
 //        outputs.capture = false;
 //    }
}

void Ultimate::UpdateAnalogOutputs(const InputState &inputs, OutputState &outputs) {
    // Coordinate calculations to make modifier handling simpler.
    UpdateDirections(
        inputs.lf6, // Left
        inputs.lf1, // Right
        inputs.lf2, // Down
        inputs.lf6, // Up
        inputs.lf6, // C-Left
        inputs.lf6, // C-Right
        inputs.lf6, // C-Down
        inputs.lf6, // C-Up
        ANALOG_STICK_MIN,
        ANALOG_STICK_NEUTRAL,
        ANALOG_STICK_MAX,
        outputs
    );
    int temp = 0;
    if(inputs.lt2){
        if(directions.horizontal){
            if(inputs.lf4){
                temp = temp + 1;
            }
            if(inputs.lf3){
                temp = temp + 2;
            }
            if(inputs.lf5){
                temp = temp + 4;
            }
            if(inputs.rf5){
                temp = temp + 8;
            }
            if(inputs.rf6){
                temp = temp + 16;
            }
            if(inputs.rf7){
                temp = temp + 32;
            }
            if(inputs.rf8){
                temp = temp + 64;
            }
            if(inputs.rt3){
                temp = temp + 128;
            }
            outputs.leftStickX = 128 + (directions.x * temp);
            
        }
        if(directions.diagonal){
            if (inputs.lf5 && inputs.rf5 && inputs.rf6 && inputs.rf7 && !inputs.rf8) {
				// Angle is 2.812
				outputs.leftStickX = 128 + (directions.x * 128);
				outputs.leftStickY = 128 + (directions.y * 7);
			}
			if (inputs.lf5 && inputs.rf5 && inputs.rf6 && !inputs.rf7 && inputs.rf8) {
				// Angle is 5.625
				outputs.leftStickX = 128 + (directions.x * 128);
				outputs.leftStickY = 128 + (directions.y * 13);
			}
			if (inputs.lf5 && inputs.rf5 && inputs.rf6 && !inputs.rf7 && !inputs.rf8) {
				// Angle is 8.438
				outputs.leftStickX = 128 + (directions.x * 127);
				outputs.leftStickY = 128 + (directions.y * 19);
			}
			if (inputs.lf5 && inputs.rf5 && !inputs.rf6 && inputs.rf7 && inputs.rf8) {
				// Angle is 11.25
				outputs.leftStickX = 128 + (directions.x * 126);
				outputs.leftStickY = 128 + (directions.y * 25);
			}
			if (inputs.lf5 && inputs.rf5 && !inputs.rf6 && inputs.rf7 && !inputs.rf8) {
				// Angle is 14.06
				outputs.leftStickX = 128 + (directions.x * 125);
				outputs.leftStickY = 128 + (directions.y * 32);
			}
			if (inputs.lf5 && inputs.rf5 && !inputs.rf6 && !inputs.rf7 && inputs.rf8) {
				// Angle is 16.88
				outputs.leftStickX = 128 + (directions.x * 123);
				outputs.leftStickY = 128 + (directions.y * 38);
			}
			if (inputs.lf5 && inputs.rf5 && !inputs.rf6 && !inputs.rf7 && !inputs.rf8) {
				// Angle is 19.69
				outputs.leftStickX = 128 + (directions.x * 121);
				outputs.leftStickY = 128 + (directions.y * 44);
			}
			if (inputs.lf5 && !inputs.rf5 && inputs.rf6 && inputs.rf7 && inputs.rf8) {
				// Angle is 22.50
				outputs.leftStickX = 128 + (directions.x * 119);
				outputs.leftStickY = 128 + (directions.y * 49);
			}
			if (inputs.lf5 && !inputs.rf5 && inputs.rf6 && inputs.rf7 && !inputs.rf8) {
				// Angle is 25.31
				outputs.leftStickX = 128 + (directions.x * 116);
				outputs.leftStickY = 128 + (directions.y * 55);
			}
			if (inputs.lf5 && !inputs.rf5 && inputs.rf6 && !inputs.rf7 && inputs.rf8) {
				// Angle is 28.12
				outputs.leftStickX = 128 + (directions.x * 113);
				outputs.leftStickY = 128 + (directions.y * 61);
			}
			if (inputs.lf5 && !inputs.rf5 && inputs.rf6 && !inputs.rf7 && !inputs.rf8) {
				// Angle is 30.94
				outputs.leftStickX = 128 + (directions.x * 110);
				outputs.leftStickY = 128 + (directions.y * 66);
			}
			if (inputs.lf5 && !inputs.rf5 && !inputs.rf6 && inputs.rf7 && inputs.rf8) {
				// Angle is 33.75
				outputs.leftStickX = 128 + (directions.x * 107);
				outputs.leftStickY = 128 + (directions.y * 72);
			}
			if (inputs.lf5 && !inputs.rf5 && !inputs.rf6 && inputs.rf7 && !inputs.rf8) {
				// Angle is 36.56
				outputs.leftStickX = 128 + (directions.x * 103);
				outputs.leftStickY = 128 + (directions.y * 77);
			}
			if (inputs.lf5 && !inputs.rf5 && !inputs.rf6 && !inputs.rf7 && inputs.rf8) {
				// Angle is 39.38
				outputs.leftStickX = 128 + (directions.x * 99);
				outputs.leftStickY = 128 + (directions.y * 82);
			}
			if (inputs.lf5 && !inputs.rf5 && !inputs.rf6 && !inputs.rf7 && !inputs.rf8) {
				// Angle is 42.19
				outputs.leftStickX = 128 + (directions.x * 95);
				outputs.leftStickY = 128 + (directions.y * 86);
			}
			if (!inputs.lf5 && inputs.rf5 && inputs.rf6 && inputs.rf7 && inputs.rf8) {
				// Angle is 45.
				outputs.leftStickX = 128 + (directions.x * 91);
				outputs.leftStickY = 128 + (directions.y * 91);
			}
			if (!inputs.lf5 && inputs.rf5 && inputs.rf6 && inputs.rf7 && !inputs.rf8) {
				// Angle is 47.81
				outputs.leftStickX = 128 + (directions.x * 86);
				outputs.leftStickY = 128 + (directions.y * 95);
			}
			if (!inputs.lf5 && inputs.rf5 && inputs.rf6 && !inputs.rf7 && inputs.rf8) {
				// Angle is 50.62
				outputs.leftStickX = 128 + (directions.x * 82);
				outputs.leftStickY = 128 + (directions.y * 99);
			}
			if (!inputs.lf5 && inputs.rf5 && inputs.rf6 && !inputs.rf7 && !inputs.rf8) {
				// Angle is 53.44
				outputs.leftStickX = 128 + (directions.x * 77);
				outputs.leftStickY = 128 + (directions.y * 103);
			}
			if (!inputs.lf5 && inputs.rf5 && !inputs.rf6 && inputs.rf7 && inputs.rf8) {
				// Angle is 56.25
				outputs.leftStickX = 128 + (directions.x * 72);
				outputs.leftStickY = 128 + (directions.y * 107);
			}
			if (!inputs.lf5 && inputs.rf5 && !inputs.rf6 && inputs.rf7 && !inputs.rf8) {
				// Angle is 59.06
				outputs.leftStickX = 128 + (directions.x * 66);
				outputs.leftStickY = 128 + (directions.y * 110);
			}
			if (!inputs.lf5 && inputs.rf5 && !inputs.rf6 && !inputs.rf7 && inputs.rf8) {
				// Angle is 61.88
				outputs.leftStickX = 128 + (directions.x * 61);
				outputs.leftStickY = 128 + (directions.y * 113);
			}
			if (!inputs.lf5 && inputs.rf5 && !inputs.rf6 && !inputs.rf7 && !inputs.rf8) {
				// Angle is 64.69
				outputs.leftStickX = 128 + (directions.x * 55);
				outputs.leftStickY = 128 + (directions.y * 116);
			}
			if (!inputs.lf5 && !inputs.rf5 && inputs.rf6 && inputs.rf7 && inputs.rf8) {
				// Angle is 67.50
				outputs.leftStickX = 128 + (directions.x * 49);
				outputs.leftStickY = 128 + (directions.y * 119);
			}
			if (!inputs.lf5 && !inputs.rf5 && inputs.rf6 && inputs.rf7 && !inputs.rf8) {
				// Angle is 70.31
				outputs.leftStickX = 128 + (directions.x * 44);
				outputs.leftStickY = 128 + (directions.y * 121);
			}
			if (!inputs.lf5 && !inputs.rf5 && inputs.rf6 && !inputs.rf7 && inputs.rf8) {
				// Angle is 73.12
				outputs.leftStickX = 128 + (directions.x * 38);
				outputs.leftStickY = 128 + (directions.y * 123);
			}
			if (!inputs.lf5 && !inputs.rf5 && inputs.rf6 && !inputs.rf7 && !inputs.rf8) {
				// Angle is 75.94
				outputs.leftStickX = 128 + (directions.x * 32);
				outputs.leftStickY = 128 + (directions.y * 125);
			}
			if (!inputs.lf5 && !inputs.rf5 && !inputs.rf6 && inputs.rf7 && inputs.rf8) {
				// Angle is 78.75
				outputs.leftStickX = 128 + (directions.x * 25);
				outputs.leftStickY = 128 + (directions.y * 126);
			}
			if (!inputs.lf5 && !inputs.rf5 && !inputs.rf6 && inputs.rf7 && !inputs.rf8) {
				// Angle is 81.56
				outputs.leftStickX = 128 + (directions.x * 19);
				outputs.leftStickY = 128 + (directions.y * 127);
			}
			if (!inputs.lf5 && !inputs.rf5 && !inputs.rf6 && !inputs.rf7 && inputs.rf8) {
				// Angle is 84.38
				outputs.leftStickX = 128 + (directions.x * 13);
				outputs.leftStickY = 128 + (directions.y * 128);
			}
			if (!inputs.lf5 && !inputs.rf5 && !inputs.rf6 && !inputs.rf7 && !inputs.rf8) {
				// Angle is 87.19
				outputs.leftStickX = 128 + (directions.x * 7);
				outputs.leftStickY = 128 + (directions.y * 128);
			}
        }
        if(directions.vertical){
            if(inputs.lf4){
                temp = temp + 1;
            }
            if(inputs.lf3){
                temp = temp + 2;
            }
            if(inputs.lf5){
                temp = temp + 4;
            }
            if(inputs.rf5){
                temp = temp + 8;
            }
            if(inputs.rf6){
                temp = temp + 16;
            }
            if(inputs.rf7){
                temp = temp + 32;
            }
            if(inputs.rf8){
                temp = temp + 64;
            }
            if(inputs.rt3){
                temp = temp + 128;
            }
            outputs.leftStickY = 128 + (directions.y * temp);
            
        }
    }
    
    if(inputs.lt1){
        if(directions.horizontal){
            if(inputs.lf4){
                outputs.leftStickX = outputs.leftStickX + (directions.x * 1);
            }
            if(inputs.lf3){
                outputs.leftStickX = outputs.leftStickX + (directions.x * 2);
            }
            if(inputs.lf5){
                outputs.leftStickX = outputs.leftStickX + (directions.x * 4);
            }
            if(inputs.rf5){
                outputs.leftStickX = outputs.leftStickX + (directions.x * 8);
            }
            if(inputs.rf6){
                outputs.leftStickX = outputs.leftStickX + (directions.x * 16);
            }
            if(inputs.rf7){
                outputs.leftStickX = outputs.leftStickX + (directions.x * 32);
            }
            if(inputs.rf8){
                outputs.leftStickX = outputs.leftStickX + (directions.x * 64);
            }
            if(inputs.rt3){
                outputs.leftStickX = outputs.leftStickX + (directions.x * 128);
            }
            if(inputs.rt4){
                outputs.leftStickX = outputs.leftStickX + (directions.x * 256);
            }
            if(inputs.rt5){
                outputs.leftStickX = outputs.leftStickX + (directions.x * 512);
            }
        }
        if(directions.diagonal){
            if(inputs.rf5 && inputs.rf6 && inputs.rf7 && inputs.rf8){
                outputs.leftStickX = 128 + (directions.x * 7);
                outputs.rightStickY = 128 + (directions.y * 69);
            }
            if(inputs.rf5 && inputs.rf6 && inputs.rf7 && !inputs.rf8){
                outputs.leftStickX = 128 + (directions.x * 14);
                outputs.rightStickY = 128 + (directions.y * 68);
            }
            if(inputs.rf5 && inputs.rf6 && !inputs.rf7 && inputs.rf8){
                outputs.leftStickX = 128 + (directions.x * 21);
                outputs.rightStickY = 128 + (directions.y * 66);
            }
            if(inputs.rf5 && inputs.rf6 && !inputs.rf7 && !inputs.rf8){
                outputs.leftStickX = 128 + (directions.x * 28);
                outputs.rightStickY = 128 + (directions.y * 63);
            }
            if(inputs.rf5 && !inputs.rf6 && inputs.rf7 && inputs.rf8){
                outputs.leftStickX = 128 + (directions.x * 35);
                outputs.rightStickY = 128 + (directions.y * 60);
            }
            if(inputs.rf5 && !inputs.rf6 && inputs.rf7 && !inputs.rf8){
                outputs.leftStickX = 128 + (directions.x * 41);
                outputs.rightStickY = 128 + (directions.y * 56);
            }
            if(inputs.rf5 && !inputs.rf6 && !inputs.rf7 && inputs.rf8){
                outputs.leftStickX = 128 + (directions.x * 46);
                outputs.rightStickY = 128 + (directions.y * 52);
            }
            if(inputs.rf5 && !inputs.rf6 && !inputs.rf7 && !inputs.rf8){
                outputs.leftStickX = 128 + (directions.x * 52);
                outputs.rightStickY = 128 + (directions.y * 46);
            }
            if(!inputs.rf5 && inputs.rf6 && inputs.rf7 && inputs.rf8){
                outputs.leftStickX = 128 + (directions.x * 56);
                outputs.rightStickY = 128 + (directions.y * 41);
            }
            if(!inputs.rf5 && inputs.rf6 && inputs.rf7 && !inputs.rf8){
                outputs.leftStickX = 128 + (directions.x * 60);
                outputs.rightStickY = 128 + (directions.y * 35);
            }
            if(!inputs.rf5 && inputs.rf6 && !inputs.rf7 && inputs.rf8){
                outputs.leftStickX = 128 + (directions.x * 63);
                outputs.rightStickY = 128 + (directions.y * 28);
            }
            if(!inputs.rf5 && inputs.rf6 && !inputs.rf7 && !inputs.rf8){
                outputs.leftStickX = 128 + (directions.x * 66);
                outputs.rightStickY = 128 + (directions.y * 21);
            }
            if(!inputs.rf5 && !inputs.rf6 && inputs.rf7 && inputs.rf8){
                outputs.leftStickX = 128 + (directions.x * 68);
                outputs.rightStickY = 128 + (directions.y * 14);
            }
            if(!inputs.rf5 && !inputs.rf6 && inputs.rf7 && !inputs.rf8){
                outputs.leftStickX = 128 + (directions.x * 69);
                outputs.rightStickY = 128 + (directions.y * 7);
            }
        }
    }

    if(inputs.rf4){
        outputs.leftStickX = 128 - (outputs.leftStickX - 128);
        outputs.leftStickY = 128 - (outputs.leftStickY - 128);
    }
}



















