#!/bin/sh

find . -name "*.sh" -type f -execdir basename '{}' ';' | cut -f 1 -d '.'
