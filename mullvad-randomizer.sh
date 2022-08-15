#!/bin/bash
array[0]="ch"
array[1]="nl"
array[2]="no"
array[3]="se"
array[4]="pl"
array[5]="gb"
array[6]="lu"

size=${#array[@]}
countryarray1=$(($RANDOM % $size))
countryarray2=$(($RANDOM % $size))
country1=${array[$countryarray1]}
country2=${array[$countryarray2]}

while [ $country1 = $country2 ]
do
 countryarray1=$(($RANDOM % $size))
 country1=${array[$country1]}
 echo "Rerolled country1"
done

echo "Set the Mullvad exit location to $country1"
mullvad relay set location $country1
echo "Set the Mullvad Entry Location to $country2"
mullvad relay set tunnel wireguard --entry-location $country2
