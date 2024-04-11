
# Led blinking with Millis() function in Arduino
- this is a very simple LED blink but a does solve a lot of issues related to the synchronous instruction in the Arduino code.
- I could have used the most common system function in C++ of arduinoIDE, which is called 'delay()', this function does a delay of certain seconds in the Arduino code.
- as we know the c++ is a synchronous programming language, so if I put a delay between two instructions of 5sec, it's going to take 5sec to execute the second instruction line.
- so what if we want our Arduino to execute more than two instructions individually, which means the instruction is executed asynchronously, this will help us a lot when it comes to effectiveness, efficiency, and duration of the code execution.
- In this case there is a system-function called millis() it can help us to do that, which i've used in this simple project.


 ![Blicking led by Millis()](https://github.com/yahiaBSK/Led_Blink_by_millis-func_Arduino/assets/51094855/8414ae71-e9c3-4137-a988-12dfdefa4491)

- As you see, the green led is programmed already to do a single intruction which is blinking (turn ON for 2sec and turn OFF for 0.5sec).
- And the purple LED is blinking by pressing the Push-button
- If you recognize well, you see that both of the LEDs are individually blinking, which means the delay of the green LED doesn't conflict with the turning ON and OFF of the purple LED. (Asynchronously).
- And simply we can't do that by the regular delay() function.

 ## Used Copmonents

- Arduino Uno (or ESP32 it can be used, both have the same c++ code).
- Proteus simulation software.
- All other components are built-in with the software itself (Buttons, resistors, LEDs, ex...).

## How to install & what you need
This is a simulation project, And the circuit design, the source code, and the result are completely the same as a real project. so in case you want to try it in a real version, you can use the same steps above (except the potentiometer as I told you it just acts like an object distance in this case).
- You need to:
    - install the simulation software (Proteus in this case) from [here](https://filecr.com/windows/proteus/?id=394206745600).
    - Download the Arduino Library for Proteus from [Here](https://www.theengineeringprojects.com/2015/12/arduino-uno-library-proteus.html), then copy all the files inside the downloaded ZIP to : `C:\Program Files (x86)\Labcenter Electronics\Proteus 8 Professional\DATA\LIBRARY`.

## How to run
- Download this project files (Proteus file alogside the arduino .ino source code).
- then open the file with (.pdsprj) extension with Proteus software.
- double click on the arduino component and go to 'Upload Hex file' and select the (.hex) file from the files above.
    ![](https://i.ibb.co/tLck7m5/Screenshot-2024-04-11-184217.png)
- then run the code !

## License and usage
- The files above including the arduino source code are free to use, share, and edit.
- All this is for the sake of spreading knowledge ! 🧑‍🎓😎🎓.
