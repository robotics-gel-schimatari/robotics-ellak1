# Έλεγχος ρομπότ με την βοήθεια κινητού τηλεφώνου

## Εισαγωγή

Ονομάζομαι Νίκος Μπαντέκας και είμαι μαθητής της 2ας Λυκείου στο Γενικό Λύκειο Σχηματαρίου

Ασχολούμαι με την Ρομποτική, την κατασκευή ηλεκτρονικών κυκλωμάτων και τον προγραμματισμό από την ηλικία των 10 ετών και στόχο έχω να φτιάχνω κατασκευές που λύνουν πρακτικά προβλήματα.



## 1. Πώς επιλέχθηκε αυτό το Project

Με την έρευνα πάνω στις νέες τεχνολογίες και τον αυτοματισμό, ο άνθρωπος προσπαθεί να φτιάξει μηχανές οι οποίες θα λειτουργούν με όσο το δυνατόν λιγότερη ανθρώπινη προσπάθεια - έργο.

Τα κινητά τηλέφωνα – smartphone χρησιμοποιούνται σήμερα από όλο και περισσότερους ανθρώπους. Θέλαμε λοιπόν να αναπτύξουμε μια απλή εφαρμογή που θα μπορούσαμε ελέγξουμε πλήρως από απόσταση ένα όχημα (πλατφόρμα) με την κίνηση μόνο του αντίχειρα μέσω με την χρήση ενός κινητού.

Πιστεύουμε ότι η ιδέα μπορεί να χρησιμοποιηθεί για τον έλεγχο και άλλων συσκευών…



## 2. Ιδέα

Κατασκευή ενός ρομπότ (όχημα) του οποίου η κίνηση θα ελέγχεται ασύρματα (μέσω bluetooth) με την βοήθεια μιας απλής εφαρμογής που θα τρέχει σε οποιαδήποτε &quot;έξυπνη&quot; συσκευή (smartphone, tablet κλπ).

![](/Images/flow1.jpg)

Η οδήγηση των κινητήρων γίνεται με την χρήση του ολοκληρωμένου (IC) οδηγού μοτέρ _L293D._

