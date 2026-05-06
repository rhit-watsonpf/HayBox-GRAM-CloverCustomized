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
			if (!inputs.lf4 && !inputs.lf3 && !inputs.lf5 && !inputs.rf5 && !inputs.rf6 && !inputs.rf7 && inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 1);
			};
			if (!inputs.lf4 && !inputs.lf3 && !inputs.lf5 && !inputs.rf5 && !inputs.rf6 && inputs.rf7 && !inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 2);
			};
			if (!inputs.lf4 && !inputs.lf3 && !inputs.lf5 && !inputs.rf5 && !inputs.rf6 && inputs.rf7 && inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 3);
			};
			if (!inputs.lf4 && !inputs.lf3 && !inputs.lf5 && !inputs.rf5 && inputs.rf6 && !inputs.rf7 && !inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 4);
			};
			if (!inputs.lf4 && !inputs.lf3 && !inputs.lf5 && !inputs.rf5 && inputs.rf6 && !inputs.rf7 && inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 5);
			};
			if (!inputs.lf4 && !inputs.lf3 && !inputs.lf5 && !inputs.rf5 && inputs.rf6 && inputs.rf7 && !inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 6);
			};
			if (!inputs.lf4 && !inputs.lf3 && !inputs.lf5 && !inputs.rf5 && inputs.rf6 && inputs.rf7 && inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 7);
			};
			if (!inputs.lf4 && !inputs.lf3 && !inputs.lf5 && inputs.rf5 && !inputs.rf6 && !inputs.rf7 && !inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 8);
			};
			if (!inputs.lf4 && !inputs.lf3 && !inputs.lf5 && inputs.rf5 && !inputs.rf6 && !inputs.rf7 && inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 9);
			};
			if (!inputs.lf4 && !inputs.lf3 && !inputs.lf5 && inputs.rf5 && !inputs.rf6 && inputs.rf7 && !inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 10);
			};
			if (!inputs.lf4 && !inputs.lf3 && !inputs.lf5 && inputs.rf5 && !inputs.rf6 && inputs.rf7 && inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 11);
			};
			if (!inputs.lf4 && !inputs.lf3 && !inputs.lf5 && inputs.rf5 && inputs.rf6 && !inputs.rf7 && !inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 12);
			};
			if (!inputs.lf4 && !inputs.lf3 && !inputs.lf5 && inputs.rf5 && inputs.rf6 && !inputs.rf7 && inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 13);
			};
			if (!inputs.lf4 && !inputs.lf3 && !inputs.lf5 && inputs.rf5 && inputs.rf6 && inputs.rf7 && !inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 14);
			};
			if (!inputs.lf4 && !inputs.lf3 && !inputs.lf5 && inputs.rf5 && inputs.rf6 && inputs.rf7 && inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 15);
			};
			if (!inputs.lf4 && !inputs.lf3 && inputs.lf5 && !inputs.rf5 && !inputs.rf6 && !inputs.rf7 && !inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 16);
			};
			if (!inputs.lf4 && !inputs.lf3 && inputs.lf5 && !inputs.rf5 && !inputs.rf6 && !inputs.rf7 && inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 17);
			};
			if (!inputs.lf4 && !inputs.lf3 && inputs.lf5 && !inputs.rf5 && !inputs.rf6 && inputs.rf7 && !inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 18);
			};
			if (!inputs.lf4 && !inputs.lf3 && inputs.lf5 && !inputs.rf5 && !inputs.rf6 && inputs.rf7 && inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 19);
			};
			if (!inputs.lf4 && !inputs.lf3 && inputs.lf5 && !inputs.rf5 && inputs.rf6 && !inputs.rf7 && !inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 20);
			};
			if (!inputs.lf4 && !inputs.lf3 && inputs.lf5 && !inputs.rf5 && inputs.rf6 && !inputs.rf7 && inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 21);
			};
			if (!inputs.lf4 && !inputs.lf3 && inputs.lf5 && !inputs.rf5 && inputs.rf6 && inputs.rf7 && !inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 22);
			};
			if (!inputs.lf4 && !inputs.lf3 && inputs.lf5 && !inputs.rf5 && inputs.rf6 && inputs.rf7 && inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 23);
			};
			if (!inputs.lf4 && !inputs.lf3 && inputs.lf5 && inputs.rf5 && !inputs.rf6 && !inputs.rf7 && !inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 24);
			};
			if (!inputs.lf4 && !inputs.lf3 && inputs.lf5 && inputs.rf5 && !inputs.rf6 && !inputs.rf7 && inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 25);
			};
			if (!inputs.lf4 && !inputs.lf3 && inputs.lf5 && inputs.rf5 && !inputs.rf6 && inputs.rf7 && !inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 26);
			};
			if (!inputs.lf4 && !inputs.lf3 && inputs.lf5 && inputs.rf5 && !inputs.rf6 && inputs.rf7 && inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 27);
			};
			if (!inputs.lf4 && !inputs.lf3 && inputs.lf5 && inputs.rf5 && inputs.rf6 && !inputs.rf7 && !inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 28);
			};
			if (!inputs.lf4 && !inputs.lf3 && inputs.lf5 && inputs.rf5 && inputs.rf6 && !inputs.rf7 && inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 29);
			};
			if (!inputs.lf4 && !inputs.lf3 && inputs.lf5 && inputs.rf5 && inputs.rf6 && inputs.rf7 && !inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 30);
			};
			if (!inputs.lf4 && !inputs.lf3 && inputs.lf5 && inputs.rf5 && inputs.rf6 && inputs.rf7 && inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 31);
			};
			if (!inputs.lf4 && inputs.lf3 && !inputs.lf5 && !inputs.rf5 && !inputs.rf6 && !inputs.rf7 && !inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 32);
			};
			if (!inputs.lf4 && inputs.lf3 && !inputs.lf5 && !inputs.rf5 && !inputs.rf6 && !inputs.rf7 && inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 33);
			};
			if (!inputs.lf4 && inputs.lf3 && !inputs.lf5 && !inputs.rf5 && !inputs.rf6 && inputs.rf7 && !inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 34);
			};
			if (!inputs.lf4 && inputs.lf3 && !inputs.lf5 && !inputs.rf5 && !inputs.rf6 && inputs.rf7 && inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 35);
			};
			if (!inputs.lf4 && inputs.lf3 && !inputs.lf5 && !inputs.rf5 && inputs.rf6 && !inputs.rf7 && !inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 36);
			};
			if (!inputs.lf4 && inputs.lf3 && !inputs.lf5 && !inputs.rf5 && inputs.rf6 && !inputs.rf7 && inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 37);
			};
			if (!inputs.lf4 && inputs.lf3 && !inputs.lf5 && !inputs.rf5 && inputs.rf6 && inputs.rf7 && !inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 38);
			};
			if (!inputs.lf4 && inputs.lf3 && !inputs.lf5 && !inputs.rf5 && inputs.rf6 && inputs.rf7 && inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 39);
			};
			if (!inputs.lf4 && inputs.lf3 && !inputs.lf5 && inputs.rf5 && !inputs.rf6 && !inputs.rf7 && !inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 40);
			};
			if (!inputs.lf4 && inputs.lf3 && !inputs.lf5 && inputs.rf5 && !inputs.rf6 && !inputs.rf7 && inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 41);
			};
			if (!inputs.lf4 && inputs.lf3 && !inputs.lf5 && inputs.rf5 && !inputs.rf6 && inputs.rf7 && !inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 42);
			};
			if (!inputs.lf4 && inputs.lf3 && !inputs.lf5 && inputs.rf5 && !inputs.rf6 && inputs.rf7 && inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 43);
			};
			if (!inputs.lf4 && inputs.lf3 && !inputs.lf5 && inputs.rf5 && inputs.rf6 && !inputs.rf7 && !inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 44);
			};
			if (!inputs.lf4 && inputs.lf3 && !inputs.lf5 && inputs.rf5 && inputs.rf6 && !inputs.rf7 && inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 45);
			};
			if (!inputs.lf4 && inputs.lf3 && !inputs.lf5 && inputs.rf5 && inputs.rf6 && inputs.rf7 && !inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 46);
			};
			if (!inputs.lf4 && inputs.lf3 && !inputs.lf5 && inputs.rf5 && inputs.rf6 && inputs.rf7 && inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 47);
			};
			if (!inputs.lf4 && inputs.lf3 && inputs.lf5 && !inputs.rf5 && !inputs.rf6 && !inputs.rf7 && !inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 48);
			};
			if (!inputs.lf4 && inputs.lf3 && inputs.lf5 && !inputs.rf5 && !inputs.rf6 && !inputs.rf7 && inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 49);
			};
			if (!inputs.lf4 && inputs.lf3 && inputs.lf5 && !inputs.rf5 && !inputs.rf6 && inputs.rf7 && !inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 50);
			};
			if (!inputs.lf4 && inputs.lf3 && inputs.lf5 && !inputs.rf5 && !inputs.rf6 && inputs.rf7 && inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 51);
			};
			if (!inputs.lf4 && inputs.lf3 && inputs.lf5 && !inputs.rf5 && inputs.rf6 && !inputs.rf7 && !inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 52);
			};
			if (!inputs.lf4 && inputs.lf3 && inputs.lf5 && !inputs.rf5 && inputs.rf6 && !inputs.rf7 && inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 53);
			};
			if (!inputs.lf4 && inputs.lf3 && inputs.lf5 && !inputs.rf5 && inputs.rf6 && inputs.rf7 && !inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 54);
			};
			if (!inputs.lf4 && inputs.lf3 && inputs.lf5 && !inputs.rf5 && inputs.rf6 && inputs.rf7 && inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 55);
			};
			if (!inputs.lf4 && inputs.lf3 && inputs.lf5 && inputs.rf5 && !inputs.rf6 && !inputs.rf7 && !inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 56);
			};
			if (!inputs.lf4 && inputs.lf3 && inputs.lf5 && inputs.rf5 && !inputs.rf6 && !inputs.rf7 && inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 57);
			};
			if (!inputs.lf4 && inputs.lf3 && inputs.lf5 && inputs.rf5 && !inputs.rf6 && inputs.rf7 && !inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 58);
			};
			if (!inputs.lf4 && inputs.lf3 && inputs.lf5 && inputs.rf5 && !inputs.rf6 && inputs.rf7 && inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 59);
			};
			if (!inputs.lf4 && inputs.lf3 && inputs.lf5 && inputs.rf5 && inputs.rf6 && !inputs.rf7 && !inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 60);
			};
			if (!inputs.lf4 && inputs.lf3 && inputs.lf5 && inputs.rf5 && inputs.rf6 && !inputs.rf7 && inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 61);
			};
			if (!inputs.lf4 && inputs.lf3 && inputs.lf5 && inputs.rf5 && inputs.rf6 && inputs.rf7 && !inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 62);
			};
			if (!inputs.lf4 && inputs.lf3 && inputs.lf5 && inputs.rf5 && inputs.rf6 && inputs.rf7 && inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 63);
			};
			if (inputs.lf4 && !inputs.lf3 && !inputs.lf5 && !inputs.rf5 && !inputs.rf6 && !inputs.rf7 && !inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 64);
			};
			if (inputs.lf4 && !inputs.lf3 && !inputs.lf5 && !inputs.rf5 && !inputs.rf6 && !inputs.rf7 && inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 65);
			};
			if (inputs.lf4 && !inputs.lf3 && !inputs.lf5 && !inputs.rf5 && !inputs.rf6 && inputs.rf7 && !inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 66);
			};
			if (inputs.lf4 && !inputs.lf3 && !inputs.lf5 && !inputs.rf5 && !inputs.rf6 && inputs.rf7 && inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 67);
			};
			if (inputs.lf4 && !inputs.lf3 && !inputs.lf5 && !inputs.rf5 && inputs.rf6 && !inputs.rf7 && !inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 68);
			};
			if (inputs.lf4 && !inputs.lf3 && !inputs.lf5 && !inputs.rf5 && inputs.rf6 && !inputs.rf7 && inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 69);
			};
			if (inputs.lf4 && !inputs.lf3 && !inputs.lf5 && !inputs.rf5 && inputs.rf6 && inputs.rf7 && !inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 70);
			};
			if (inputs.lf4 && !inputs.lf3 && !inputs.lf5 && !inputs.rf5 && inputs.rf6 && inputs.rf7 && inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 71);
			};
			if (inputs.lf4 && !inputs.lf3 && !inputs.lf5 && inputs.rf5 && !inputs.rf6 && !inputs.rf7 && !inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 72);
			};
			if (inputs.lf4 && !inputs.lf3 && !inputs.lf5 && inputs.rf5 && !inputs.rf6 && !inputs.rf7 && inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 73);
			};
			if (inputs.lf4 && !inputs.lf3 && !inputs.lf5 && inputs.rf5 && !inputs.rf6 && inputs.rf7 && !inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 74);
			};
			if (inputs.lf4 && !inputs.lf3 && !inputs.lf5 && inputs.rf5 && !inputs.rf6 && inputs.rf7 && inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 75);
			};
			if (inputs.lf4 && !inputs.lf3 && !inputs.lf5 && inputs.rf5 && inputs.rf6 && !inputs.rf7 && !inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 76);
			};
			if (inputs.lf4 && !inputs.lf3 && !inputs.lf5 && inputs.rf5 && inputs.rf6 && !inputs.rf7 && inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 77);
			};
			if (inputs.lf4 && !inputs.lf3 && !inputs.lf5 && inputs.rf5 && inputs.rf6 && inputs.rf7 && !inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 78);
			};
			if (inputs.lf4 && !inputs.lf3 && !inputs.lf5 && inputs.rf5 && inputs.rf6 && inputs.rf7 && inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 79);
			};
			if (inputs.lf4 && !inputs.lf3 && inputs.lf5 && !inputs.rf5 && !inputs.rf6 && !inputs.rf7 && !inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 80);
			};
			if (inputs.lf4 && !inputs.lf3 && inputs.lf5 && !inputs.rf5 && !inputs.rf6 && !inputs.rf7 && inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 81);
			};
			if (inputs.lf4 && !inputs.lf3 && inputs.lf5 && !inputs.rf5 && !inputs.rf6 && inputs.rf7 && !inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 82);
			};
			if (inputs.lf4 && !inputs.lf3 && inputs.lf5 && !inputs.rf5 && !inputs.rf6 && inputs.rf7 && inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 83);
			};
			if (inputs.lf4 && !inputs.lf3 && inputs.lf5 && !inputs.rf5 && inputs.rf6 && !inputs.rf7 && !inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 84);
			};
			if (inputs.lf4 && !inputs.lf3 && inputs.lf5 && !inputs.rf5 && inputs.rf6 && !inputs.rf7 && inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 85);
			};
			if (inputs.lf4 && !inputs.lf3 && inputs.lf5 && !inputs.rf5 && inputs.rf6 && inputs.rf7 && !inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 86);
			};
			if (inputs.lf4 && !inputs.lf3 && inputs.lf5 && !inputs.rf5 && inputs.rf6 && inputs.rf7 && inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 87);
			};
			if (inputs.lf4 && !inputs.lf3 && inputs.lf5 && inputs.rf5 && !inputs.rf6 && !inputs.rf7 && !inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 88);
			};
			if (inputs.lf4 && !inputs.lf3 && inputs.lf5 && inputs.rf5 && !inputs.rf6 && !inputs.rf7 && inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 89);
			};
			if (inputs.lf4 && !inputs.lf3 && inputs.lf5 && inputs.rf5 && !inputs.rf6 && inputs.rf7 && !inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 90);
			};
			if (inputs.lf4 && !inputs.lf3 && inputs.lf5 && inputs.rf5 && !inputs.rf6 && inputs.rf7 && inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 91);
			};
			if (inputs.lf4 && !inputs.lf3 && inputs.lf5 && inputs.rf5 && inputs.rf6 && !inputs.rf7 && !inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 92);
			};
			if (inputs.lf4 && !inputs.lf3 && inputs.lf5 && inputs.rf5 && inputs.rf6 && !inputs.rf7 && inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 93);
			};
			if (inputs.lf4 && !inputs.lf3 && inputs.lf5 && inputs.rf5 && inputs.rf6 && inputs.rf7 && !inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 94);
			};
			if (inputs.lf4 && !inputs.lf3 && inputs.lf5 && inputs.rf5 && inputs.rf6 && inputs.rf7 && inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 95);
			};
			if (inputs.lf4 && inputs.lf3 && !inputs.lf5 && !inputs.rf5 && !inputs.rf6 && !inputs.rf7 && !inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 96);
			};
			if (inputs.lf4 && inputs.lf3 && !inputs.lf5 && !inputs.rf5 && !inputs.rf6 && !inputs.rf7 && inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 97);
			};
			if (inputs.lf4 && inputs.lf3 && !inputs.lf5 && !inputs.rf5 && !inputs.rf6 && inputs.rf7 && !inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 98);
			};
			if (inputs.lf4 && inputs.lf3 && !inputs.lf5 && !inputs.rf5 && !inputs.rf6 && inputs.rf7 && inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 99);
			};
			if (inputs.lf4 && inputs.lf3 && !inputs.lf5 && !inputs.rf5 && inputs.rf6 && !inputs.rf7 && !inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 100);
			};
			if (inputs.lf4 && inputs.lf3 && !inputs.lf5 && !inputs.rf5 && inputs.rf6 && !inputs.rf7 && inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 101);
			};
			if (inputs.lf4 && inputs.lf3 && !inputs.lf5 && !inputs.rf5 && inputs.rf6 && inputs.rf7 && !inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 102);
			};
			if (inputs.lf4 && inputs.lf3 && !inputs.lf5 && !inputs.rf5 && inputs.rf6 && inputs.rf7 && inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 103);
			};
			if (inputs.lf4 && inputs.lf3 && !inputs.lf5 && inputs.rf5 && !inputs.rf6 && !inputs.rf7 && !inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 104);
			};
			if (inputs.lf4 && inputs.lf3 && !inputs.lf5 && inputs.rf5 && !inputs.rf6 && !inputs.rf7 && inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 105);
			};
			if (inputs.lf4 && inputs.lf3 && !inputs.lf5 && inputs.rf5 && !inputs.rf6 && inputs.rf7 && !inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 106);
			};
			if (inputs.lf4 && inputs.lf3 && !inputs.lf5 && inputs.rf5 && !inputs.rf6 && inputs.rf7 && inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 107);
			};
			if (inputs.lf4 && inputs.lf3 && !inputs.lf5 && inputs.rf5 && inputs.rf6 && !inputs.rf7 && !inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 108);
			};
			if (inputs.lf4 && inputs.lf3 && !inputs.lf5 && inputs.rf5 && inputs.rf6 && !inputs.rf7 && inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 109);
			};
			if (inputs.lf4 && inputs.lf3 && !inputs.lf5 && inputs.rf5 && inputs.rf6 && inputs.rf7 && !inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 110);
			};
			if (inputs.lf4 && inputs.lf3 && !inputs.lf5 && inputs.rf5 && inputs.rf6 && inputs.rf7 && inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 111);
			};
			if (inputs.lf4 && inputs.lf3 && inputs.lf5 && !inputs.rf5 && !inputs.rf6 && !inputs.rf7 && !inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 112);
			};
			if (inputs.lf4 && inputs.lf3 && inputs.lf5 && !inputs.rf5 && !inputs.rf6 && !inputs.rf7 && inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 113);
			};
			if (inputs.lf4 && inputs.lf3 && inputs.lf5 && !inputs.rf5 && !inputs.rf6 && inputs.rf7 && !inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 114);
			};
			if (inputs.lf4 && inputs.lf3 && inputs.lf5 && !inputs.rf5 && !inputs.rf6 && inputs.rf7 && inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 115);
			};
			if (inputs.lf4 && inputs.lf3 && inputs.lf5 && !inputs.rf5 && inputs.rf6 && !inputs.rf7 && !inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 116);
			};
			if (inputs.lf4 && inputs.lf3 && inputs.lf5 && !inputs.rf5 && inputs.rf6 && !inputs.rf7 && inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 117);
			};
			if (inputs.lf4 && inputs.lf3 && inputs.lf5 && !inputs.rf5 && inputs.rf6 && inputs.rf7 && !inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 118);
			};
			if (inputs.lf4 && inputs.lf3 && inputs.lf5 && !inputs.rf5 && inputs.rf6 && inputs.rf7 && inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 119);
			};
			if (inputs.lf4 && inputs.lf3 && inputs.lf5 && inputs.rf5 && !inputs.rf6 && !inputs.rf7 && !inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 120);
			};
			if (inputs.lf4 && inputs.lf3 && inputs.lf5 && inputs.rf5 && !inputs.rf6 && !inputs.rf7 && inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 121);
			};
			if (inputs.lf4 && inputs.lf3 && inputs.lf5 && inputs.rf5 && !inputs.rf6 && inputs.rf7 && !inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 122);
			};
			if (inputs.lf4 && inputs.lf3 && inputs.lf5 && inputs.rf5 && !inputs.rf6 && inputs.rf7 && inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 123);
			};
			if (inputs.lf4 && inputs.lf3 && inputs.lf5 && inputs.rf5 && inputs.rf6 && !inputs.rf7 && !inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 124);
			};
			if (inputs.lf4 && inputs.lf3 && inputs.lf5 && inputs.rf5 && inputs.rf6 && !inputs.rf7 && inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 125);
			};
			if (inputs.lf4 && inputs.lf3 && inputs.lf5 && inputs.rf5 && inputs.rf6 && inputs.rf7 && !inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 126);
			};
			if (inputs.lf4 && inputs.lf3 && inputs.lf5 && inputs.rf5 && inputs.rf6 && inputs.rf7 && inputs.rf8) {
				outputs.leftStickX = 128 + (directions.x * 127);
			};

        }
        if(directions.diagonal){
            if (inputs.lf5 && inputs.rf5 && inputs.rf6 && inputs.rf7 && !inputs.rf8) {
				// Angle is 2.812
				outputs.leftStickX = 128 + (directions.x * 127);
				outputs.leftStickY = 128 + (directions.y * 6);
			};
			if (inputs.lf5 && inputs.rf5 && inputs.rf6 && !inputs.rf7 && inputs.rf8) {
				// Angle is 5.625
				outputs.leftStickX = 128 + (directions.x * 127);
				outputs.leftStickY = 128 + (directions.y * 12);
			};
			if (inputs.lf5 && inputs.rf5 && inputs.rf6 && !inputs.rf7 && !inputs.rf8) {
				// Angle is 8.438
				outputs.leftStickX = 128 + (directions.x * 126);
				outputs.leftStickY = 128 + (directions.y * 18);
			};
			if (inputs.lf5 && inputs.rf5 && !inputs.rf6 && inputs.rf7 && inputs.rf8) {
				// Angle is 11.25
				outputs.leftStickX = 128 + (directions.x * 125);
				outputs.leftStickY = 128 + (directions.y * 24);
			};
			if (inputs.lf5 && inputs.rf5 && !inputs.rf6 && inputs.rf7 && !inputs.rf8) {
				// Angle is 14.06
				outputs.leftStickX = 128 + (directions.x * 124);
				outputs.leftStickY = 128 + (directions.y * 31);
			};
			if (inputs.lf5 && inputs.rf5 && !inputs.rf6 && !inputs.rf7 && inputs.rf8) {
				// Angle is 16.88
				outputs.leftStickX = 128 + (directions.x * 122);
				outputs.leftStickY = 128 + (directions.y * 37);
			};
			if (inputs.lf5 && inputs.rf5 && !inputs.rf6 && !inputs.rf7 && !inputs.rf8) {
				// Angle is 19.69
				outputs.leftStickX = 128 + (directions.x * 120);
				outputs.leftStickY = 128 + (directions.y * 43);
			};
			if (inputs.lf5 && !inputs.rf5 && inputs.rf6 && inputs.rf7 && inputs.rf8) {
				// Angle is 22.50
				outputs.leftStickX = 128 + (directions.x * 118);
				outputs.leftStickY = 128 + (directions.y * 48);
			};
			if (inputs.lf5 && !inputs.rf5 && inputs.rf6 && inputs.rf7 && !inputs.rf8) {
				// Angle is 25.31
				outputs.leftStickX = 128 + (directions.x * 115);
				outputs.leftStickY = 128 + (directions.y * 54);
			};
			if (inputs.lf5 && !inputs.rf5 && inputs.rf6 && !inputs.rf7 && inputs.rf8) {
				// Angle is 28.12
				outputs.leftStickX = 128 + (directions.x * 112);
				outputs.leftStickY = 128 + (directions.y * 60);
			};
			if (inputs.lf5 && !inputs.rf5 && inputs.rf6 && !inputs.rf7 && !inputs.rf8) {
				// Angle is 30.94
				outputs.leftStickX = 128 + (directions.x * 109);
				outputs.leftStickY = 128 + (directions.y * 65);
			};
			if (inputs.lf5 && !inputs.rf5 && !inputs.rf6 && inputs.rf7 && inputs.rf8) {
				// Angle is 33.75
				outputs.leftStickX = 128 + (directions.x * 106);
				outputs.leftStickY = 128 + (directions.y * 71);
			};
			if (inputs.lf5 && !inputs.rf5 && !inputs.rf6 && inputs.rf7 && !inputs.rf8) {
				// Angle is 36.56
				outputs.leftStickX = 128 + (directions.x * 102);
				outputs.leftStickY = 128 + (directions.y * 76);
			};
			if (inputs.lf5 && !inputs.rf5 && !inputs.rf6 && !inputs.rf7 && inputs.rf8) {
				// Angle is 39.38
				outputs.leftStickX = 128 + (directions.x * 98);
				outputs.leftStickY = 128 + (directions.y * 81);
			};
			if (inputs.lf5 && !inputs.rf5 && !inputs.rf6 && !inputs.rf7 && !inputs.rf8) {
				// Angle is 42.19
				outputs.leftStickX = 128 + (directions.x * 94);
				outputs.leftStickY = 128 + (directions.y * 85);
			};
			if (!inputs.lf5 && inputs.rf5 && inputs.rf6 && inputs.rf7 && inputs.rf8) {
				// Angle is 45.
				outputs.leftStickX = 128 + (directions.x * 90);
				outputs.leftStickY = 128 + (directions.y * 90);
			};
			if (!inputs.lf5 && inputs.rf5 && inputs.rf6 && inputs.rf7 && !inputs.rf8) {
				// Angle is 47.81
				outputs.leftStickX = 128 + (directions.x * 85);
				outputs.leftStickY = 128 + (directions.y * 94);
			};
			if (!inputs.lf5 && inputs.rf5 && inputs.rf6 && !inputs.rf7 && inputs.rf8) {
				// Angle is 50.62
				outputs.leftStickX = 128 + (directions.x * 81);
				outputs.leftStickY = 128 + (directions.y * 98);
			};
			if (!inputs.lf5 && inputs.rf5 && inputs.rf6 && !inputs.rf7 && !inputs.rf8) {
				// Angle is 53.44
				outputs.leftStickX = 128 + (directions.x * 76);
				outputs.leftStickY = 128 + (directions.y * 102);
			};
			if (!inputs.lf5 && inputs.rf5 && !inputs.rf6 && inputs.rf7 && inputs.rf8) {
				// Angle is 56.25
				outputs.leftStickX = 128 + (directions.x * 71);
				outputs.leftStickY = 128 + (directions.y * 106);
			};
			if (!inputs.lf5 && inputs.rf5 && !inputs.rf6 && inputs.rf7 && !inputs.rf8) {
				// Angle is 59.06
				outputs.leftStickX = 128 + (directions.x * 65);
				outputs.leftStickY = 128 + (directions.y * 109);
			};
			if (!inputs.lf5 && inputs.rf5 && !inputs.rf6 && !inputs.rf7 && inputs.rf8) {
				// Angle is 61.88
				outputs.leftStickX = 128 + (directions.x * 60);
				outputs.leftStickY = 128 + (directions.y * 112);
			};
			if (!inputs.lf5 && inputs.rf5 && !inputs.rf6 && !inputs.rf7 && !inputs.rf8) {
				// Angle is 64.69
				outputs.leftStickX = 128 + (directions.x * 54);
				outputs.leftStickY = 128 + (directions.y * 115);
			};
			if (!inputs.lf5 && !inputs.rf5 && inputs.rf6 && inputs.rf7 && inputs.rf8) {
				// Angle is 67.50
				outputs.leftStickX = 128 + (directions.x * 48);
				outputs.leftStickY = 128 + (directions.y * 118);
			};
			if (!inputs.lf5 && !inputs.rf5 && inputs.rf6 && inputs.rf7 && !inputs.rf8) {
				// Angle is 70.31
				outputs.leftStickX = 128 + (directions.x * 43);
				outputs.leftStickY = 128 + (directions.y * 120);
			};
			if (!inputs.lf5 && !inputs.rf5 && inputs.rf6 && !inputs.rf7 && inputs.rf8) {
				// Angle is 73.12
				outputs.leftStickX = 128 + (directions.x * 37);
				outputs.leftStickY = 128 + (directions.y * 122);
			};
			if (!inputs.lf5 && !inputs.rf5 && inputs.rf6 && !inputs.rf7 && !inputs.rf8) {
				// Angle is 75.94
				outputs.leftStickX = 128 + (directions.x * 31);
				outputs.leftStickY = 128 + (directions.y * 124);
			};
			if (!inputs.lf5 && !inputs.rf5 && !inputs.rf6 && inputs.rf7 && inputs.rf8) {
				// Angle is 78.75
				outputs.leftStickX = 128 + (directions.x * 24);
				outputs.leftStickY = 128 + (directions.y * 125);
			};
			if (!inputs.lf5 && !inputs.rf5 && !inputs.rf6 && inputs.rf7 && !inputs.rf8) {
				// Angle is 81.56
				outputs.leftStickX = 128 + (directions.x * 18);
				outputs.leftStickY = 128 + (directions.y * 126);
			};
			if (!inputs.lf5 && !inputs.rf5 && !inputs.rf6 && !inputs.rf7 && inputs.rf8) {
				// Angle is 84.38
				outputs.leftStickX = 128 + (directions.x * 12);
				outputs.leftStickY = 128 + (directions.y * 127);
			};
			if (!inputs.lf5 && !inputs.rf5 && !inputs.rf6 && !inputs.rf7 && !inputs.rf8) {
				// Angle is 87.19
				outputs.leftStickX = 128 + (directions.x * 6);
				outputs.leftStickY = 128 + (directions.y * 127);
			};

        }
        if(directions.vertical){
			if (!inputs.lf4 && !inputs.lf3 && !inputs.lf5 && !inputs.rf5 && !inputs.rf6 && !inputs.rf7 && inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 1);
			};
			if (!inputs.lf4 && !inputs.lf3 && !inputs.lf5 && !inputs.rf5 && !inputs.rf6 && inputs.rf7 && !inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 2);
			};
			if (!inputs.lf4 && !inputs.lf3 && !inputs.lf5 && !inputs.rf5 && !inputs.rf6 && inputs.rf7 && inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 3);
			};
			if (!inputs.lf4 && !inputs.lf3 && !inputs.lf5 && !inputs.rf5 && inputs.rf6 && !inputs.rf7 && !inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 4);
			};
			if (!inputs.lf4 && !inputs.lf3 && !inputs.lf5 && !inputs.rf5 && inputs.rf6 && !inputs.rf7 && inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 5);
			};
			if (!inputs.lf4 && !inputs.lf3 && !inputs.lf5 && !inputs.rf5 && inputs.rf6 && inputs.rf7 && !inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 6);
			};
			if (!inputs.lf4 && !inputs.lf3 && !inputs.lf5 && !inputs.rf5 && inputs.rf6 && inputs.rf7 && inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 7);
			};
			if (!inputs.lf4 && !inputs.lf3 && !inputs.lf5 && inputs.rf5 && !inputs.rf6 && !inputs.rf7 && !inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 8);
			};
			if (!inputs.lf4 && !inputs.lf3 && !inputs.lf5 && inputs.rf5 && !inputs.rf6 && !inputs.rf7 && inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 9);
			};
			if (!inputs.lf4 && !inputs.lf3 && !inputs.lf5 && inputs.rf5 && !inputs.rf6 && inputs.rf7 && !inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 10);
			};
			if (!inputs.lf4 && !inputs.lf3 && !inputs.lf5 && inputs.rf5 && !inputs.rf6 && inputs.rf7 && inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 11);
			};
			if (!inputs.lf4 && !inputs.lf3 && !inputs.lf5 && inputs.rf5 && inputs.rf6 && !inputs.rf7 && !inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 12);
			};
			if (!inputs.lf4 && !inputs.lf3 && !inputs.lf5 && inputs.rf5 && inputs.rf6 && !inputs.rf7 && inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 13);
			};
			if (!inputs.lf4 && !inputs.lf3 && !inputs.lf5 && inputs.rf5 && inputs.rf6 && inputs.rf7 && !inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 14);
			};
			if (!inputs.lf4 && !inputs.lf3 && !inputs.lf5 && inputs.rf5 && inputs.rf6 && inputs.rf7 && inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 15);
			};
			if (!inputs.lf4 && !inputs.lf3 && inputs.lf5 && !inputs.rf5 && !inputs.rf6 && !inputs.rf7 && !inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 16);
			};
			if (!inputs.lf4 && !inputs.lf3 && inputs.lf5 && !inputs.rf5 && !inputs.rf6 && !inputs.rf7 && inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 17);
			};
			if (!inputs.lf4 && !inputs.lf3 && inputs.lf5 && !inputs.rf5 && !inputs.rf6 && inputs.rf7 && !inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 18);
			};
			if (!inputs.lf4 && !inputs.lf3 && inputs.lf5 && !inputs.rf5 && !inputs.rf6 && inputs.rf7 && inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 19);
			};
			if (!inputs.lf4 && !inputs.lf3 && inputs.lf5 && !inputs.rf5 && inputs.rf6 && !inputs.rf7 && !inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 20);
			};
			if (!inputs.lf4 && !inputs.lf3 && inputs.lf5 && !inputs.rf5 && inputs.rf6 && !inputs.rf7 && inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 21);
			};
			if (!inputs.lf4 && !inputs.lf3 && inputs.lf5 && !inputs.rf5 && inputs.rf6 && inputs.rf7 && !inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 22);
			};
			if (!inputs.lf4 && !inputs.lf3 && inputs.lf5 && !inputs.rf5 && inputs.rf6 && inputs.rf7 && inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 23);
			};
			if (!inputs.lf4 && !inputs.lf3 && inputs.lf5 && inputs.rf5 && !inputs.rf6 && !inputs.rf7 && !inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 24);
			};
			if (!inputs.lf4 && !inputs.lf3 && inputs.lf5 && inputs.rf5 && !inputs.rf6 && !inputs.rf7 && inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 25);
			};
			if (!inputs.lf4 && !inputs.lf3 && inputs.lf5 && inputs.rf5 && !inputs.rf6 && inputs.rf7 && !inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 26);
			};
			if (!inputs.lf4 && !inputs.lf3 && inputs.lf5 && inputs.rf5 && !inputs.rf6 && inputs.rf7 && inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 27);
			};
			if (!inputs.lf4 && !inputs.lf3 && inputs.lf5 && inputs.rf5 && inputs.rf6 && !inputs.rf7 && !inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 28);
			};
			if (!inputs.lf4 && !inputs.lf3 && inputs.lf5 && inputs.rf5 && inputs.rf6 && !inputs.rf7 && inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 29);
			};
			if (!inputs.lf4 && !inputs.lf3 && inputs.lf5 && inputs.rf5 && inputs.rf6 && inputs.rf7 && !inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 30);
			};
			if (!inputs.lf4 && !inputs.lf3 && inputs.lf5 && inputs.rf5 && inputs.rf6 && inputs.rf7 && inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 31);
			};
			if (!inputs.lf4 && inputs.lf3 && !inputs.lf5 && !inputs.rf5 && !inputs.rf6 && !inputs.rf7 && !inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 32);
			};
			if (!inputs.lf4 && inputs.lf3 && !inputs.lf5 && !inputs.rf5 && !inputs.rf6 && !inputs.rf7 && inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 33);
			};
			if (!inputs.lf4 && inputs.lf3 && !inputs.lf5 && !inputs.rf5 && !inputs.rf6 && inputs.rf7 && !inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 34);
			};
			if (!inputs.lf4 && inputs.lf3 && !inputs.lf5 && !inputs.rf5 && !inputs.rf6 && inputs.rf7 && inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 35);
			};
			if (!inputs.lf4 && inputs.lf3 && !inputs.lf5 && !inputs.rf5 && inputs.rf6 && !inputs.rf7 && !inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 36);
			};
			if (!inputs.lf4 && inputs.lf3 && !inputs.lf5 && !inputs.rf5 && inputs.rf6 && !inputs.rf7 && inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 37);
			};
			if (!inputs.lf4 && inputs.lf3 && !inputs.lf5 && !inputs.rf5 && inputs.rf6 && inputs.rf7 && !inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 38);
			};
			if (!inputs.lf4 && inputs.lf3 && !inputs.lf5 && !inputs.rf5 && inputs.rf6 && inputs.rf7 && inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 39);
			};
			if (!inputs.lf4 && inputs.lf3 && !inputs.lf5 && inputs.rf5 && !inputs.rf6 && !inputs.rf7 && !inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 40);
			};
			if (!inputs.lf4 && inputs.lf3 && !inputs.lf5 && inputs.rf5 && !inputs.rf6 && !inputs.rf7 && inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 41);
			};
			if (!inputs.lf4 && inputs.lf3 && !inputs.lf5 && inputs.rf5 && !inputs.rf6 && inputs.rf7 && !inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 42);
			};
			if (!inputs.lf4 && inputs.lf3 && !inputs.lf5 && inputs.rf5 && !inputs.rf6 && inputs.rf7 && inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 43);
			};
			if (!inputs.lf4 && inputs.lf3 && !inputs.lf5 && inputs.rf5 && inputs.rf6 && !inputs.rf7 && !inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 44);
			};
			if (!inputs.lf4 && inputs.lf3 && !inputs.lf5 && inputs.rf5 && inputs.rf6 && !inputs.rf7 && inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 45);
			};
			if (!inputs.lf4 && inputs.lf3 && !inputs.lf5 && inputs.rf5 && inputs.rf6 && inputs.rf7 && !inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 46);
			};
			if (!inputs.lf4 && inputs.lf3 && !inputs.lf5 && inputs.rf5 && inputs.rf6 && inputs.rf7 && inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 47);
			};
			if (!inputs.lf4 && inputs.lf3 && inputs.lf5 && !inputs.rf5 && !inputs.rf6 && !inputs.rf7 && !inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 48);
			};
			if (!inputs.lf4 && inputs.lf3 && inputs.lf5 && !inputs.rf5 && !inputs.rf6 && !inputs.rf7 && inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 49);
			};
			if (!inputs.lf4 && inputs.lf3 && inputs.lf5 && !inputs.rf5 && !inputs.rf6 && inputs.rf7 && !inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 50);
			};
			if (!inputs.lf4 && inputs.lf3 && inputs.lf5 && !inputs.rf5 && !inputs.rf6 && inputs.rf7 && inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 51);
			};
			if (!inputs.lf4 && inputs.lf3 && inputs.lf5 && !inputs.rf5 && inputs.rf6 && !inputs.rf7 && !inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 52);
			};
			if (!inputs.lf4 && inputs.lf3 && inputs.lf5 && !inputs.rf5 && inputs.rf6 && !inputs.rf7 && inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 53);
			};
			if (!inputs.lf4 && inputs.lf3 && inputs.lf5 && !inputs.rf5 && inputs.rf6 && inputs.rf7 && !inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 54);
			};
			if (!inputs.lf4 && inputs.lf3 && inputs.lf5 && !inputs.rf5 && inputs.rf6 && inputs.rf7 && inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 55);
			};
			if (!inputs.lf4 && inputs.lf3 && inputs.lf5 && inputs.rf5 && !inputs.rf6 && !inputs.rf7 && !inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 56);
			};
			if (!inputs.lf4 && inputs.lf3 && inputs.lf5 && inputs.rf5 && !inputs.rf6 && !inputs.rf7 && inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 57);
			};
			if (!inputs.lf4 && inputs.lf3 && inputs.lf5 && inputs.rf5 && !inputs.rf6 && inputs.rf7 && !inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 58);
			};
			if (!inputs.lf4 && inputs.lf3 && inputs.lf5 && inputs.rf5 && !inputs.rf6 && inputs.rf7 && inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 59);
			};
			if (!inputs.lf4 && inputs.lf3 && inputs.lf5 && inputs.rf5 && inputs.rf6 && !inputs.rf7 && !inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 60);
			};
			if (!inputs.lf4 && inputs.lf3 && inputs.lf5 && inputs.rf5 && inputs.rf6 && !inputs.rf7 && inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 61);
			};
			if (!inputs.lf4 && inputs.lf3 && inputs.lf5 && inputs.rf5 && inputs.rf6 && inputs.rf7 && !inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 62);
			};
			if (!inputs.lf4 && inputs.lf3 && inputs.lf5 && inputs.rf5 && inputs.rf6 && inputs.rf7 && inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 63);
			};
			if (inputs.lf4 && !inputs.lf3 && !inputs.lf5 && !inputs.rf5 && !inputs.rf6 && !inputs.rf7 && !inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 64);
			};
			if (inputs.lf4 && !inputs.lf3 && !inputs.lf5 && !inputs.rf5 && !inputs.rf6 && !inputs.rf7 && inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 65);
			};
			if (inputs.lf4 && !inputs.lf3 && !inputs.lf5 && !inputs.rf5 && !inputs.rf6 && inputs.rf7 && !inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 66);
			};
			if (inputs.lf4 && !inputs.lf3 && !inputs.lf5 && !inputs.rf5 && !inputs.rf6 && inputs.rf7 && inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 67);
			};
			if (inputs.lf4 && !inputs.lf3 && !inputs.lf5 && !inputs.rf5 && inputs.rf6 && !inputs.rf7 && !inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 68);
			};
			if (inputs.lf4 && !inputs.lf3 && !inputs.lf5 && !inputs.rf5 && inputs.rf6 && !inputs.rf7 && inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 69);
			};
			if (inputs.lf4 && !inputs.lf3 && !inputs.lf5 && !inputs.rf5 && inputs.rf6 && inputs.rf7 && !inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 70);
			};
			if (inputs.lf4 && !inputs.lf3 && !inputs.lf5 && !inputs.rf5 && inputs.rf6 && inputs.rf7 && inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 71);
			};
			if (inputs.lf4 && !inputs.lf3 && !inputs.lf5 && inputs.rf5 && !inputs.rf6 && !inputs.rf7 && !inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 72);
			};
			if (inputs.lf4 && !inputs.lf3 && !inputs.lf5 && inputs.rf5 && !inputs.rf6 && !inputs.rf7 && inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 73);
			};
			if (inputs.lf4 && !inputs.lf3 && !inputs.lf5 && inputs.rf5 && !inputs.rf6 && inputs.rf7 && !inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 74);
			};
			if (inputs.lf4 && !inputs.lf3 && !inputs.lf5 && inputs.rf5 && !inputs.rf6 && inputs.rf7 && inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 75);
			};
			if (inputs.lf4 && !inputs.lf3 && !inputs.lf5 && inputs.rf5 && inputs.rf6 && !inputs.rf7 && !inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 76);
			};
			if (inputs.lf4 && !inputs.lf3 && !inputs.lf5 && inputs.rf5 && inputs.rf6 && !inputs.rf7 && inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 77);
			};
			if (inputs.lf4 && !inputs.lf3 && !inputs.lf5 && inputs.rf5 && inputs.rf6 && inputs.rf7 && !inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 78);
			};
			if (inputs.lf4 && !inputs.lf3 && !inputs.lf5 && inputs.rf5 && inputs.rf6 && inputs.rf7 && inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 79);
			};
			if (inputs.lf4 && !inputs.lf3 && inputs.lf5 && !inputs.rf5 && !inputs.rf6 && !inputs.rf7 && !inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 80);
			};
			if (inputs.lf4 && !inputs.lf3 && inputs.lf5 && !inputs.rf5 && !inputs.rf6 && !inputs.rf7 && inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 81);
			};
			if (inputs.lf4 && !inputs.lf3 && inputs.lf5 && !inputs.rf5 && !inputs.rf6 && inputs.rf7 && !inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 82);
			};
			if (inputs.lf4 && !inputs.lf3 && inputs.lf5 && !inputs.rf5 && !inputs.rf6 && inputs.rf7 && inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 83);
			};
			if (inputs.lf4 && !inputs.lf3 && inputs.lf5 && !inputs.rf5 && inputs.rf6 && !inputs.rf7 && !inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 84);
			};
			if (inputs.lf4 && !inputs.lf3 && inputs.lf5 && !inputs.rf5 && inputs.rf6 && !inputs.rf7 && inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 85);
			};
			if (inputs.lf4 && !inputs.lf3 && inputs.lf5 && !inputs.rf5 && inputs.rf6 && inputs.rf7 && !inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 86);
			};
			if (inputs.lf4 && !inputs.lf3 && inputs.lf5 && !inputs.rf5 && inputs.rf6 && inputs.rf7 && inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 87);
			};
			if (inputs.lf4 && !inputs.lf3 && inputs.lf5 && inputs.rf5 && !inputs.rf6 && !inputs.rf7 && !inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 88);
			};
			if (inputs.lf4 && !inputs.lf3 && inputs.lf5 && inputs.rf5 && !inputs.rf6 && !inputs.rf7 && inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 89);
			};
			if (inputs.lf4 && !inputs.lf3 && inputs.lf5 && inputs.rf5 && !inputs.rf6 && inputs.rf7 && !inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 90);
			};
			if (inputs.lf4 && !inputs.lf3 && inputs.lf5 && inputs.rf5 && !inputs.rf6 && inputs.rf7 && inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 91);
			};
			if (inputs.lf4 && !inputs.lf3 && inputs.lf5 && inputs.rf5 && inputs.rf6 && !inputs.rf7 && !inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 92);
			};
			if (inputs.lf4 && !inputs.lf3 && inputs.lf5 && inputs.rf5 && inputs.rf6 && !inputs.rf7 && inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 93);
			};
			if (inputs.lf4 && !inputs.lf3 && inputs.lf5 && inputs.rf5 && inputs.rf6 && inputs.rf7 && !inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 94);
			};
			if (inputs.lf4 && !inputs.lf3 && inputs.lf5 && inputs.rf5 && inputs.rf6 && inputs.rf7 && inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 95);
			};
			if (inputs.lf4 && inputs.lf3 && !inputs.lf5 && !inputs.rf5 && !inputs.rf6 && !inputs.rf7 && !inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 96);
			};
			if (inputs.lf4 && inputs.lf3 && !inputs.lf5 && !inputs.rf5 && !inputs.rf6 && !inputs.rf7 && inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 97);
			};
			if (inputs.lf4 && inputs.lf3 && !inputs.lf5 && !inputs.rf5 && !inputs.rf6 && inputs.rf7 && !inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 98);
			};
			if (inputs.lf4 && inputs.lf3 && !inputs.lf5 && !inputs.rf5 && !inputs.rf6 && inputs.rf7 && inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 99);
			};
			if (inputs.lf4 && inputs.lf3 && !inputs.lf5 && !inputs.rf5 && inputs.rf6 && !inputs.rf7 && !inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 100);
			};
			if (inputs.lf4 && inputs.lf3 && !inputs.lf5 && !inputs.rf5 && inputs.rf6 && !inputs.rf7 && inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 101);
			};
			if (inputs.lf4 && inputs.lf3 && !inputs.lf5 && !inputs.rf5 && inputs.rf6 && inputs.rf7 && !inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 102);
			};
			if (inputs.lf4 && inputs.lf3 && !inputs.lf5 && !inputs.rf5 && inputs.rf6 && inputs.rf7 && inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 103);
			};
			if (inputs.lf4 && inputs.lf3 && !inputs.lf5 && inputs.rf5 && !inputs.rf6 && !inputs.rf7 && !inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 104);
			};
			if (inputs.lf4 && inputs.lf3 && !inputs.lf5 && inputs.rf5 && !inputs.rf6 && !inputs.rf7 && inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 105);
			};
			if (inputs.lf4 && inputs.lf3 && !inputs.lf5 && inputs.rf5 && !inputs.rf6 && inputs.rf7 && !inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 106);
			};
			if (inputs.lf4 && inputs.lf3 && !inputs.lf5 && inputs.rf5 && !inputs.rf6 && inputs.rf7 && inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 107);
			};
			if (inputs.lf4 && inputs.lf3 && !inputs.lf5 && inputs.rf5 && inputs.rf6 && !inputs.rf7 && !inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 108);
			};
			if (inputs.lf4 && inputs.lf3 && !inputs.lf5 && inputs.rf5 && inputs.rf6 && !inputs.rf7 && inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 109);
			};
			if (inputs.lf4 && inputs.lf3 && !inputs.lf5 && inputs.rf5 && inputs.rf6 && inputs.rf7 && !inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 110);
			};
			if (inputs.lf4 && inputs.lf3 && !inputs.lf5 && inputs.rf5 && inputs.rf6 && inputs.rf7 && inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 111);
			};
			if (inputs.lf4 && inputs.lf3 && inputs.lf5 && !inputs.rf5 && !inputs.rf6 && !inputs.rf7 && !inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 112);
			};
			if (inputs.lf4 && inputs.lf3 && inputs.lf5 && !inputs.rf5 && !inputs.rf6 && !inputs.rf7 && inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 113);
			};
			if (inputs.lf4 && inputs.lf3 && inputs.lf5 && !inputs.rf5 && !inputs.rf6 && inputs.rf7 && !inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 114);
			};
			if (inputs.lf4 && inputs.lf3 && inputs.lf5 && !inputs.rf5 && !inputs.rf6 && inputs.rf7 && inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 115);
			};
			if (inputs.lf4 && inputs.lf3 && inputs.lf5 && !inputs.rf5 && inputs.rf6 && !inputs.rf7 && !inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 116);
			};
			if (inputs.lf4 && inputs.lf3 && inputs.lf5 && !inputs.rf5 && inputs.rf6 && !inputs.rf7 && inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 117);
			};
			if (inputs.lf4 && inputs.lf3 && inputs.lf5 && !inputs.rf5 && inputs.rf6 && inputs.rf7 && !inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 118);
			};
			if (inputs.lf4 && inputs.lf3 && inputs.lf5 && !inputs.rf5 && inputs.rf6 && inputs.rf7 && inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 119);
			};
			if (inputs.lf4 && inputs.lf3 && inputs.lf5 && inputs.rf5 && !inputs.rf6 && !inputs.rf7 && !inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 120);
			};
			if (inputs.lf4 && inputs.lf3 && inputs.lf5 && inputs.rf5 && !inputs.rf6 && !inputs.rf7 && inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 121);
			};
			if (inputs.lf4 && inputs.lf3 && inputs.lf5 && inputs.rf5 && !inputs.rf6 && inputs.rf7 && !inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 122);
			};
			if (inputs.lf4 && inputs.lf3 && inputs.lf5 && inputs.rf5 && !inputs.rf6 && inputs.rf7 && inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 123);
			};
			if (inputs.lf4 && inputs.lf3 && inputs.lf5 && inputs.rf5 && inputs.rf6 && !inputs.rf7 && !inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 124);
			};
			if (inputs.lf4 && inputs.lf3 && inputs.lf5 && inputs.rf5 && inputs.rf6 && !inputs.rf7 && inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 125);
			};
			if (inputs.lf4 && inputs.lf3 && inputs.lf5 && inputs.rf5 && inputs.rf6 && inputs.rf7 && !inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 126);
			};
			if (inputs.lf4 && inputs.lf3 && inputs.lf5 && inputs.rf5 && inputs.rf6 && inputs.rf7 && inputs.rf8) {
				outputs.leftStickY = 128 + (directions.y * 127);
			};


        }
    }
    
    if(inputs.rf4){
        outputs.leftStickX = 128 - (outputs.leftStickX - 128);
        outputs.leftStickY = 128 - (outputs.leftStickY - 128);
    }
}



















