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
    outputs.a = inputs.rf1;
    outputs.b = inputs.rf2 || inputs.rf6;
    outputs.x = inputs.rf3;
    outputs.y = inputs.rt1;
    // outputs.buttonL = inputs.rf8;
    outputs.buttonR = inputs.rf3 || inputs.rf8;
    outputs.triggerLDigital = inputs.rf4;
    outputs.triggerRDigital = inputs.rf5;
    outputs.start = inputs.mb1;

    // Turn on D-Pad layer by holding empty button, quiet button
    if (inputs.rf8 && inputs.lf5) {
        outputs.dpadUp = inputs.rt4;
        outputs.dpadDown = inputs.rt2;
        outputs.dpadLeft = inputs.rt3;
        outputs.dpadRight = inputs.rt5;
    }

    // Turn on extra button layer when holding empty button and quiet button
    if(inputs.rf8 && inputs.lf5 && inputs.lt2){
        outputs.capture = inputs.rf5;
        outputs.select = inputs.rf6;
        outputs.home = inputs.rf7;
    }

    // Hidden Buttons for remapp.ing options
    // outputs.leftStickClick = inputs.lf6;
    // outputs.rightStickClick = inputs.lf7;
    // outputs.capture = inputs.lf8;
    // outputs.dpadUp = inputs.lf9;
    // outputs.dpadDown = inputs.lf10;
    // outputs.dpadLeft = inputs.lf11;
    // outputs.dpadRight = inputs.lf12;
    // outputs.select = inputs.mb2;
    // outputs.home = inputs.mb3;
}