Η μονάδα bluetooth HC-06, επιτρέπει την αποστολή και λήψη δεδομένων στο Arduino από το smartphone ή tablet. Εναλλακτικά αντί ενός Arduino Uno και της μονάδας bluetoothHC-06 θα μπορούσε να χρησιμοποιηθεί ένα Arduino BT (Bluetooth) [https://www.arduino.cc/en/Main/ArduinoBoardBT?from=Main.ArduinoBoardBluetooth](https://www.arduino.cc/en/Main/ArduinoBoardBT?from=Main.ArduinoBoardBluetooth) ) το οποίο διαθέτει ενσωματωμένη μια μονάδα bluetooth, απλούστερη λύση η οποία όμως δεν επιλέχθηκε λόγω πολύ υψηλότερου κόστους.

Η διεπαφή με τον χρήστη θα είναι μια απλή εφαρμογή που θα τρέχει σε οποιαδήποτε &quot;έξυπνη&quot; συσκευή (smartphone, tablet κλπ) και θα αναπτυχθεί με την χρήση του &quot;_MIT App Inventor_&quot; ( [http://appinventor.mit.edu/explore/](http://appinventor.mit.edu/explore/) ).

Διάφορα κουμπιά στην οθόνη της συσκευής (smartphone, tablet κλπ) θα καθορίζουν τις κινήσεις του ρομπότ:

- Το κουμπί με την ονομασία &quot;_Εμπρός_&quot; κινεί το ρομπότ μπροστά.

- Το κουμπί με την ονομασία &quot;_Πίσω_&quot; κινεί το ρομπότ πίσω.

- Το κουμπί με την ονομασία &quot;_Αριστερά_&quot; κινεί το ρομπότ αριστερά.

- Το κουμπί με την ονομασία &quot;_Δεξιά_&quot; κινεί το ρομπότ δεξιά

- Το κουμπί με την ονομασία &quot;_Αναστροφή_&quot; κάνει το ρομπότ να εκτελέσει επιτόπου αναστροφή.

  

## 3. Απαιτούμενα υλικά και ενδεικτικό κόστος



| **Περιγραφή**                         |                                       | **Ενδεικτικό κόστος (σε € με ΦΠΑ)** |
| ------------------------------------- | ------------------------------------- | ----------------------------------- |
| Arduino Uno Rev3                      | ![](/Images/arduino_uno.jpg)    | 9,85                                |
| HC-06 Bluetooth RF Transceiver Module | ![](/Images/bt2.jpg)            | 7,50                                |
| Ολοκληρωμένο L293D                    | ![](/Images/L293Ds.jpg)          | 3,00                                |
| Breadboard                            | ![](/Images/breadboard.jpg)     | 1,05                                |
| Καλώδια κλπ                           | ![](/Images/wires.jpg)          | 2,00                                |
| Πλατφόρμα (όχημα) robot               | ![](/Images/platform.jpg)       | 15,00                               |
| Θήκη για μπαταρίες                    | ![](/Images/battery_holder.jpg) | 2,00                                |
| Μπαταρίες AA                          | ![](/Images/battery.jpg)               | 2,00                                |
| Διάφορα                               |                                       | 1,00                                |
| **ΣΥΝΟΛΟ**                            |                                       | ***43,40***                         |

Το κόστος έχει υπολογιστεί με τιμές σε ελληνικά ηλεκτρονικά καταστήματα που πωλούν ηλεκτρονικά εξαρτήματα.



### 3.1 Οδηγός μοτέρ L293D 

Προκειμένου να οδηγήσουμε dc κινητήρες, απαιτείται ένα
ειδικό κύκλωμα που ονομάζεται γέφυρα Η.Δυστυχώς τα ολοκληρωμένα κυκλώματα που
αποτελούν και τους ηλεκτρονικούς εγκεφάλουν των ρομπότ (μικροελεγκτές), δεν
μπορούν να δώσουν πολύ ρεύμα στις εξόδους τους. Ωστόσο επειδή οι dc κινητήρες
βασίζονται στη δημιουργία μαγνητικών πεδίων από ηλεκτρομαγνήτες, απαιτούν
σημαντικά ποσά ηλεκτρικού ρεύματος για να λειτουργήσουν (μάλιστα όσο μεγαλύτερη
ισχύ έχει ένας κινητήρας τόσο περισσότερο ρεύμα απαιτεί).

![](/Images/h-bridge.jpg)

<center>Σχήμα</u>: Συνδεσμολογία Η-bridge</center>

Αυτό το πρόβλημα έρχονται να λύσουν οι γέφυρες Η (και γενικότερα τα κυκλώματα οδήγησης). Οι γέφυρες Η αυτές που μετατρέπουν τα «ασθενικά» σήματα τάσης, που λαμβάνουν από τον ηλεκτρονικό εγκέφαλο, σε ανάλογα «ισχυρά» σήματα ρεύματος ώστε να λειτουργήσουν οι κινητήρες. Πέρα από αυτό δεν κάνουν τίποτα άλλο. Το arduino  αίναι αυτό που ευθύνεται για τον τελικό τρόπο λειτουργίας των κινητήρων (θα περιστρέφονται δεξιόστροφα, αριστερόστροφα, με πλήρης στροφές ή κάποιο ποσοστό στροφών, τη χρονική διάρκεια περιστροφής κτλ). Φυσικά ο τρόπος λειτουργίας των κινητήρων καθορίζεται από το πρόγραμμα που εκτελείται στο arduino.

![](/Images/hbridge.jpg)

<center>Σχήμα</u>: Συνδεσμολογία Η-bridge</center>

![](/Images/L293D.jpg)

<center>Σχήμα</u>: To ολοκληρωμένο L2930</center>

![](/Images/L293D_connections.jpg)

<center>Σχήμα: Συνδεσμολογία στο L2930</center>

Όταν συνδέσουμε το breadboard, θα πρέπει να διασφαλιστεί ότι το IC είναι ο σωστά τοποθετημένο. Η εγκοπή πρέπει να είναι προς τα αριστερά του breadboard.



## 4. Υλοποίηση του συστήματος

- Η πλατφόρμα θα φέρει 2 κινητήρες , καθώς και μια κινούμενη ροδέλα για την ισορροπία του

- Μια προγραμματίσιμη πλακέτα Arduino

- Τον δέκτη Bluetooth για την  ασύρματη επικοινωνία με το κινητό

- Μία συστοιχία μπαταριών (6\*1,5 = 9 Volt)

- Την ασπίδα (shield)  για την κίνηση των δύο κινητήρων

- Ένα breadboard , καλώδια κλπ

  

## 4. 1 Κύκλωμα

![](/Images/fritzing.jpg)



## 4.2 Συναρμολόγηση

Φωτογραφίες από την φάση συναρμολόγησης

![](/Images/platform1.jpg)



![](/Images/platform2.jpg)



## 5. Κώδικας

Ο κώδικας για το Arduino χρησιμοποιεί την βιβλιοθήκη SoftwareSerial η οποία επιτρέπει την επικοινωνία μέσω bluetooth.

```C++
#include <SoftwareSerial.h>

SoftwareSerial BT(10, 11); //TX, RX respetively
String readdata;

void setup() {
  BT.begin(9600);
  Serial.begin(9600);
  pinMode(3, OUTPUT); // connect to input 1 of l293d
  pinMode(4, OUTPUT); // connect to input 4 of l293d
  pinMode(5, OUTPUT); // connect to input 3 of l293d
  pinMode(6, OUTPUT); // connect to input 2 of l293d
}

//-----------------------------------------------------------------------//
void loop() {
  while (BT.available()) { //Check if there is an available byte to read
    delay(10); //Delay added to make thing stable
    char c = BT.read(); //Conduct a serial read
    readdata += c; //build the string- "forward", "reverse", "left" and "right"
  }
  if (readdata.length() > 0) {
    Serial.println(readdata); // print data to serial monitor
    // if data received as forward move robot forward
    if (readdata == "forward")
    {
      digitalWrite(3, HIGH);
      digitalWrite (4, HIGH);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      delay(100);
    }
    // if data received as backward move robot bacward

    else if (readdata == "backward")
    {
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      delay(100);
    }
    // if data received as left turn robot to left direction.
    else if (readdata == "left")
    {
      digitalWrite (3, HIGH);
      digitalWrite (4, LOW);
      digitalWrite (5, LOW);
      digitalWrite (6, LOW);
      delay (100);
    }
    // if data received as reverse turn robot to reverse .
    else if (readdata == "reverse")
    {
      digitalWrite (3, HIGH);
      digitalWrite (4, LOW);
      digitalWrite (5, LOW);
      digitalWrite (6, HIGH);
      delay (100);

    }
    // if data received as right turn robot to right direction
    else if ( readdata == "right")
    {
      digitalWrite (3, LOW);
      digitalWrite (4, HIGH);
      digitalWrite (5, LOW);
      digitalWrite (6, LOW);
      delay (100);
    }
    // if data received as stop, halt the robot
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
```



## 5.1 App Inventor

Το MIT App Inventor είναι ένα ελεύθερο και ανοικτό γραφικό περιβάλλον οπτικού προγραμματισμού που μας δίνει την δυνατότητα να δημιουργούμε εφαρμογές για κινητά τηλέφωνα τα οποία χρησιμοποιούν λειτουργικό android. Η λογική του εργαλείου βασίζεται στο WYSIWYG (συντομογραφία της φράσης &quot;What You See Is What You Get&quot; (Αυτό που βλέπεις είναι αυτό που θα εμφανιστεί)) λύση της Google, που επιτρέπει τη δημιουργία εφαρμογών για το δημοφιλές λειτουργικό της Android, μέσω απλού drag&#39;n&#39;drop.

Οι συγκεκριμένες εφαρμογές τρέχουν και σε emulator. Αναπτύχθηκε στα εργαστήρια της Google από μια ομάδα με επικεφαλής τον καθηγητή του MIT Hal Abelson (Abelson, 2009).  To περιβάλλον του App Inventor έχει πολλές ομοιότητες με το περιβάλλον του Scratch και του Alice, με τη διαφορά ότι οι εφαρμογές που δημιουργούνται τρέχουν σε έξυπνα τηλέφωνα (smart phones).

**Βήματα για την χρήση του App Inventor:**

- Βήμα 1: Κατεβάστε την εφαρμογή App Inventor Ultimate

Κατεβάστε και εγκαταστήστε την εφαρμογή App Inventor Ultimate από:

[https://sourceforge.net/projects/ai2u/files/ai2u%204.6/Installer/AI2U%2064bit%20v4.6.exe/download](https://sourceforge.net/projects/ai2u/files/ai2u%204.6/Installer/AI2U%2064bit%20v4.6.exe/download)

- Βήμα 2: Κάντε λήψη και εγκατάσταση της εφαρμογής MIT AI2Companion
Ανοίξτε τον σαρωτή QR code της συσκευής σας και σαρώστε τον κώδικα QR παρακάτω για να πραγματοποιήσετε λήψη της εφαρμογής MIT AI2Companion App από το Play Store.

![](/Images/ai2storecompanionQR.png)

Σκανάρετε αυτό το QR code για να εγκαταστήσετε το MIT AI2 Companion App στο κινητό σας.

<u>Πηγή</u>: [https://appinventor.mit.edu/explore/ai2/setup-device-wifi.html](https://appinventor.mit.edu/explore/ai2/setup-device-wifi.html)

Πολύ χρήσιμες πληροφορίες για την ανάπτυξη εφαρμογών βρήκα στο εγχειρίδιο με τίτλο: «Προγραμματισμός σε App Inventor» που έγραψαν συγγραφείς: Βασίλης Βασιλάκης, Γιώργος Χατζηνικολάκης. ( [https://www.openbook.gr/programmatismos-se-app-inventor/](https://www.openbook.gr/programmatismos-se-app-inventor/)  ), καθώς και στην ιστοσελίδα [https://www.sepchiou.gr/?s=app+inventor**](https://www.sepchiou.gr/?s=app+inventor)



### **5.2 Προγραμματισμός**  **App Inventor**



Φωτογραφία οθόνης κινητού με τα βασικά «κουμπιά» για τον έλεγχο της πλατφόρμας

### 6. Φωτογραφίες – Video

![](/Images/final1.jpg)

![](/Images/final2.jpg)

Video με τηλεχειρισμό της πλατφόρμας – robot.



## 7. Βελτιώσεις

Η ομάδα δουλεύει πάνω σε βελτιώσεις για το σύστημα , καθώς με λίγες μετατροπές μπορούμε να χρησιμοποιήσουμε έναν δέκτη Wi-fi , και μια πλατφόρμα τέσσερις τροχούς και ένα πρόγραμμα για το κινητό με περισσότερες δυνατότητες.

