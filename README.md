# Arduino Remote RC Car
## Tutorial for Creating Arduino Remote  Controlled Car.
### By Luke Jung, William Guan, and Andrew Rim
## Materials
•    Old RC car taken apart
•    AA batteries
•    Arduino starter kit
•    Computer/laptop to code Arduino
•    Videos/Forums/Threads to learn code and get ideas for projects
Tutorial

### Review Java Concepts
- Class
- Object
- Boolean
- If statements
- Instance Variables

### Study for Arduino
- setup()
- decode_results
- Serial.begin
- loop()
- Different codes for IR reading

## Step 1: Getting Started
So since this is the second tutorial, first familiarize yourself with the Arduino again, but we can get right to modding the previous example to use a remote now.
Right now, we need:
•    8 M/M Jumper cables
•    2 M/F Jumper cables
•    1 Relay
•    1 IR Receiver
•    IR Remote
•    Pair of rc wheels/motors
•    1 battery pack
•    3 hair ties/tape
•    Cardboard

## Step 2: Setting up the Relay
So the arudino should have the shield on it already so let’s start working from there.
So the first part we want to do is set up the relay.  Like before, a relay is an electro-magnetic switch that can use a relatively small current to power a much larger resistor like the wheels we want.
So set up the relay on the left side of the board like so.
![pic_1](https://github.com/lukejung99/Arduino-Remote-RC-Car/blob/master/Photos/1.png?raw=true) ![alt text](https://github.com/lukejung99/Arduino-Remote-RC-Car/blob/master/Photos/2.png?raw=true)

•    Set the green wire to relay number 1 to the green 10 on the top side
•    The blue wire from relay 2 to the red ground below it
•    The white wire from relay 4 to ground in the black to the right

## Step 3: Setting up the IR Receiver
Now we need to set up the IR Receiver.  So the receiver lets us know if there is a button being pushed on our remote so the board can turn the wheels on and off.
Side note is that we spent the most time troubleshooting the IR Receiver, mainly due to the board not being recognized on our computer because it was short circuiting the board and was taking too much energy to be used.  So make sure you hook it up correctly
![pic_1](https://github.com/lukejung99/Arduino-Remote-RC-Car/blob/master/Photos/3.png?raw=true)

•    Connect the green wire from position 1 to the 11 at the top of the green bar
•    Connect the black wire from position 2 to the top most slot of the black bar on the right
•    Connect the red wire from position 3 to the 5V slot at the red bar on the right

## Step 4: Connect the Wheels
Now for the last step, we just need to connect the rc car wheels. Usually, these wires are in a strand, so it’s hard to connect them to our breadboard or other parts of our shield.  Therefore we use the F/M jumper cables to extend the wires and make it easier to plug in.
For these, we plug it in like the following.

![pic_1](https://github.com/lukejung99/Arduino-Remote-RC-Car/blob/master/Photos/4.png?raw=true)

•    Connect the white jumper cable to position 6 of the relay
•    Connect the blue jumper cable to the bottom most slot of the red row on the right
And that’s it for the Board!! Now we can finally go onto the programming part.

## Step 5: Writing the Program
Before writing the code, we need to make sure we understand how IR receiver and remotes work.  So the remote sends specific codes to the infrared receiver which then writes the code in a hex format, which is just a series of numbers and letters to define which button is being pushed.  You can play with this using the Serial Monitor in the the IDE to check it out.
Also before writing the code we have to install the IR library, just google Arduino IR Remote and zip the file where your Arduino files are
So the first thing we want to do write in our program are the instance variables we want to use.  The code we wrote included these

![pic_1](https://github.com/lukejung99/Arduino-Remote-RC-Car/blob/master/Photos/5.png?raw=true)

The next method we use is to setup the board, which is just setting up input or output

![pic_1](https://github.com/lukejung99/Arduino-Remote-RC-Car/blob/master/Photos/6.png?raw=true)

The next method we use is the loop which is the main part of how our program continues to run.

![pic_1](https://github.com/lukejung99/Arduino-Remote-RC-Car/blob/master/Photos/7.png?raw=true)

And that’s the code!
Compile it using the check at the top to make sure the code runs, then making sure you disconnect the wheels first so it doesn’t take all the energy from your laptop, send the code to the Arduino and let it sync up!

## Step 6: Attaching the Board and Power Supply to the Wheels and Car
Now that all the components are done, we just need to attach them together.  Using the battery pack from the kit, put 6 AA batteries in and connect it to the board.  Attaching the supply and board is up to you on how you want to, but make sure it’s secure.  Once that’s done, every time you push the power button on the remote it should turn the wheels on and off.
That’s it.  If you have any other questions contact us!  Happy driving.
