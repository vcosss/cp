N = 5
combinations = []
for x in range(1,N+1):
  for y in range(1,N+1):
    for z in range(1,N+1):
      combinations.append([x,y,z])

for i in combinations:
    print(i)
print(len(combinations))