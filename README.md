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
disk-mounter --list

// mount disk from /dev/sda in /media/sda
disk-mounter --mount=sda

// umount the sda disk and can remove safety
disk-mounter --umount=sda
```

that is all.
