import os,pyttsx3
engine=pyttsx3.init()
os.system('cls')
engine.save_to_file("Shubham Bhaiya is a good person","test.mp3")
engine.runAndWait()