# robotics-ellak1
1ος Πανελλήνιος Διαγωνισμός Ρομποτικής Ανοιχτών Τεχνολογιών


# Έλεγχος ρομπότ με την βοήθεια κινητού τηλεφώνου


# Ιδέα

Κατασκευή ενός ρομπότ (όχημα) του οποίου η κίνηση θα ελέγχεται ασύρματα (μέσω bluetooth) με την βοήθεια μιας απλής εφαρμογής που θα τρέχει σε οποιαδήποτε &quot;έξυπνη&quot; συσκευή (smartphone, tablet κλπ).

Η οδήγηση των κινητήρων γίνεται με την χρήση του _L293D Motor Driver Shield_ ( βλέπε [https://playground.arduino.cc/Main/AdafruitMotorShield](https://playground.arduino.cc/Main/AdafruitMotorShield)  και  [http://wiki.sunfounder.cc/index.php?title=L293D\_Motor\_Driver\_Shield](http://wiki.sunfounder.cc/index.php?title=L293D_Motor_Driver_Shield)για την πλήρη περιγραφή και το κύκλωμα του συγκεκριμένου shield ). Toshield περιέχει δύο οδηγούς κινητήρα L293D και έναν shiftregister 74HC595. Το _Motor Shield_ είναι ικανό να οδηγήσει 2 κινητήρες.

Η μονάδα bluetoothHC-06, επιτρέπει την αποστολή και λήψη δεδομένων στο Arduino από το smartphone ή tablet. Εναλλακτικά αντί ενός Arduino Uno και της μονάδας bluetoothHC-06 θα μπορούσε να χρησιμοποιηθεί ένα Arduino BT (Bluetooth) ( [https://www.arduino.cc/en/Main/ArduinoBoardBT?from=Main.ArduinoBoardBluetooth](https://www.arduino.cc/en/Main/ArduinoBoardBT?from=Main.ArduinoBoardBluetooth) ) το οποίο διαθέτει ενσωματωμένη μια μονάδα bluetooth, απλούστερη λύση η οποία όμως δεν επιλέχθηκε λόγω πολύ υψηλότερου κόστους.

Η διεπαφή με τον χρήστη θα είναι μια απλή εφαρμογή που θα τρέχει σε οποιαδήποτε &quot;έξυπνη&quot; συσκευή (smartphone, tablet κλπ) και θα αναπτυχθεί με την χρήση του &quot;_MIT App Inventor_&quot; ( [http://appinventor.mit.edu/explore/](http://appinventor.mit.edu/explore/) ). Το MIT App Inventor είναι ένα δωρεάν γραφικό περιβάλλον προγραμματισμού που μας δίνει την δυνατότητα να δημιουργούμε εφαρμογές για κινητά τηλέφωνα τα οποία χρησιμοποιούν λειτουργικό android. Η λογική του εργαλείου βασίζεται στο WYSIWYG (συντομογραφία της φράσης &quot;What You See Is What You Get&quot; (Αυτό που βλέπεις είναι αυτό που θα εμφανιστεί)) λύση της Google, που επιτρέπει τη δημιουργία εφαρμογών για το δημοφιλές λειτουργικό της Android, μέσω απλού drag&#39;n&#39;drop.

Διάφορα κουμπιά στην οθόνη της συσκευής  (smartphone, tablet κλπ) θα καθορίζουν τις κινήσεις του ρομπότ:

- Το κουμπί με την ονομασία &quot;_Forward_&quot; κινεί το ρομπότ μπροστά.
- Το κουμπί με την ονομασία &quot;_Backwar__d_&quot; κινεί το ρομπότ πίσω.
- Το κουμπί με την ονομασία &quot;_Left_&quot; κινεί το ρομπότ αριστερά.
- Το κουμπί με την ονομασία &quot;_Right_&quot; κινεί το ρομπότ δεξιά
- Το κουμπί με την ονομασία &quot;_Reverse_&quot; κάνει το ρομπότ να εκτελέσει επιτόπου αναστροφή.

## Απαιτούμενα υλικά και ενδεικτικό κόστος

| Περιγραφή | Ενδεικτικό κόστος(σε € με ΦΠΑ) |
| --- | --- |
| Arduino Uno Rev3 | 9,85 |
| HC-06 Bluetooth RF Transceiver Module for Arduino | 7,50 |
| Arduino shield οδηγού κινητήρα L293D | 4,89 |
| Breadboard | 1,05 |
| Καλώδια κλπ | 2,00 |
| Πλατφόρμα (όχημα) robot | 14,99 |
| Μπαταρία 9V | 2,00 |
| **ΣΥΝΟΛΟ** | **24,93** |

