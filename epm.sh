#!/bin/sh

echo "Building GOBO..."
cd $GOBO/library/kernel
geant install
cd $GOBO/library/lexical
geant install
cd $GOBO/library/parse
geant install
