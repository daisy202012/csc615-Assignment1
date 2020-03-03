trafficlight: trafficlights.c
	gcc -Wall trafficlights.c -o assignment1wpi -lwiringPi

clean:
	rm assignment1wpi
