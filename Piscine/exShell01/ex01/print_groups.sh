#!/bin/sh

FT_USER="daemon"
id -nG $FT_USER | sed 's/ /,/g'

