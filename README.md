# DISK MOUNTER

This CLI mount and umount disk on linux.

How to install:

```shell
git clone https::/github.com/Raisess/cli-creator
cd cli-creator
make
make install
cd ..
git clone https://github.com/Raisess/disk-mounter
cd disk-mounter
make
make install
```

Usage:

```shell
// COMMANDS:
// list all mountable devices
dm list

// mount disk from /dev/sda in /media/sda
sudo dm mount sda

// umount the sda disk and can remove safety
sudo dm umount sda
```

that is all.
