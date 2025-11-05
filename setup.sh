#!/bin/bash


# check the env file
if [ -f .env ]; then
	export $(grep -v '^#' ./.env | xargs)
else
	echo ".env file missing!"
	exit 1
fi



# Function to install packages for Arch Linux
install_arch() {
	echo "Detected Arch Linux. Installing gcc, g++, build-essential, gdb..."
	sudo pacman -Syu --noconfirm gcc g++ gdb
	echo "setting up git configs"
	git config credential.helper store
	git config user.name $NAME
	git config user.email $EMAIL
	git push https://tazerface007:{$TOKEN}@github.com/tazerface007/cpp.git main
	echo "setup complete! enjoy coding!"
}

install_ubuntu_debian() {
	echo "Detected Ubuntu/Debian Linux. Installing gcc, g++, build-essential, gdb..."
	sudo apt update -y
	sudo apt install -y gcc g++ build-essential gdb
	echo "setting up git configs"
	git config credential.helper store
	git config user.name $NAME
	git config user.email $EMAIL
	git push https://tazerface007:{$TOKEN}@github.com/tazerface007/cpp.git main
	echo "setup complete! enjoy coding!"
}


install_alpine() {
	echo "Detected Alpine Linux. Installing gcc, g++, build-base, gdb..."
	sudo apk update
	sudo apk add  gcc g++ build-base gdb
	echo "setting up git configs"
	git config credential.helper store
	git config user.name $NAME
	git config user.email $EMAIL
	git push https://tazerface007:$TOKEN@github.com/tazerface007/cpp.git main
	echo "setup complete! enjoy coding!"
}


# Check the system distribution

if [ -f /etc/os-release ]; then
	. /etc/os-release
	case $ID in
		arch)
			install_arch
			;;
		ubuntu|debian)
			install_ubuntu_debina
			;;
		alpine)
			install_alpine
			;;
		*)
			echo "Unsupported OS. Cannot determine how to install packages."
			exit 1
			;;
	esac
else
	echo "Unable to detect the system. THe /etc/os-reelase file is missing."
	exit 1
fi

