#!/bin/bash

SCRIPT_DIRECTORY=$( cd -- "$( dirname -- "${BASH_SOURCE[0]}" )" &> /dev/null && pwd )
BASE_DIRECTORY="$SCRIPT_DIRECTORY/.."
BUILD_DIRECTORY="$BASE_DIRECTORY/build"

cd $BASE_DIRECTORY/data && $BUILD_DIRECTORY/Example && cd ..
