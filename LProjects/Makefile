TOOLCHAIN:=/home/labworks/WorkSpace/Builds/dropG.p8/toolchain/bin/
CROSS_COMPILE:=arm-linux-gnueabihf-

#PATH:=${TOOLCHAIN}:${PATH}
PATH:=/home/labworks/WorkSpace/Builds/dropG.p8/toolchain/bin/

all:
	${CROSS_COMPILE}gcc led.c -o led
install:
	sudo cp led /opt/labs/ex/09/rootfs/usr/sbin/
clean:
	rm -Rf *.o led
