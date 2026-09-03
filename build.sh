#!/usr/bin/env bash
set -e
echo "Creating ./bin directory..."
mkdir -p ./bin

echo "Running RecompModTool..."
./RecompModTool ./mod.toml ./bin

echo "Zipping output file into ./bin..."
zip -j ./bin/fast_boot.zip ./bin/fast_boot.nrm

echo "Complete"