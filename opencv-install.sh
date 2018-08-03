#!/bin/bash
sudo apt-get update
sudo apt get install -y build-essential
sudo apt get install -y cmake
sudo apt get install -y cmake-qt-gui
sudo apt-get install -y libavcodec-dev libavformat-dev libswscale-dev
sudo apt-get install -y libjpeg-dev libpng-dev libtiff-dev libjasper-dev
if [ ! -f 3.4.2.zip ];then
	sudo wget https://github.com/opencv/opencv/archive/3.4.2.zip
fi
sudo unzip -y  3.4.2.zip && cd $(ls | grep *3.4.2)

sudo mkdir opencv-build
cd opencv-build

echo "cmake or cmake-gui config this source?"
echo "1.cmake"
echo "2.cmake-gui"

read SELECT

if [ $SELECT -eq 1 ];then
	cmake ../
elif [ $SELECT -eq 2 ];then
	cmake-gui ../
fi

make -j8 
echo $(make install)

echo "install success"
