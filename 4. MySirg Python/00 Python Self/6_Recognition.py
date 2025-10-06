import os, time
os.system('cls')

import pyttsx3
engine = pyttsx3.init('sapi5')
engine.setProperty('rate', 180)

import speech_recognition as sr
r = sr.Recognizer()

with sr.Microphone() as source:
    print("Speak Anything: 1",end=' ')
    r.adjust_for_ambient_noise(source, duration=0.6)
    audio = r.listen(source, timeout=5, phrase_time_limit=10)

try:
    text = r.recognize_google(audio, language="en-IN")
    print(f"You said: {text}")
    engine.say(f"You said: {text}")
except sr.UnknownValueError:
    print("Sorry, could not understand.")
    engine.say("Sorry, could not understand.")
except sr.RequestError as e:
    print(f"Speech API error: {e}")
    engine.say("Speech service error.")
finally:
    engine.runAndWait()
# filepath: d:\a Coding\ALL\4. MySirg Python\00 Python Self\6_Recognition.py
import os, time
os.system('cls')

import pyttsx3
engine = pyttsx3.init('sapi5')
engine.setProperty('rate', 180)

import speech_recognition as sr
r = sr.Recognizer()

with sr.Microphone() as source:
    print("Speak Anything: 2",end=' ')
    r.adjust_for_ambient_noise(source, duration=0.6)
    audio = r.listen(source, timeout=5, phrase_time_limit=10)

try:
    text = r.recognize_google(audio, language="en-IN")
    print(f"You said: {text}")
    engine.say(f"You said: {text}")
except sr.UnknownValueError:
    print("Sorry, could not understand.")
    engine.say("Sorry, could not understand.")
except sr.RequestError as e:
    print(f"Speech API error: {e}")
    engine.say("Speech service error.")
finally:
    engine.runAndWait()