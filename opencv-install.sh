#!/bin/bash
#sudo apt-get update
sudo apt-get install -y build-essential
sudo apt-get install -y cmake
sudo apt-get install -y cmake-qt-gui
sudo apt-get install -y libavcodec-dev libavformat-dev libswscale-dev
sudo apt-get install -y libjpeg-dev libpng-dev libtiff-dev libjasper-dev
if [ ! -f 3.4.2.zip ];then
	sudo wget https://github.com/opencv/opencv/archive/3.4.2.zip
fi
sudo unzip -n 3.4.2.zip 
if [ ! -f opencv-build ];then
	mkdir opencv-build
fi

echo "cmake or cmake-gui config this source?"
echo "1.cmake"
echo "2.cmake-gui"
read SELECT

echo "please input opence source path:"
echo $(ls | grep "opencv*")
echo "please your soure path:"
read CVPATH

if [ $SELECT -eq 1 ];then
	cd opencv-build && cmake ../$CVPATH/
elif [ $SELECT -eq 2 ];then
	cd opencv-build && cmake-gui ../$CVPATH/
fi

make -j8
make install

echo "install success"
