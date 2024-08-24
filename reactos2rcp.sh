#!/usr/bin/env bash

cp -fr ../reactos/base/applications/control/*.c .
cp -fr ../reactos/base/applications/control/*.rc .
cp -fr ../reactos/base/applications/control/*.h .
cp -fr ../reactos/base/applications/control/resources/*.ico ./resources
cp -fr ../reactos/output-MinGW-i386/sdk/include/reactos/version.h reactos/
cp -fr ../reactos/output-MinGW-i386/sdk/include/reactos/buildno.h reactos/
