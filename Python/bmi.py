#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  bmi.py
  
#  


def main(args):
    waga = float (input("Podaj swoją wagę (w kilogramach): "))
    wzrost = float (input("Podaj swój wzrost (w metrach): "))
    
    bmi = waga/(wzrost*wzrost)
    
    print(bmi)
    
    if bmi < 18.5:
        print("Masz niedowagę")
    elif  bmi >= 18.5 and bmi < 24.99:
            print("Waga w normie")
    elif  bmi >= 25 and bmi < 29.99:
        print("Masz nadwagę")
    elif bmi >= 30 and bmi < 50:
        print("Masz otyłość")
                    
    
    

    
    
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