void Ultimate::UpdateAnalogOutputs(const InputState &inputs, OutputState &outputs) {
    // Coordinate calculations to make modifier handling simpler.
    UpdateDirections(
        inputs.lf3, // Left
        inputs.lf1, // Right
        inputs.lf2, // Down
        inputs.lf4, // Up
        inputs.rt3, // C-Left
        inputs.rt5, // C-Right
        inputs.rt2, // C-Down
        inputs.rt4, // C-Up
        ANALOG_STICK_MIN,
        ANALOG_STICK_NEUTRAL,
        ANALOG_STICK_MAX,
        outputs
    );

    bool shield_button_pressed = inputs.lf4 || inputs.lf5;

    // IF MX IS PRESSED
    if (inputs.lt1) { // Set this to lt2
        // MX + Horizontal = 6625 = 53
        if (directions.horizontal) {
            outputs.leftStickX = 128 + (directions.x * 53);
            // Horizontal Shield tilt = 51
            if (shield_button_pressed) { // TEST WHAT THIS DOES WITHOUT THIS
                outputs.leftStickX = 128 + (directions.x * 51);
            }
            // Horizontal Tilts = 36
            if (inputs.rt1) { // TEST WHAT THIS DOES WITHOUT IT
                outputs.leftStickX = 128 + (directions.x * 36);
            }
        }
        // MX + Vertical = 44
        if (directions.vertical) { 
            outputs.leftStickY = 128 + (directions.y * 44);
            // Vertical Shield Tilt = 51
            if (shield_button_pressed) {
                outputs.leftStickY = 128 + (directions.y * 51);
            }
        }
        // if (directions.diagonal && shield_button_pressed) {
        //     // MX + L, R, LS, and MS + q1/2/3/4 = 6375 3750 = 51 30
        //     outputs.leftStickX = 128 + (directions.x * 51);
        //     outputs.leftStickY = 128 + (directions.y * 30);
        // }

        /* Up B angles */
        if (directions.diagonal && !shield_button_pressed) {
            // MX + q1/2/3/4 = 33.44 degrees | 53 35
            outputs.leftStickX = 128 + (directions.x * 53);
            outputs.leftStickY = 128 + (directions.y * 35);
            // (39.05) = 53 43
            if (inputs.rt2) {
                outputs.leftStickX = 128 + (directions.x * 53);
                outputs.leftStickY = 128 + (directions.y * 43);
            }
            // (36.35) = 53 39
            if (inputs.rt3) {
                outputs.leftStickX = 128 + (directions.x * 53);
                outputs.leftStickY = 128 + (directions.y * 39);
            }
            // (30.32) = 56 41
            if (inputs.rt4) {
                outputs.leftStickX = 128 + (directions.x * 53);
                outputs.leftStickY = 128 + (directions.y * 31);
            }
            // (27.85) = 49 42
            if (inputs.rt5) {
                outputs.leftStickX = 128 + (directions.x * 53);
                outputs.leftStickY = 128 + (directions.y * 28);
            }

            /* Extended Up B Angles */
            // if (inputs.rf1) {
            //     // (33.29) = 67 44
            //     outputs.leftStickX = 128 + (directions.x * 67);
            //     outputs.leftStickY = 128 + (directions.y * 44);
            //     // (39.38) = 67 55
            //     if (inputs.rt2) {
            //         outputs.leftStickX = 128 + (directions.x * 67);
            //         outputs.leftStickY = 128 + (directions.y * 55);
            //     }
            //     // (36.18) = 67 49
            //     if (inputs.rt3) {
            //         outputs.leftStickX = 128 + (directions.x * 67);
            //         outputs.leftStickY = 128 + (directions.y * 49);
            //     }
            //     // (30.2) = 67 39
            //     if (inputs.rt4) {
            //         outputs.leftStickX = 128 + (directions.x * 67);
            //         outputs.leftStickY = 128 + (directions.y * 39);
            //     }
            //     // (27.58) = 67 35
            //     if (inputs.rt5) {
            //         outputs.leftStickX = 128 + (directions.x * 67);
            //         outputs.leftStickY = 128 + (directions.y * 35);
            //     }
            // }

            // Angled fsmash/ftilt with C-Stick + MX
            // if (directions.cx != 0) {
            //     outputs.rightStickX = 128 + (directions.cx * 127);
            //     outputs.rightStickY = 128 + (directions.y * 59);
            // }

            // Angled Ftilts
            if (inputs.rt1) {
                outputs.leftStickX = 128 + (directions.x * 36);
                outputs.leftStickY = 128 + (directions.y * 26);
            }
        }
    }

    if (inputs.lt2) { // Change this to lt1
        // MY + Horizontal (even if shield is held) = 41
        if (directions.horizontal) {
            outputs.leftStickX = 128 + (directions.x * 41);
            // MY Horizontal Tilts
            if (inputs.rt1) {
                outputs.leftStickX = 128 + (directions.x * 36);
            }
        }
        // MY + Vertical (even if shield is held) = 53
        if (directions.vertical) {
            outputs.leftStickY = 128 + (directions.y * 53);
            // MY Vertical Tilts
            // WHY????????
            if (inputs.rt1) {
                outputs.leftStickY = 128 + (directions.y * 36);
            }
        }
        // if (directions.diagonal) {
        //     // MY + q1/2/3/4 = 35 59
        //     outputs.leftStickX = 128 + (directions.x * 35);
        //     outputs.leftStickY = 128 + (directions.y * 53);
        //     if (shield_button_pressed) {
        //         // MY + L, R, LS, and MS + q1/2 = 38 70
        //         outputs.leftStickX = 128 + (directions.x * 38);
        //         outputs.leftStickY = 128 + (directions.y * 70);
        //         // MY + L, R, LS, and MS + q3/4 = 40 68
        //         if (directions.x == -1) {
        //             outputs.leftStickX = 128 + (directions.x * 40);
        //             outputs.leftStickY = 128 + (directions.y * 68);
        //         }
        //     }
        // }

        /* Up B angles */
        if (directions.diagonal) {
            // (56.56) = 35 53
            outputs.leftStickX = 128 + (directions.x * 35);
            outputs.leftStickY = 128 + (directions.y * 53);
            // (50.95) = 43 53
            if (inputs.rt2) {
                outputs.leftStickX = 128 + (directions.x * 43);
                outputs.leftStickY = 128 + (directions.y * 53);
            }
            // (53.65) = 39 53
            if (inputs.rt3) {
                outputs.leftStickX = 128 + (directions.x * 49);
                outputs.leftStickY = 128 + (directions.y * 53);
            }
            // (59.68) = 31 53
            if (inputs.rt4) {
                outputs.leftStickX = 128 + (directions.x * 31);
                outputs.leftStickY = 128 + (directions.y * 53);
            }
            // (62.15) = 28 53
            if (inputs.rt5) {
                outputs.leftStickX = 128 + (directions.x * 28);
                outputs.leftStickY = 128 + (directions.y * 53);
            }

            /* Extended Up B Angles */
            // if (inputs.rf1) {
            //     // (56.71) = 44 67
            //     outputs.leftStickX = 128 + (directions.x * 44);
            //     outputs.leftStickY = 128 + (directions.y * 67);
            //     // (50.62) = 55 67
            //     if (inputs.rt2) {
            //         outputs.leftStickX = 128 + (directions.x * 55);
            //         outputs.leftStickY = 128 + (directions.y * 67);
            //     }
            //     // (53.82) = 49 67
            //     if (inputs.rt3) {
            //         outputs.leftStickX = 128 + (directions.x * 49);
            //         outputs.leftStickY = 128 + (directions.y * 67);
            //     }
            //     // (59.8) = 39 67
            //     if (inputs.rt4) {
            //         outputs.leftStickX = 128 + (directions.x * 39);
            //         outputs.leftStickY = 128 + (directions.y * 67);
            //     }
            //     // (62.42) = 35 67
            //     if (inputs.rt5) {
            //         outputs.leftStickX = 128 + (directions.x * 35);
            //         outputs.leftStickY = 128 + (directions.y * 67);
            //     }
            // }

            // MY Pivot Uptilt/Dtilt
            if (inputs.rt1) {
                outputs.leftStickX = 128 + (directions.x * 34);
                outputs.leftStickY = 128 + (directions.y * 38);
            }
        }
    }

    // C-stick ASDI Slideoff angle overrides any other C-stick modifiers (such as
    // angled fsmash).
    // if (directions.cx != 0 && directions.cy != 0) {
    //     // 5250 8500 = 42 68
    //     outputs.rightStickX = 128 + (directions.cx * 42);
    //     outputs.rightStickY = 128 + (directions.cy * 68);
    // }

    // Make it so that if rf8 is pressed it inverts all the outputs
    if(inputs.rf8){
        outputs.leftStickX = 128 - (outputs.leftStickX - 128);
        outputs.leftStickY = 128 - (outputs.leftStickY - 128);
    }

    if (inputs.lf5) {
        outputs.triggerLAnalog = 140;
    }

    if (inputs.rf4) {
        outputs.triggerRAnalog = 140;
    }

    // Shut off C-stick when using D-Pad layer.
    if (inputs.rf8) {
        outputs.rightStickX = 128;
        outputs.rightStickY = 128;
    }

}








