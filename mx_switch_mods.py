#!/usr/bin/env python

# This script tries to suggest a minimal number of modified switches that uses
# mostly easy-to-get switches (Blue, Clear, Black, Grey linear) and offer some
# options for making sure not to waste any of the switch parts.

# This covers only the Cherry MX family of switches.

import itertools

springs = [
    '45 cN',  # spring from Brown or Red
    '50 cN',  # spring from Blue
    '60 cN',  # spring from Black
    '65 cN',  # spring from Clear
    '80 cN',  # spring from Green or Grey linear
]
stems = [
    'Black',  # MX1A-11xx
    'Blue',  # MX1A-E1xx
    'Brown',  # MX1A-G1xx
    'Clear',  # MX1A-C1xx
    'Green',  # MX1A-F1xx
    'Grey linear',  # MX1A-21xx
    'Red',  # MX1A-L1xx
]

swaps = list(itertools.product(springs, stems))

# Stock switches without any swaps
swaps.remove(('45 cN', 'Brown'))  # stock Brown
swaps.remove(('45 cN', 'Red'))  # stock Red
swaps.remove(('50 cN', 'Blue'))  # stock Blue
swaps.remove(('60 cN', 'Black'))  # stock Black
swaps.remove(('65 cN', 'Clear'))  # stock Clear
swaps.remove(('80 cN', 'Green'))  # stock Green
swaps.remove(('80 cN', 'Grey linear'))  # stock Grey linear

# Combinations that mess with harder-to-get switches for zero benefit
swaps.remove(('45 cN', 'Black'))  # same as Red
swaps.remove(('45 cN', 'Clear'))  # same as Brown
swaps.remove(('45 cN', 'Grey linear'))  # same as Red
swaps.remove(('50 cN', 'Green'))  # same as Blue
swaps.remove(('60 cN', 'Red'))  # same as Black
swaps.remove(('65 cN', 'Brown'))  # same as Clear
swaps.remove(('80 cN', 'Red'))  # same as Grey linear

# Combinations that mess with harder-to-get switches for little benefit
swaps.remove(('45 cN', 'Blue'))  # too close to Blue
swaps.remove(('45 cN', 'Green'))  # too close to Blue
swaps.remove(('50 cN', 'Brown'))  # too close to Brown
swaps.remove(('50 cN', 'Red'))  # too close to Red
swaps.remove(('60 cN', 'Brown'))  # too close to Clear
swaps.remove(('65 cN', 'Red'))  # too close to Black

# Try to aim for easier-to-get switches when an equivalent is available
swaps.remove(('60 cN', 'Green'))  # use 60 cN Blue instead
swaps.remove(('65 cN', 'Green'))  # use 65 cN Blue instead
swaps.remove(('80 cN', 'Brown'))  # use 80 cN Clear instead

# More totally useless combinations
swaps.remove(('60 cN', 'Grey linear'))  # same as Black
swaps.remove(('80 cN', 'Black'))  # same as Grey linear
#swaps.remove(('80 cN', 'Blue'))  # same as Green

# Other combinations that may be too subtle
#swaps.remove(('50 cN', 'Black'))  # too close to Red
#swaps.remove(('50 cN', 'Clear'))  # too close to Brown  <-- "Ergo Clear"
#swaps.remove(('50 cN', 'Grey linear'))  # too close to Red
#swaps.remove(('60 cN', 'Blue'))  # spare 50 cN Black  <-- "Ghetto Green"
#swaps.remove(('60 cN', 'Clear'))  # too close to Clear  <-- "Panda Clear"
#swaps.remove(('65 cN', 'Black'))  # too close to Black
#swaps.remove(('65 cN', 'Blue'))  # spare 50 cN Clear
#swaps.remove(('65 cN', 'Grey linear'))  # too close to Black

keys = ['{spring} {stem}'.format(spring=pair[0], stem=pair[1])
    for pair in swaps]

keys.extend(stems)

print(keys)
