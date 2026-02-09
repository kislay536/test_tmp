#!/bin/bash
set -e
ROOT=$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)
cd $ROOT/tmp

if [ -z ${NUM_JOBS} ]; then
    NUM_JOBS=1
fi

if [ ! -e "$VERILATOR_ROOT/bin/verilator" ]; then
    echo "Installing Verilator"
    if [ -d verilator-5.044 ]; then rm -rf verilator-5.044; fi
    git clone https://github.com/metro-mpi/verilator-private.git verilator-5.044
    cd verilator-5.044
    git checkout v5.044
    mkdir -p $VERILATOR_ROOT

    # Use mpic++ as compiler
    export CXX=mpic++

    # copy scripts
    autoconf && ./configure --prefix="$VERILATOR_ROOT" && make -j${NUM_JOBS}
    cp -r * $VERILATOR_ROOT/
    make test
else
    echo "Using Verilator from cached directory."
fi
