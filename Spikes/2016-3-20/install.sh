#!/bin/bash
#This script installs GMP and preps the program for use.
echo -e "Running system checks, Note: does not check versions currently, please keep your system up to date\n"
dpkg -s libgmp3-dev &> install.log
dpkg -s gcc &>> install.log
if cat install.log | grep 'not installed'; then
	while true; do
		read -p "Would you like to install these? Requires running script as sudo?" yn
		case $yn in
		    [Yy]* ) apt-get install libgmp3-dev build-essential; break;;
		    [Nn]* ) exit;;
		    * ) echo "Please answer yes or no.";;
		esac
	done
else
	echo "Everything is installed"
fi
