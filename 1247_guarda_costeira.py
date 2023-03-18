import math

while True:
    try:
        d, vf, vg = map(float, input().split())
    except EOFError:
        break
    
    hip = math.sqrt(12**2 + d**2)
    temp_f = 12 / vf
    temp_g = hip / vg
    
    if temp_g <= temp_f:
        print("S")
    else:
        print("N")