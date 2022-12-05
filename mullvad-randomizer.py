import random
import os

countries = ['ch', 'nl', 'no', 'se', 'pl', 'gb', 'lu']

country1 = random.choice(countries)
country2 = random.choice(countries)

while country1 == country2 :
  country1 = random.choice(countries)

command1 = "mullvad relay set location " + country1
command2 = "mullvad relay set tunnel wireguard --entry-location " + country2

os.system(command1)
os.system(command2)
