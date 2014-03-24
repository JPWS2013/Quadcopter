/*
  Melody
 
 Plays a melody 
 
 circuit:
 * 8-ohm speaker on digital pin 8
 
 created 21 Jan 2010
 modified 30 Aug 2011
 by Tom Igoe 

This example code is in the public domain.
 
 http://arduino.cc/en/Tutorial/Tone
 
 */
 #include "pitches.h"

char input = '-1';
void setup() {
  //start serial port
  Serial.begin(9600);
}

void loop() {
  input = Serial.read();
  if (input != -1) {
    if (input == '1') {
      Serial.println("Communication Tested");
    } else if (input == '0') {
      Serial.println("Shutting everything down");
    }
  
  }
}

void playBeeps (int how_many, int length){
  for (int notes_played = 0; notes_played < how_many; notes_played++){
    int note_duration = 1000 / length;
    playNote(note_duration);
    int pause_length = note_duration * 1.30;
    delay(pause_length);
  }
}
void playNote (int note_duration){
  int note_tone = NOTE_D5;
  int speaker_pin = 8;
  tone(speaker_pin, note_tone, note_duration);
}
