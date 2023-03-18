import math
PI = 3.141592654

while True:
    try:
        ang, dist, alt = map(float, input().split())
    except EOFError:
        break
    radianos = ang * PI/180

    cat_op = math.tan(radianos)*dist 
    print(round(5*(cat_op+alt), 1))
    