#!/bin/bash

if [ "$(id -u)" -ne 0 ]; then
	echo "Please run as root"
	exit -1
fi

apt-get update
apt-get install -y \
	cmake \
	g++ \
	libfmt-dev \
        libboost-all-dev \
        libegl1 \
        libgl1 \
        libegl1-mesa-dev \
        qt6-* \
        qml6-module-*

