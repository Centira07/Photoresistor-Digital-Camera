int sensor;
int pixel;
bool but = 0;

int s0 = 3; // Corresponds to a 0b001 binary for most of the multiplexer
int s1 = 4; // Corresponds to a 0b010 binary for most of the multiplexer
int s2 = 5; // Corresponds to a 0b100 binary for most of the multiplexer
int EN = 2;
const int buttonPin = 12;

int SENSE = 1023;
int buttonState = 0;

void setup() {
  Serial.begin(9600);
  pinMode(s0, OUTPUT);
  pinMode(s1, OUTPUT);
  pinMode(s2, OUTPUT);
  pinMode(EN, OUTPUT);
  pinMode(buttonPin, INPUT);

  digitalWrite(s0, LOW);
  digitalWrite(s1, LOW);
  digitalWrite(s2, LOW);
  digitalWrite(EN, LOW);
}

void loop() {
  buttonState = digitalRead(buttonPin);
  if (buttonState == 1) {
    but = 1;
    digitalWrite(2, LOW);
  } else if (buttonState == 0) {
    digitalWrite(2, HIGH);
  }
  while (but == 1) {
    //////////////////////////////////////////////row 1/////////////////////////////////////////////////////////
    for (int i = 0; i < 8; i++) {
      if (i == 0) {
        digitalWrite(3, LOW);
        digitalWrite(4, LOW);
        digitalWrite(5, LOW);
      } else if (i == 1) {
        digitalWrite(3, HIGH);
        digitalWrite(4, LOW);
        digitalWrite(5, LOW);
      } else if (i == 2) {
        digitalWrite(3, LOW);
        digitalWrite(4, HIGH);
        digitalWrite(5, LOW);
      } else if (i == 3) {
        digitalWrite(3, HIGH);
        digitalWrite(4, HIGH);
        digitalWrite(5, LOW);
      } else if (i == 4) {
        digitalWrite(3, LOW);
        digitalWrite(4, LOW);
        digitalWrite(5, HIGH);
      } else if (i == 5) {
        digitalWrite(3, HIGH);
        digitalWrite(4, LOW);
        digitalWrite(5, HIGH);
      } else if (i == 6) {
        digitalWrite(3, LOW);
        digitalWrite(4, HIGH);
        digitalWrite(5, HIGH);
      } else if (i == 7) {
        digitalWrite(3, HIGH);
        digitalWrite(4, HIGH);
        digitalWrite(5, HIGH);
      }

      int sensor = analogRead(A0);

      int pixel = map(sensor, 0, SENSE, 0, 255); // Graphs photoresistor value to a lower value that python can use for a pixel value
      if (i < 7) {
        Serial.print(pixel);
        Serial.print(",");
      } else {
        Serial.print(pixel);
      }
    }
    Serial.println(";");

    ////////////////////////////////////////row2/////////////////////////////////////////////////
    for (int i = 0; i < 8; i++) {
      if (i == 0) {
        digitalWrite(3, LOW);
        digitalWrite(4, LOW);
        digitalWrite(5, LOW);
      } else if (i == 1) {
        digitalWrite(3, HIGH);
        digitalWrite(4, LOW);
        digitalWrite(5, LOW);
      } else if (i == 2) {
        digitalWrite(3, LOW);
        digitalWrite(4, HIGH);
        digitalWrite(5, LOW);
      } else if (i == 3) {
        digitalWrite(3, HIGH);
        digitalWrite(4, HIGH);
        digitalWrite(5, LOW);
      } else if (i == 4) {
        digitalWrite(3, LOW);
        digitalWrite(4, LOW);
        digitalWrite(5, HIGH);
      } else if (i == 5) {
        digitalWrite(3, HIGH);
        digitalWrite(4, LOW);
        digitalWrite(5, HIGH);
      } else if (i == 6) {
        digitalWrite(3, LOW);
        digitalWrite(4, HIGH);
        digitalWrite(5, HIGH);
      } else if (i == 7) {
        digitalWrite(3, HIGH);
        digitalWrite(4, HIGH);
        digitalWrite(5, HIGH);
      }

      int sensor = analogRead(A1);

      int pixel = map(sensor, 0, SENSE, 0, 255);
      if (i < 7) {
        Serial.print(pixel);
        Serial.print(",");
      } else {
        Serial.print(pixel);
      }
    }
    Serial.println(";");
    ////////////////////////////////////////row3/////////////////////////////////////////////////
    for (int i = 0; i < 8; i++) {
      if (i == 0) {
        digitalWrite(3, LOW);
        digitalWrite(4, LOW);
        digitalWrite(5, LOW);
      } else if (i == 1) {
        digitalWrite(3, HIGH);
        digitalWrite(4, LOW);
        digitalWrite(5, LOW);
      } else if (i == 2) {
        digitalWrite(3, LOW);
        digitalWrite(4, HIGH);
        digitalWrite(5, LOW);
      } else if (i == 3) {
        digitalWrite(3, HIGH);
        digitalWrite(4, HIGH);
        digitalWrite(5, LOW);
      } else if (i == 4) {
        digitalWrite(3, LOW);
        digitalWrite(4, LOW);
        digitalWrite(5, HIGH);
      } else if (i == 5) {
        digitalWrite(3, HIGH);
        digitalWrite(4, LOW);
        digitalWrite(5, HIGH);
      } else if (i == 6) {
        digitalWrite(3, LOW);
        digitalWrite(4, HIGH);
        digitalWrite(5, HIGH);
      } else if (i == 7) {
        digitalWrite(3, HIGH);
        digitalWrite(4, HIGH);
        digitalWrite(5, HIGH);
      }

      int sensor = analogRead(A2);

      int pixel = map(sensor, 0, SENSE, 0, 255);
      if (i < 7) {
        Serial.print(pixel);
        Serial.print(",");
      } else {
        Serial.print(pixel);
      }
    }
    Serial.println(";");
    ////////////////////////////////////////row4/////////////////////////////////////////////////
    for (int i = 0; i < 8; i++) {
      if (i == 0) {
        digitalWrite(3, LOW);
        digitalWrite(4, LOW);
        digitalWrite(5, LOW);
      } else if (i == 1) {
        digitalWrite(3, HIGH);
        digitalWrite(4, LOW);
        digitalWrite(5, LOW);
      } else if (i == 2) {
        digitalWrite(3, LOW);
        digitalWrite(4, HIGH);
        digitalWrite(5, LOW);
      } else if (i == 3) {
        digitalWrite(3, HIGH);
        digitalWrite(4, HIGH);
        digitalWrite(5, LOW);
      } else if (i == 4) {
        digitalWrite(3, LOW);
        digitalWrite(4, LOW);
        digitalWrite(5, HIGH);
      } else if (i == 5) {
        digitalWrite(3, HIGH);
        digitalWrite(4, LOW);
        digitalWrite(5, HIGH);
      } else if (i == 6) {
        digitalWrite(3, LOW);
        digitalWrite(4, HIGH);
        digitalWrite(5, HIGH);
      } else if (i == 7) {
        digitalWrite(3, HIGH);
        digitalWrite(4, HIGH);
        digitalWrite(5, HIGH);
      }

      int sensor = analogRead(A3);

      int pixel = map(sensor, 0, SENSE, 0, 255);
      if (i < 7) {
        Serial.print(pixel);
        Serial.print(",");
      } else {
        Serial.print(pixel);
      }
    }
    Serial.println(";");
    ////////////////////////////////////////row5/////////////////////////////////////////////////
    for (int i = 0; i < 8; i++) {
      if (i == 0) {
        digitalWrite(3, LOW);
        digitalWrite(4, LOW);
        digitalWrite(5, LOW);
      } else if (i == 1) {
        digitalWrite(3, HIGH);
        digitalWrite(4, LOW);
        digitalWrite(5, LOW);
      } else if (i == 2) {
        digitalWrite(3, LOW);
        digitalWrite(4, HIGH);
        digitalWrite(5, LOW);
      } else if (i == 3) {
        digitalWrite(3, HIGH);
        digitalWrite(4, HIGH);
        digitalWrite(5, LOW);
      } else if (i == 4) {
        digitalWrite(3, LOW);
        digitalWrite(4, LOW);
        digitalWrite(5, HIGH);
      } else if (i == 5) {
        digitalWrite(3, HIGH);
        digitalWrite(4, LOW);
        digitalWrite(5, HIGH);
      } else if (i == 6) {
        digitalWrite(3, LOW);
        digitalWrite(4, HIGH);
        digitalWrite(5, HIGH);
      } else if (i == 7) {
        digitalWrite(3, HIGH);
        digitalWrite(4, HIGH);
        digitalWrite(5, HIGH);
      }

      int sensor = analogRead(A4);

      int pixel = map(sensor, 0, SENSE, 0, 255);
      if (i < 7) {
        Serial.print(pixel);
        Serial.print(",");
      } else {
        Serial.print(pixel);
      }
    }
    Serial.println(";");

    ////////////////////////////////////////row6/////////////////////////////////////////////////
    for (int i = 0; i < 8; i++) {
      if (i == 0) {
        digitalWrite(3, LOW);
        digitalWrite(4, LOW);
        digitalWrite(5, LOW);
      } else if (i == 1) {
        digitalWrite(3, HIGH);
        digitalWrite(4, LOW);
        digitalWrite(5, LOW);
      } else if (i == 2) {
        digitalWrite(3, LOW);
        digitalWrite(4, HIGH);
        digitalWrite(5, LOW);
      } else if (i == 3) {
        digitalWrite(3, HIGH);
        digitalWrite(4, HIGH);
        digitalWrite(5, LOW);
      } else if (i == 4) {
        digitalWrite(3, LOW);
        digitalWrite(4, LOW);
        digitalWrite(5, HIGH);
      } else if (i == 5) {
        digitalWrite(3, HIGH);
        digitalWrite(4, LOW);
        digitalWrite(5, HIGH);
      } else if (i == 6) {
        digitalWrite(3, LOW);
        digitalWrite(4, HIGH);
        digitalWrite(5, HIGH);
      } else if (i == 7) {
        digitalWrite(3, HIGH);
        digitalWrite(4, HIGH);
        digitalWrite(5, HIGH);
      }

      int sensor = analogRead(A5);

      int pixel = map(sensor, 0, SENSE, 0, 255);
      if (i < 7) {
        Serial.print(pixel);
        Serial.print(",");
      } else {
        Serial.print(pixel);
      }
    }
    Serial.println(";");

    ////////////////////////////////////////row7/////////////////////////////////////////////////

    for (int i = 0; i < 8; i++) {
      if (i == 0) {
        digitalWrite(3, LOW);
        digitalWrite(4, LOW);
        digitalWrite(5, LOW);
      } else if (i == 1) {
        digitalWrite(3, HIGH);
        digitalWrite(4, LOW);
        digitalWrite(5, LOW);
      } else if (i == 2) {
        digitalWrite(3, LOW);
        digitalWrite(4, HIGH);
        digitalWrite(5, LOW);
      } else if (i == 3) {
        digitalWrite(3, HIGH);
        digitalWrite(4, HIGH);
        digitalWrite(5, LOW);
      } else if (i == 4) {
        digitalWrite(3, LOW);
        digitalWrite(4, LOW);
        digitalWrite(5, HIGH);
      } else if (i == 5) {
        digitalWrite(3, HIGH);
        digitalWrite(4, LOW);
        digitalWrite(5, HIGH);
      } else if (i == 6) {
        digitalWrite(3, LOW);
        digitalWrite(4, HIGH);
        digitalWrite(5, HIGH);
      } else if (i == 7) {
        digitalWrite(3, HIGH);
        digitalWrite(4, HIGH);
        digitalWrite(5, HIGH);
      }

      int sensor = analogRead(A6);

      int pixel = map(sensor, 0, SENSE, 0, 255);
      if (i < 7) {
        Serial.print(pixel);
        Serial.print(",");
      } else {
        Serial.print(pixel);
      }
    }
    Serial.println(";");
    ////////////////////////////////////////row8/////////////////////////////////////////////////

    for (int i = 0; i < 8; i++) {
      if (i == 0) {
        digitalWrite(3, LOW);
        digitalWrite(4, LOW);
        digitalWrite(5, LOW);
      } else if (i == 1) {
        digitalWrite(3, HIGH);
        digitalWrite(4, LOW);
        digitalWrite(5, LOW);
      } else if (i == 2) {
        digitalWrite(3, LOW);
        digitalWrite(4, HIGH);
        digitalWrite(5, LOW);
      } else if (i == 3) {
        digitalWrite(3, HIGH);
        digitalWrite(4, HIGH);
        digitalWrite(5, LOW);
      } else if (i == 4) {
        digitalWrite(3, LOW);
        digitalWrite(4, LOW);
        digitalWrite(5, HIGH);
      } else if (i == 5) {
        digitalWrite(3, HIGH);
        digitalWrite(4, LOW);
        digitalWrite(5, HIGH);
      } else if (i == 6) {
        digitalWrite(3, LOW);
        digitalWrite(4, HIGH);
        digitalWrite(5, HIGH);
      } else if (i == 7) {
        digitalWrite(3, HIGH);
        digitalWrite(4, HIGH);
        digitalWrite(5, HIGH);
      }

      int sensor = analogRead(A7);

      int pixel = map(sensor, 0, SENSE, 0, 255);
      if (i < 7) {
        Serial.print(pixel);
        Serial.print(",");
      } else {
        Serial.print(pixel);
      }
    }
    Serial.println(";");

    ////////////////////////////////////////row9/////////////////////////////////////////////////

    for (int i = 0; i < 8; i++) {
      if (i == 0) {
        digitalWrite(3, LOW);
        digitalWrite(4, LOW);
        digitalWrite(5, LOW);
      } else if (i == 1) {
        digitalWrite(3, HIGH);
        digitalWrite(4, LOW);
        digitalWrite(5, LOW);
      } else if (i == 2) {
        digitalWrite(3, LOW);
        digitalWrite(4, HIGH);
        digitalWrite(5, LOW);
      } else if (i == 3) {
        digitalWrite(3, HIGH);
        digitalWrite(4, HIGH);
        digitalWrite(5, LOW);
      } else if (i == 4) {
        digitalWrite(3, LOW);
        digitalWrite(4, LOW);
        digitalWrite(5, HIGH);
      } else if (i == 5) {
        digitalWrite(3, HIGH);
        digitalWrite(4, LOW);
        digitalWrite(5, HIGH);
      } else if (i == 6) {
        digitalWrite(3, LOW);
        digitalWrite(4, HIGH);
        digitalWrite(5, HIGH);
      } else if (i == 7) {
        digitalWrite(3, HIGH);
        digitalWrite(4, HIGH);
        digitalWrite(5, HIGH);
      }

      int sensor = analogRead(A8);

      int pixel = map(sensor, 0, SENSE, 0, 255);
      if (i < 7) {
        Serial.print(pixel);
        Serial.print(",");
      } else {
        Serial.print(pixel);
      }
    }
    Serial.println(";");

    ////////////////////////////////////////row10/////////////////////////////////////////////////

    for (int i = 0; i < 8; i++) {
      if (i == 0) {
        digitalWrite(3, LOW);
        digitalWrite(4, LOW);
        digitalWrite(5, LOW);
      } else if (i == 1) {
        digitalWrite(3, HIGH);
        digitalWrite(4, LOW);
        digitalWrite(5, LOW);
      } else if (i == 2) {
        digitalWrite(3, LOW);
        digitalWrite(4, HIGH);
        digitalWrite(5, LOW);
      } else if (i == 3) {
        digitalWrite(3, HIGH);
        digitalWrite(4, HIGH);
        digitalWrite(5, LOW);
      } else if (i == 4) {
        digitalWrite(3, LOW);
        digitalWrite(4, LOW);
        digitalWrite(5, HIGH);
      } else if (i == 5) {
        digitalWrite(3, HIGH);
        digitalWrite(4, LOW);
        digitalWrite(5, HIGH);
      } else if (i == 6) {
        digitalWrite(3, LOW);
        digitalWrite(4, HIGH);
        digitalWrite(5, HIGH);
      } else if (i == 7) {
        digitalWrite(3, HIGH);
        digitalWrite(4, HIGH);
        digitalWrite(5, HIGH);
      }

      int sensor = analogRead(A9);

      int pixel = map(sensor, 0, SENSE, 0, 255);
      if (i < 7) {
        Serial.print(pixel);
        Serial.print(",");
      } else {
        Serial.print(pixel);
      }
    }
    Serial.println(";");
    ////////////////////////////////////////row11/////////////////////////////////////////////////
    for (int i = 0; i < 8; i++) {
      if (i == 0) {
        digitalWrite(3, LOW);
        digitalWrite(4, LOW);
        digitalWrite(5, LOW);
      } else if (i == 1) {
        digitalWrite(3, HIGH);
        digitalWrite(4, LOW);
        digitalWrite(5, LOW);
      } else if (i == 2) {
        digitalWrite(3, LOW);
        digitalWrite(4, HIGH);
        digitalWrite(5, LOW);
      } else if (i == 3) {
        digitalWrite(3, HIGH);
        digitalWrite(4, HIGH);
        digitalWrite(5, LOW);
      } else if (i == 4) {
        digitalWrite(3, LOW);
        digitalWrite(4, LOW);
        digitalWrite(5, HIGH);
      } else if (i == 5) {
        digitalWrite(3, HIGH);
        digitalWrite(4, LOW);
        digitalWrite(5, HIGH);
      } else if (i == 6) {
        digitalWrite(3, LOW);
        digitalWrite(4, HIGH);
        digitalWrite(5, HIGH);
      } else if (i == 7) {
        digitalWrite(3, HIGH);
        digitalWrite(4, HIGH);
        digitalWrite(5, HIGH);
      }

      int sensor = analogRead(A10);

      int pixel = map(sensor, 0, SENSE, 0, 255);
      if (i < 7) {
        Serial.print(pixel);
        Serial.print(",");
      } else {
        Serial.print(pixel);
      }
    }
    Serial.println(";");
    ////////////////////////////////////////row12/////////////////////////////////////////////////
    for (int i = 0; i < 8; i++) {
      if (i == 0) {
        digitalWrite(3, LOW);
        digitalWrite(4, LOW);
        digitalWrite(5, LOW);
      } else if (i == 1) {
        digitalWrite(3, HIGH);
        digitalWrite(4, LOW);
        digitalWrite(5, LOW);
      } else if (i == 2) {
        digitalWrite(3, LOW);
        digitalWrite(4, HIGH);
        digitalWrite(5, LOW);
      } else if (i == 3) {
        digitalWrite(3, HIGH);
        digitalWrite(4, HIGH);
        digitalWrite(5, LOW);
      } else if (i == 4) {
        digitalWrite(3, LOW);
        digitalWrite(4, LOW);
        digitalWrite(5, HIGH);
      } else if (i == 5) {
        digitalWrite(3, HIGH);
        digitalWrite(4, LOW);
        digitalWrite(5, HIGH);
      } else if (i == 6) {
        digitalWrite(3, LOW);
        digitalWrite(4, HIGH);
        digitalWrite(5, HIGH);
      } else if (i == 7) {
        digitalWrite(3, HIGH);
        digitalWrite(4, HIGH);
        digitalWrite(5, HIGH);
      }

      int sensor = analogRead(A11);

      int pixel = map(sensor, 0, SENSE, 0, 255);
      if (i < 7) {
        Serial.print(pixel);
        Serial.print(",");
      } else {
        Serial.print(pixel);
      }
    }
    Serial.println(";");
    but = 0;
  }
  delay(1000);
}
