import tweepy
import serial
import datetime
import time
import os
import subprocess

import keys

auth = tweepy.OAuthHandler(keys.consumer_key,
			   keys.consumer_secret)
auth.set_access_token(keys.access_token,
		      keys.access_token_secret)
api = tweepy.API(auth)

def tweet():
	today = datetime.datetime.now()
	msg = '(Chatty Doorbell) Ding dong! Someone was at the door at %s' % \
		today.strftime('%Y/%m/%d %H:%M:%S')
	print(msg)
	api.update_status(msg)

def main():
	ard = serial.Serial('/dev/tty96B0', 115200)
	print("Welcome to the tweeting doorbell! To quit, press CTRL + C")
	try:
		while True:
			ardOut = ard.readline()
			if ardOut.find("tweet") != -1:
				print("Button pushed!!")
				tweet()
	except KeyboardInterrupt:
		print("CTRL-C!! Exiting...")

if __name__=='__main__':
    main()

