#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  sprawdzian.py
#  
#  Copyright 2020  <>
#  
#  This program is free software; you can redistribute it and/or modify
#  it under the terms of the GNU General Public License as published by
#  the Free Software Foundation; either version 2 of the License, or
#  (at your option) any later version.
#  
#  This program is distributed in the hope that it will be useful,
#  but WITHOUT ANY WARRANTY; without even the implied warranty of
#  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#  GNU General Public License for more details.
#  
#  You should have received a copy of the GNU General Public License
#  along with this program; if not, write to the Free Software
#  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
#  MA 02110-1301, USA.
#  
#  


def main(args):
    
    wynik = int(input("Podaj liczbę punktów ucznia"))
    
    if w < 0 and w >60:
        print("Błędne dane")
    elif w < 20:
        print("Podstawowa")
    elif w >= 20 and w <= 40:
        print("Średniozaawansowana")
    else:
        print("Zaawansowana")
    
    
    
    
    
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
