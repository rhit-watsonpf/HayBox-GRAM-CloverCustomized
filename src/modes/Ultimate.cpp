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
    outputs.a = inputs.rf1;
    outputs.b = inputs.rf2 || inputs.rf6;
    outputs.x = inputs.rf3;
    outputs.y = inputs.rt1;
    outputs.buttonR = inputs.rf7;
    outputs.triggerLDigital = inputs.rf4;
    outputs.triggerRDigital = inputs.rf5;
    outputs.start = inputs.mb1;

    // Turn on D-Pad layer by holding empty button, quiet button
    if (inputs.rf8 && inputs.lf5 & inputs.lt1) {
        outputs.dpadUp = inputs.rt4;
        outputs.dpadDown = inputs.rt2;
        outputs.dpadLeft = inputs.rt3;
        outputs.dpadRight = inputs.rt5;
    }

    // For reseting training mode in ultimate
    if (inputs.lf5 && inputs.lt1 && inputs.rf8 && inputs.rf7) {
        outputs.buttonL = true;
        outputs.buttonR = true;
        outputs.a = true;
    }

    // Turn on extra button layer when holding empty button, quiet button, and MX
    if(inputs.rf8 && inputs.lf5 && inputs.lt2){
        outputs.capture = inputs.rf5;
        outputs.select = inputs.rf6;
        outputs.b = false;
        outputs.home = inputs.rf7;
    }

    // Hidden Buttons for remapp.ing options
    // outputs.leftStickClick = inputs.lf6;
    // outputs.rightStickClick = inputs.lf7;
    // outputs.capture = inputs.lf5;
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

    bool shield_button_pressed = inputs.rf4 || inputs.rf5;

    // IF MX IS PRESSED
    if (inputs.lt2) {
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
        /* Up B angles */
        if (directions.diagonal) {
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
            // Angled Ftilts
            if (inputs.rt1) {
                outputs.leftStickX = 128 + (directions.x * 36);
                outputs.leftStickY = 128 + (directions.y * 30);
            }
        }
    }

    // if MY is pressed
    if (inputs.lt1) {
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
            // MY Pivot Uptilt/Dtilt
            // Is 34 in the deadzone?
            if (inputs.rt1) {
                outputs.leftStickX = 128 + (directions.x * 34);
                outputs.leftStickY = 128 + (directions.y * 42);
            }
        }
    }

    // Make it so that if rf8 is pressed it inverts all the outputs
    if(inputs.rf8){
        outputs.leftStickX = 128 - (outputs.leftStickX - 128);
        outputs.leftStickY = 128 - (outputs.leftStickY - 128);
    }

    // Shut off C-stick when using D-Pad layer.
    if (inputs.rf8) {
        outputs.rightStickX = 128;
        outputs.rightStickY = 128;
    }

    if (inputs.rf4) {
        outputs.triggerLAnalog = 128;
    }

    if (inputs.rf5) {
        outputs.triggerRAnalog = 128;
    }

}



















