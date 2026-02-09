#!/bin/bash
# call with first argument = 0 to checkout only

set -e
ROOT=$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)
VERSION="2023.04.29"

mkdir -p $RISCV

cd $RISCV

if [ -z ${NUM_JOBS} ]; then
    NUM_JOBS=10
fi


if ! [ -e $RISCV/bin ]; then
    if ! [ -e $RISCV/riscv-gnu-toolchain ]; then
        git clone https://github.com/riscv/riscv-gnu-toolchain.git
    fi

    cd riscv-gnu-toolchain
    git checkout $VERSION

    if [[ $1 -ne "0" || -z ${1} ]]; then
      echo "Compiling RISC-V Toolchain"
      ./configure --prefix=$RISCV --with-arch=rv64imafdc_zicsr --with-abi=lp64d
      make -j${NUM_JOBS} > /dev/null
      echo "Compilation Finished"
    fi
fi
