#------------------------------------------------------Sound Level Sensor ------------------------------------------------------------------------------#

Sound level meter project made by Thien Hoang, March,2018

This project uses a Raspberry Pi 3 Mode B as a sound sensor. A USB soundcard with microphone and a RJ45 cable are needed as peripheral. 
The application runs periodically every second and take record from microphone at a sample rate of 16000Hz. 
The sound is then calculated into 80 pieces of RMS value and displayed as a bar chart on terminal screen. 
If communication is enabled (condition compilation), the sound will be re-calculated into 8 pieces of Fast Level data and sent out to PHP server program.

List of contents
1. Configuration instructions
2. Installation instructions
3. Operating instructions
4. File manifest
5. Copyright and license
6. Contact information

1. Configuration instructions

Configure the Remote character set to UTF-8 by following these step:
	- Open the PuTTY configuration. 
	- Click on the Translation on the Window sector.
	- On the Remote character set choose UTF-8.  

2. Installation instructions

There is no required installation for this project.

3. Operating instructions

Follow these instructions below to run the project

	- Run "make" command on terminal screen.
	- Run "./sound.a" command for running the project.
	
4. File manifest
	- main.c: This is the root file.
	- sound.c: This file contains code for extracting information from the WAV file and processes it, then display the result.
 	- sound.h: This is the header file for sound.c
 	- screen.c: This file contains code for displaying the result of the WAV file on the screen.
 	- screen.h: This is the header file for screen.c
 	- com.c: This file contains code for the communicatinng between Raspberry Pi with online-server.
 	- com.h: This is the header file for comm.c
 	- makefile: This file sets the complication rules
 	- sound.php: This file is stored in the online-server for processing the data received from the project and display it to the user	

5. Copyright and Lincese
	- This project made by Thien Hoang with the assistance of Dr. Gao Chao
	- Raspberry Pi is a trade mark of the Raspberry Pi Foundation.

6. Contact information

Thien Hoang
Dept. of Information technology
Vaasa University of Applied Sciences
Woffintie 30, 65100, Vaasa, Finland
page: www.cc.puv.fi/~e1700691/
email: e1700691(at)edu.vamk.fi
