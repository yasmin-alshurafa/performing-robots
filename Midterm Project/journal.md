### Oct 3:

- Today I worked on brainstorming potential ideas I can work on for the project. I decided to create a figure that is controlled by different buttons. The figure will include colored LEDs, Servo motors, and DC gear motors. Once a button is triggered, the LED will turn on, the servo motor will move a signal, and the DC gear motors will move. Each button will trigger a certain expression depending on the color. For instance, if the red button was pushed, the red led will turn on, the Servo motor will move with a signal that holds the word I'm mad and the DC gear motor will move in a manner that shows that the figure is mad.

- An image of how the robot will kind of look like:

![](Media/IMG1.jpg)

### Oct 4:

- Today I wired up all the components I needed and tested that they were working using the built-in example. I wired up the 3 buttons and test them out using the DigitalReadSerial example and they all worked. I attached the first radio to the Arduino that has the buttons connected and by that, I had my first Arduino ready. The Arduino with the buttons will be that one used to control the working components attached to the other Arduino.

- This is how the first Arduino with the buttons and the radio turned out:

![](Media/IMG2.jpg)
![](Media/IMG3.jpg)
![](Media/IMG4.jpg)

- I wired up the 3 Servo motors and tested them out using the Sweep example. They all worked.

![](Media/IMG5.jpg)

- I wired up the LEDs and tested them out using the Blink example. They all worked.

![](Media/IMG6.jpg)

- I finally soldered the other pair of DC gear motors and connected them to the H-bridge to test if they worked. At first, the DC gear motors didn't work. The H-bridge was powered but the red light on the H-bridge was very dim. I thought the issue was with the battery. However, it wasn't. I realized that my Arduino was powered from the battery without it being connected to the laptop, that's when I figured out that there was something wrong with my wiring. It turns out that the wire connecting the GND from the H-bridge was connected to the 5V on the Arduino. I got it fixed and connected the GND to the GND and by that, it worked. I uploaded a simple code to test the DC gear motors and they worked.

- The soldered DC gearmotors:

![](Media/IMG7.jpg)

- The Arduino was powered from the battery:

![](Media/IMG8.jpg)

- The H-brigde light was dim:

![](Media/IMG9.jpg)

- Functioning DC gearmotors:

![](Media/IMG10.jpg)

### Oct 5:

- Today I worked a bit on getting my Arduino code to work or more specifically get the basis of my code done. I started by trying to understand how the radio transmitter and receiver's code work. Although I didn't understand some lines the overall idea of the code somehow made sense. So I worked on getting the transmitter code done, however, I'm still not sure if it works or not. 
- The discussion that was happening on Discourse about data and sequences was really helpful, it added to my understanding of how the code works.

### Oct 6:

- Today I worked on trying to complete the code for my project. I fixed what I had in my control code after understanding how the code actually works and what the commands are from today's class. I also worked on getting the basics of the receiver code done. 

### Oct 7:

- Today I worked to prototyping the physical appearance of the robot. I experimented with the cardboards. I created a potential overshape for different parts and how they will be placed.

- The DC gearmotors place:

![](Media/IMG11.jpg)
![](Media/IMG12.jpg)
![](Media/IMG13.jpg)

- The top cover of robot:

![](Media/IMG14.jpg)

- A small shelf to hold the Arduino:

![](Media/IMG15.jpg)

- The Servo motor place:

##### Note: the video is too big to be displayed by can be found in this [link](https://drive.google.com/drive/folders/1Rfj4b0oC8dW9Eg20YPf45i3h9HUjXvx3) in the name "VID1.mov".

### Oct 10:

- Today I worked on what the actual physical appearance of the robot would look like. The first components I built for the robot were only for experimenting on how things would look like. However, what I built today is for the final robot.

- This is how the box looks like:

![](Media/IMG16.jpg)
![](Media/IMG17.jpg)

- This shelf is there to carry the Arduino:

![](Media/IMG18.jpg)
![](Media/IMG19.jpg)
![](Media/IMG20.jpg)

- These holders were built to hold the Servo motors:

![](Media/IMG21.jpg)
![](Media/IMG22.jpg)
![](Media/IMG23.jpg)

### Oct 11:
