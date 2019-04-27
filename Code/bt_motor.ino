#include <SoftwareSerial.h>

SoftwareSerial BT(10, 11); //TX, RX respetively
String readdata;

void setup() {
  BT.begin(9600);
  Serial.begin(9600);
  pinMode(3, OUTPUT); // Σύνδεση στο pin 1 του L293D
  pinMode(4, OUTPUT); // Σύνδεση στο pin 4 του L293D
  pinMode(5, OUTPUT); // Σύνδεση στο pin 3 του L293D
  pinMode(6, OUTPUT); // Σύνδεση στο pin 2 του L293D
}

//-----------------------------------------------------------------------
void loop() {
  while (BT.available()) { // Έλεγχος εάν υπάρχει κάποιο byte για διάβασμα
    delay(10); // Πρόσθεση delay για σταθερότητα
    char c = BT.read(); // Διεξαγωγή serial read
    readdata += c; // Σύνθεση του string "forward", "reverse", "left" and "right"
  }
  if (readdata.length() > 0) {
    Serial.println(readdata); // Εκτύπωση δεδομένων στo serial monitor
    // Eάν τα δεδομένα που λάβαμε είναι "forward", κίνηση μπροστά
    if (readdata == "forward")
    {
      digitalWrite(3, HIGH);
      digitalWrite (4, HIGH);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      delay(100);
    }
    // Eάν τα δεδομένα που λάβαμε είναι "backward", κίνηση πίσω
    else if (readdata == "backward")
    {
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      delay(100);
    }
    // Eάν τα δεδομένα που λάβαμε είναι "left", κίνηση αριστερά
    else if (readdata == "left")
    {
      digitalWrite (3, HIGH);
      digitalWrite (4, LOW);
      digitalWrite (5, LOW);
      digitalWrite (6, LOW);
      delay (100);
    }
    // Eάν τα δεδομένα που λάβαμε είναι "reverse", αναστροφή
    else if (readdata == "reverse")
    {
      digitalWrite (3, HIGH);
      digitalWrite (4, LOW);
      digitalWrite (5, LOW);
      digitalWrite (6, HIGH);
      delay (100);

    }
    // Eάν τα δεδομένα που λάβαμε είναι "right", κίνηση δεξιά
    else if ( readdata == "right")
    {
      digitalWrite (3, LOW);
      digitalWrite (4, HIGH);
      digitalWrite (5, LOW);
      digitalWrite (6, LOW);
      delay (100);
    }
    // Eάν τα δεδομένα που λάβαμε είναι "stop", στοπ
    else if (readdata == "stop")
    {
      digitalWrite (3, LOW);
      digitalWrite (4, LOW);
      digitalWrite (5, LOW);
      digitalWrite (6, LOW);
      delay (100);
    }
    readdata = "";
  }
}
