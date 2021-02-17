# Bitcoin ECC Mining program

Writer: Ha-young Park, mintyoung@gm.gist.ac.kr

Contact PI: Proof. Heung-No Lee, heungno@gist.ac.kr

Github for this example: https://github.com/cryptoecc/Bitcoin_ECC_MiningProgram

For more information: [INFONET](https://infonet.gist.ac.kr/)

This document is for Bitcoin ECC mining.

## Prerequisites
-`bitcoin-ecc` must be installed.
- `tmux` must be installed.

```shell
$ sudo apt install tmux
```

## Installation

```shell
$ git clone https://github.com/cryptoecc/Bitcoin_ECC_MiningProgram
```

## Run mining program

Before starting mining, check network is synchronized.
Use this command to check number of blocks.

```shell
$ bitcoin-cli getblockcount
```

If the network is syncronized then execute mining program on tmux window.

```shell
$ tumx
$ ./main
```

Enter your bitcoin ecc public address.
After that, Simply exit the terminal window.


