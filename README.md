# Bluetooth_RGB_Strip 📶🔴🟢🔵
Arduino Uno + RGB Strip + HC-08 Bluetooth Module

<p> 
  <img align='Right' width=350 height=350 src="https://github.com/Raziz1/Bluetooth_RGB_Strip/blob/main/images/icon.png? raw=true">
</p>

## Parts 🛠
* [Arduino Uno](https://www.amazon.ca/Elegoo-Board-ATmega328P-ATMEGA16U2-Arduino/dp/B01EWOE0UU/ref=sr_1_2_sspa?dchild=1&keywords=arduino+uno&qid=1606103005&sr=8-2-spons&psc=1&spLa=ZW5jcnlwdGVkUXVhbGlmaWVyPUEzQ1hXUk5QTjFZMzIwJmVuY3J5cHRlZElkPUEwOTY1NTEzNzVVN1Q3WlhYOExDJmVuY3J5cHRlZEFkSWQ9QTEwMTg4MjRNT1NQMVNYWk03UiZ3aWRnZXROYW1lPXNwX2F0ZiZhY3Rpb249Y2xpY2tSZWRpcmVjdCZkb05vdExvZ0NsaWNrPXRydWU=)
* [RGB LED strip](https://www.amazon.ca/Dimmable-Flexible-Backlight-Control-Decoration/dp/B07CQDB1KP/ref=sr_1_81?dchild=1&keywords=usb+rgb+led+strip&qid=1606102628&sr=8-81)
* [HC-08 Bluetooth Module](https://www.amazon.ca/DSD-TECH-SH-HC-08-Transceiver-Compatible/dp/B01N4P7T0H/ref=sr_1_1_sspa?dchild=1&keywords=hc-08&qid=1606103028&sr=8-1-spons&psc=1&spLa=ZW5jcnlwdGVkUXVhbGlmaWVyPUFPSFFJWkM3TVZaVFkmZW5jcnlwdGVkSWQ9QTA1MDE1MTAzSlNLRkY3V0NXTDkxJmVuY3J5cHRlZEFkSWQ9QTAyNTMyOTRCVDFLVU9JTFdOTEcmd2lkZ2V0TmFtZT1zcF9hdGYmYWN0aW9uPWNsaWNrUmVkaXJlY3QmZG9Ob3RMb2dDbGljaz10cnVl)

## Libraries 📚
* This also requires an app to send information through bluetooth through the module. I have provided an APK for the [BLE elegoo bluetooth app](https://github.com/Raziz1/Bluetooth_RGB_Strip/blob/main/code/ElEGOO%20BLE%20Tool.apk) which worked for me.

## Schematics ⚡
<p> 
  <img align='Right'src="https://github.com/Raziz1/Bluetooth_RGB_Strip/blob/main/images/schematics.png? raw=true">
</p>

## Wiring 🔌
|   **Arduino** | **HC-08**    |
| ------------- |:-------------:|
| 3.3V          | VCC           | 
|Ground         | Ground        |   
| TX            | TX            |
| RX            | RX            |

|   **Arduino** | **RGB LED Strip**|
| ------------- |:-------------:|
| 5V            | Power (White Cable)| 
|11~             | Red (Red Cable)    |   
| 10~            | Green (Green Cable)|
| 9~            | Blue (Blue Cable)  |


## Code 💻
We use pins 11, 10, and 9 because they support PWM (Pulse Width Modulation) which allows us to create a fade effect on the RGB strip by adjusting the frequency that electricity is passed to the specified pin. 
* The code uses a delay function for the fade effect other wise it is not visible (To quick) which results in the bluetooth module not receiving commands until the end of the fade effect.
* There is an interval of 2 seconds in the code in between the RGB color switch function which can be manually changed.
* The RGB strip color works by displaying the color only if the corresponding wire is pulled to **LOW (Ground)**

## Bluetooth App Setup 📶📱

<p> 
  <img align='Right' width=360 height=640 src="https://github.com/Raziz1/Bluetooth_RGB_Strip/blob/main/images/screen-1.jpg? raw=true">
</p>

* [BLE Elegoo APK](https://github.com/Raziz1/Bluetooth_RGB_Strip/blob/main/code/ElEGOO%20BLE%20Tool.apk)
1.  Connect to your bluetooth module (HC-08)
2.  Go to the keyboard tab
3.  Press and hold any of the squares to begin defining the buttons
4.  Create a button name and the character to be sent to the arduino.
5.  Make sure the character received is the same character that the code expects to activate certain functions



