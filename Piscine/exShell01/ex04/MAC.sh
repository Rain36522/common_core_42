#!/bin/sh
ifconfig | grep "ether " | grep -E ..:..:..:..:..:.. | sed "s/ether //g"
