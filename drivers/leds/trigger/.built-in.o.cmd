cmd_drivers/leds/trigger/built-in.o :=  /opt/freescale/usr/local/gcc-4.6.2-glibc-2.13-linaro-multilib-2011.12/fsl-linaro-toolchain/bin/arm-none-linux-gnueabi-ld -EL    -r -o drivers/leds/trigger/built-in.o drivers/leds/trigger/ledtrig-timer.o drivers/leds/trigger/ledtrig-oneshot.o drivers/leds/trigger/ledtrig-heartbeat.o drivers/leds/trigger/ledtrig-backlight.o drivers/leds/trigger/ledtrig-gpio.o 