# mullvad-randomizer

Simple .sh bash script to automatically and randomly select a mullvad entry and exit node for mullvad VPN

## Setup randomization on linux

1. Move the script to a known location, here we will be using /usr/bin/mullvad-randomizer.sh

2. Add a crontab entry by typing crontab -e, selecting your tekst editor and adding it as a method to run. The bellow example will make it run every 30 minutes.

*/30 * * * * /usr/bin/mullvad-randomizer.sh >/dev/null 2>&1

3. Save and exit and now your mullvad connection will be randomized every 30 minutes.