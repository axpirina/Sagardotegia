# Sagardotegia

## Sarrera

**Oteitza Sagardotegia** edozein jariakinen Tº eta Hº naren urruneko monitorizazio eta kontrola Arduino eta Thingsboard bitartez egiteko proiekturako gida da. 


## Elementuen lista
|Elements| Quantity | Link | 
|---|---|---|
| IoMbian| 1 | |
| Arduino UNO| 1 |[Electroson](https://www.electrosonsansebastian.com/eu/placas-de-desarrollo/1327-arduino-uno-rev3.html)|
| DHT11| 1 ||
| Female-Female headers| 3 ||

> **Warning**: Try to buy locally ```nearest store```.

## Eskema Elektrikoa
![enter image description here](Irudiak/Arduino-DHT11-Eskema.png "Scheme")


## Arduino programazioa

Arduino IDE-a erabiliaz errepositorioan emanda dagoen **arduino-DHT11-Serial-Kodea.ino** kodea Arduino UNO-ra igo. 


Kontuan izan Library Manager-a erabiliaz **DHT sensor library**-a instalatu beharko duzuela lehendabizi.

![enter image description here](images/IOM2040%202D.png "3D enclosure")

And these the measurements of the screen location, although we recommend to glue the LCD to the screen, make the Ø2 holes and release and fix it with bolts afterwards.

![enter image description here](images/Pantaila%20CAD%202D.png "LCD")
## Soldering

Prepare the elements with a female header in every pin on them. It requires a bit of soldering.

![enter image description here](images/Elementuak.png)

## Mounting

 - Place all the components in their pins following the related scheme above.
 - Close the enclosure.
 - Burn the latest [IoMBian OS ](https://github.com/Tknika/iombian)  software on the SD.
 - Find the gateway using the [IoMBian discover tool](https://github.com/Tknika/iombian-discover).
 - Enjoy!

## Authors

(c) 2020 [Tknika](https://tknika.eus/)  [Aitor Azpiroz](https://github.com/axpirina))

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
