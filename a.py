# rows = 5
# for i in range(1, rows+1):
#     spaces = " "*(rows-i)
#     stars = "*"*(2*i-1)
#     print(spaces + stars + spaces)

# rows = 5
# columns = 3

# for i in range(1,rows+1):
#     spaces = " "*abs( (rows+1)//2 - i)
#     stars = "*"*min(spaces,columns)
#     print(stars + spaces)


rows = 5

for i in range(rows):
  # Print i+1 stars for each row (starting from 1)
  for j in range(i + 1):
    print("*", end=" ")
  # Move to the next line after each row
  print()
