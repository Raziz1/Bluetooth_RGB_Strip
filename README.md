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
* This also requires an app to send information through bluetooth through the module. I have provided an APK for the BLE elegoo bluetooth app which worked for me.

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
|12             | Red (Red Cable)    |   
| 11            | Green (Green Cable)|
| 10            | Blue (Blue Cable)  |



