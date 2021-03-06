/*
Melody

Plays a melody

circuit:
* 8-ohm speaker on digital pin 8

created 21 Jan 2010
modified 30 Aug 2011
by Tom Igoe

This example code is in the public domain.

http://www.arduino.cc/en/Tutorial/Tone

*/
#include "pitches.h"

// notes in the melody:
int melody[] = {
	//NOTE_C2, NOTE_C3, NOTE_E2, NOTE_F2, NOTE_FS2, NOTE_G2, NOTE_G1, NOTE_G2
	//NOTE_C2, NOTE_G2, NOTE_A2, NOTE_G2, NOTE_C2, NOTE_G2, NOTE_A2, NOTE_G2
	//NOTE_C2, NOTE_C3, NOTE_E2, NOTE_G2, NOTE_E2, NOTE_G2
	//NOTE_C2, NOTE_C3, NOTE_E2, NOTE_F2, NOTE_FS2, NOTE_G2, NOTE_G1, NOTE_G2, 0, NOTE_C2, NOTE_G2, NOTE_A2, NOTE_G2, NOTE_C2, NOTE_G2, NOTE_A2, NOTE_G2, 0, NOTE_C2, NOTE_C3, NOTE_E2, NOTE_G2, NOTE_E2, NOTE_G2
	NOTE_B0, NOTE_DS8, NOTE_B0, NOTE_DS8, NOTE_B0, NOTE_DS8, NOTE_B0, NOTE_DS8
};

// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {
	//4, 4, 4, 4, 4, 4, 4, 4
	//2, 6, 2, 6, 2, 6, 2, 6
	//1, 2, 6, 1, 2, 6
	//4, 4, 4, 4, 4, 4, 4, 4, 1, 2, 6, 2, 6, 2, 6, 2, 6, 1, 1, 2, 6, 1, 2, 6
	4, 4, 4, 4, 4, 4, 4, 4
};

void setup() {
	// iterate over the notes of the melody:
	// no need to repeat the melody.
	/*for (int thisNote = 0; thisNote < 8; thisNote++) {

	// to calculate the note duration, take one second
	// divided by the note type.
	//e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
	int noteDuration = 1000 / noteDurations[thisNote];
	tone(8, melody[thisNote], noteDuration);

	// to distinguish the notes, set a minimum time between them.
	// the note's duration + 30% seems to work well:
	int pauseBetweenNotes = noteDuration * 1.30;
	delay(pauseBetweenNotes);
	// stop the tone playing:
	noTone(8);
	}*/

}

void loop() {

}