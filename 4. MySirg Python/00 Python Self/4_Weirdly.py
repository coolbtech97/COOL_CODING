import os
import pyttsx3
os.system('cls')
engine=pyttsx3.init()
voices = engine.getProperty('voices')
engine.setProperty('voice', voices[1].id)
# Switch male/female
engine.setProperty('rate', 150)
# speed
engine.setProperty('volume', 0.8)
# volume 0-1
engine.say("Shubham Bhaiya is a good person")