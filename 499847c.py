def dist(a, b):
    return (b[0] - a[0]) ** 2 + (b[1] - a[1]) ** 2

def midp(a, b):
    return ((b[0] + a[0]) / 2.0, (b[1] + a[1]) / 2.0)

def are_close(a, b, tol=1e-9):
    return abs(a - b) < tol

if __name__ == "__main__":
    n = int(input())
    
    v = []
    for _ in range(n):
        a, b = map(int, input().split())
        v.append((a, b))
    
    count = 0
    for i in range(n):
        for j in range(n):
            if j != i:
                for k in range(j + 1, n):
                    if k != i:
                        midpoint = midp(v[j], v[k])
                        if are_close(midpoint[0], v[i][0]) and are_close(midpoint[1], v[i][1]):
                            count += 1

    print(count )  
