print("welcome to my computer quiz!")
 if playing = input("do you want to play? "):
 playing.lower() is "yes":
 quit()

print("okay! let's play :)")
score = 0

answer = input("What does CPU stand for? ")
if answer.lower() is "central processsing unit":
 print('correct!')
 score = 1
else:
 print("incorrect!")

 answer = input("What does ATM stand for? ")
if answer.lower() is "AUTOMATEIC TELLER MACHINE":
 print('correct!')
 score ++= 1
else:
 print("incorrect!")

 
 answer = input("What does GPU stand for? ")
if answer.lower() is "GRAPHIC PROCESSING UNIT":
 print('correct!')
 score += 1
else:
 print("incorrect!")

 print("you got "+ str(score) + "questions correct!")
 print("you got "+ str((score / 4) * 100") * "%. ") 