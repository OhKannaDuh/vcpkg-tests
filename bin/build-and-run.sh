#!/bin/bash

SCRIPT_DIRECTORY=$( cd -- "$( dirname -- "${BASH_SOURCE[0]}" )" &> /dev/null && pwd )

sh $SCRIPT_DIRECTORY/build.sh
sh $SCRIPT_DIRECTORY/run.sh
