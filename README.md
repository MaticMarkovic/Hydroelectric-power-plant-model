# Hydroelectric-power-plant-model

The whole project on Hackaday:
https://hackaday.io/project/171863-3d-printed-hydroelectric-power-plant-model

3D printed hydroelectric power plant model with Pelton turbine is used for demonstration of physical laws in generating electrical energy using hydropower plants. By changing the height difference and changing the water flow, the user can directly influence the production of electricity. The BLDC motor is used as a generator and the LED strip as an indicator of produced power. The experimental system is a great tool to demonstrate basics of converting energy from potential energy -> kinetic -> mechanical -> electric.

Hydropower_plant_water_reservoir_lifting_system.ino
-
Arduino code is used to control the lifting system of the water reservoir with two safety limit switches and one three-way toggle switch (move up - stop - move down).

Hydropower_plant__RGB_LED_strip_ws2813.ino
-
Arduino Nano with this code reads the generated voltage from the turbine, with analog input. Depending on the voltage amplitude, the Arduino turns ON the number of LED-iods on the RGB programmable LED strip ws2813 and adjusts the color of the individual LED-iod.
